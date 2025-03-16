// Copyright 2021-2022, Athian Games. All Rights Reserved. 

#pragma once


#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Modules/ModuleManager.h"
#include "ImageUtils.h"
#include "Interfaces/IPluginManager.h"
#include "Serialization/BufferArchive.h"
#include "IImageWrapperModule.h"
#include "IImageWrapper.h"
#include "RHICommandList.h"

#include "ImageWriteQueue/Public/ImageWriteBlueprintLibrary.h"
#include "ImageWriteQueue/Public/ImageWriteQueue.h"
#include "ImageWriteQueue/Public/ImageWriteTask.h"


#include <codecvt>
using namespace std;

#include "MySQLBPLibrary.generated.h"


USTRUCT(BlueprintType, Category = "MySql|Tables")
struct FMySQLDataTable
{
	GENERATED_BODY()
		
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQLDataTable")
		FString ColumnName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQLDataTable")
		TArray<FString> ColumnData;
};

USTRUCT(BlueprintType, Category = "MySql|Tables")
struct FMySQLDataRow
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQLDataRow")
		TArray<FString> RowData;
};


/**
* Contains all the methods that are used to connect to the C# dll 
* which takes care of connecting to the MySQL server and executing
* the given queries. These methods can be directly called from GetErrorMessage
* the Blueprints.

*/
UCLASS()
class MYSQL_API UMySQLBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


private:

	

public:

	static char* GetCharFromTextureData(UTexture2D *Texture, FString Path);
	static UTexture2D* LoadTexturefromCharData(char* ImageChar);
	
	static void CreateImageWrapperModule();
	static char* GetRawImageFromPath(FString ImagePath);
	static bool SaveTextureToPath(UTexture2D* Texture, const FString Path);

	static void FlushImageRenderingCommands();
	static void GetTexturePixels(UTexture2D* Texture, TArray<FColor>& OutPixels);

};
