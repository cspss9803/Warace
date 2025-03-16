﻿// Copyright 2021-2022, Athian Games. All Rights Reserved. 


#include "MySQLBPLibrary.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Serialization/BufferArchive.h"
#include "Templates/SharedPointer.h"


IImageWrapperModule* ImageWrapperModule = nullptr;

void UMySQLBPLibrary::FlushImageRenderingCommands()
{
	if (!GIsRHIInitialized)
	{
		return;
	}

	// Need to flush GT because render commands from threads other than GT are sent to
	// the main queue of GT when RT is disabled
	if (!GIsThreadedRendering
		&& !FTaskGraphInterface::Get().IsThreadProcessingTasks(ENamedThreads::GameThread)
		&& !FTaskGraphInterface::Get().IsThreadProcessingTasks(ENamedThreads::GameThread_Local))
	{
		FTaskGraphInterface::Get().ProcessThreadUntilIdle(ENamedThreads::GameThread);
		FTaskGraphInterface::Get().ProcessThreadUntilIdle(ENamedThreads::GameThread_Local);
	}

	ENQUEUE_RENDER_COMMAND(FlushPendingDeleteRHIResourcesCmd)(
		[](FRHICommandListImmediate& RHICmdList)
		{
			RHICmdList.ImmediateFlush(EImmediateFlushType::FlushRHIThreadFlushResources);
		});


	// Find the objects which may be cleaned up once the rendering thread command queue has been flushed.
	FPendingCleanupObjects* PendingCleanupObjects = GetPendingCleanupObjects();

	// Issue a fence command to the rendering thread and wait for it to complete.
	FRenderCommandFence Fence;
	Fence.BeginFence();
	Fence.Wait();

	// Delete the objects which were enqueued for deferred cleanup before the command queue flush.
	delete PendingCleanupObjects;
}

void UMySQLBPLibrary::GetTexturePixels(UTexture2D* Texture, TArray<FColor>& OutPixels)
{

	OutPixels.Reset();

	ENQUEUE_RENDER_COMMAND(FSaveMySQLImageResource)(
		[OutPixels, Texture](FRHICommandListImmediate& RHICmdList)
		{
			TArray<FColor> OutData = OutPixels;
			FTextureResource* TextureResource = Texture->GetResource();
			FTexture2DRHIRef Texture2DRHIRef = TextureResource->TextureRHI->GetTexture2D();

			FIntRect Rect = FIntRect(0, 0, Texture->GetImportedSize().X, Texture->GetImportedSize().Y);
			FReadSurfaceDataFlags Flags = FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX);

			RHICmdList.ReadSurfaceData(
				Texture2DRHIRef,
				Rect,
				OutData,
				Flags
			);
		});

	FlushImageRenderingCommands();
}


UTexture2D* UMySQLBPLibrary::LoadTexturefromCharData(char* ImageChar)
{
	CreateImageWrapperModule();

	if (ImageWrapperModule)
	{

		TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule->CreateImageWrapper(EImageFormat::PNG);

		int length = reinterpret_cast<size_t>(ImageChar);
		TArray<uint8>  CompressedImageData;
		CompressedImageData.AddUninitialized(length);
		for (int i = 0; i < length; i++)
		{
			CompressedImageData[i] = ImageChar[i];
		}

		if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(CompressedImageData.GetData(), CompressedImageData.Num()))
		{
			TArray<uint8> UncompressedBGRA;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				UTexture2D* Texture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

				if (Texture)
				{

					void* TextureData = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
					FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
					Texture->GetPlatformData()->Mips[0].BulkData.Unlock();

					Texture->UpdateResource();
					return Texture;
				}
			}
		}
	}

	return nullptr;

}




char* UMySQLBPLibrary::GetCharFromTextureData(UTexture2D* Texture, FString Path)
{
	FVector2D ImageSize = FVector2D(Texture->GetSurfaceWidth(), Texture->GetSurfaceHeight());
	char* imagebytes = new char[ImageSize.X * ImageSize.Y * 4];


	if (Texture->GetPlatformData()->Mips.Num() > 0)
	{
		TextureCompressionSettings OldCompressionSettings = Texture->CompressionSettings;
#if WITH_EDITORONLY_DATA
		TextureMipGenSettings OldMipGenSettings = Texture->MipGenSettings;
#endif
		bool OldSRGB = Texture->SRGB;

		Texture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
#if WITH_EDITORONLY_DATA
		Texture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
#endif	

		Texture->SRGB = false;
		Texture->UpdateResource();

		FTexture2DMipMap* Mip = &Texture->GetPlatformData()->Mips[0];

		uint8* TextureData = static_cast<uint8*>(Mip->BulkData.Lock(LOCK_READ_WRITE));


		for (int i = 0; i < (ImageSize.X * ImageSize.Y); i += 4)
		{
			imagebytes[i] = TextureData[i];
			imagebytes[i + 1] = TextureData[i + 1];
			imagebytes[i + 2] = TextureData[i + 2];
			imagebytes[i + 3] = TextureData[i + 3];

		}


		TArray<FColor> OutPixels;
		GetTexturePixels(Texture, OutPixels);


		Texture->CompressionSettings = OldCompressionSettings;
#if WITH_EDITORONLY_DATA
		Texture->MipGenSettings = OldMipGenSettings;
#endif
		Texture->SRGB = OldSRGB;

		Mip->BulkData.Unlock();
		Texture->UpdateResource();
	}

	return imagebytes;
}


bool UMySQLBPLibrary::SaveTextureToPath(UTexture2D* Texture, const FString Path)
{

	if (Texture && FPaths::ValidatePath(Path))
	{

		FVector2D ImageSize = FVector2D(Texture->GetSurfaceWidth(), Texture->GetSurfaceHeight());

		if (char* imagebytes = GetCharFromTextureData(Texture, Path))
		{
			char* path = TCHAR_TO_ANSI(*Path);
			return false;
		}

	}
	return false;
}




void UMySQLBPLibrary::CreateImageWrapperModule()
{
	if (!ImageWrapperModule)
	{
		ImageWrapperModule = &FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	}
}

char* UMySQLBPLibrary::GetRawImageFromPath(FString ImagePath)
{
	CreateImageWrapperModule();
	void* imagebytes = nullptr;
	if (ImageWrapperModule)
	{
		FString Extension = FPaths::GetExtension(ImagePath);
		EImageFormat ImageFormat;

		if (Extension.Equals("jpeg", ESearchCase::IgnoreCase) || Extension.Equals("jpg", ESearchCase::IgnoreCase))
		{
			ImageFormat = EImageFormat::JPEG;
		}
		else if (Extension.Equals("png", ESearchCase::IgnoreCase))
		{
			ImageFormat = EImageFormat::PNG;
		}
		else
		{
			ImageFormat = EImageFormat::BMP;
		}

		TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule->CreateImageWrapper(ImageFormat);

		TArray<uint8> RawFileData;
		if (FFileHelper::LoadFileToArray(RawFileData, *ImagePath))
		{
			if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
			{
				TArray<uint8> UncompressedBGRA;
				if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
				{
					const int64 RawNum = UncompressedBGRA.Num();
					imagebytes = FMemory::Malloc(RawNum);
					FMemory::Memcpy(imagebytes, UncompressedBGRA.GetData(), RawNum);

				}
			}
		}

	}

	return static_cast<char*>(imagebytes);
}



