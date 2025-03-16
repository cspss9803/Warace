// Copyright 2021-2022, Athian Games. All Rights Reserved. 


#include "MySQLDBConnector.h"

UMySQLDBConnector::UMySQLDBConnector()
{
	bIsConnectionBusy = false;
}

bool UMySQLDBConnector::CreateNewConnection(FString Server, FString DBName, FString UserID, FString Password, TMap<FString, FString> ExtraParams,
	FString& ErrorMessage)
{
	bool isConnectionSet = false;

#if PLATFORM_WINDOWS
	if (!bIsConnectionBusy)
	{
		bIsConnectionBusy = true;
		if (DLLManager::LoadDLL("MySQLLibrary.dll"))
		{
			isConnectionSet = DLLManager::CreateConnection(0, Server, DBName, UserID, Password, ExtraParams, ErrorMessage);

		}
		else
		{
			ErrorMessage = "Dll Error. Ensure that you have the correct dlls in your project Binaries.";
		}

		bIsConnectionBusy = false;

	}

#endif
	
	return isConnectionSet;

}

void  UMySQLDBConnector::CloseConnection()
{
#if PLATFORM_WINDOWS
	
	if (DLLManager::LoadDLL("MySQLLibrary.dll"))
	{
		DLLManager::CloseConnection(0);
		DLLManager::UnLoadDLL();
	}
#endif
}

void UMySQLDBConnector::UpdateDataFromQuery(FString Query, bool& IsSuccessful, FString& ErrorMessage)
{
#if PLATFORM_WINDOWS
	if (!bIsConnectionBusy)
	{
		bIsConnectionBusy = true;
		if (DLLManager::LoadDLL("MySQLLibrary.dll"))
		{
			IsSuccessful = DLLManager::UpdateDataFromQuery(0, Query, ErrorMessage);
			DLLManager::UnLoadDLL();
		}

		bIsConnectionBusy = false;
	}

#endif
}


void UMySQLDBConnector::SelectDataFromQuery(FString Query, bool& IsSuccessful, FString& ErrorMessage,
	TArray<FMySQLDataTable>& ResultByColumn, TArray<FMySQLDataRow>& ResultByRow)
{
#if PLATFORM_WINDOWS

	if (!bIsConnectionBusy)
	{
		bIsConnectionBusy = true;

		if (DLLManager::LoadDLL("MySQLLibrary.dll"))
		{
			IsSuccessful = DLLManager::SelectDataFromQuery(0, Query, ErrorMessage, ResultByColumn, ResultByRow);
			DLLManager::UnLoadDLL();
		}

		bIsConnectionBusy = false;

	}
#endif
}

void UMySQLDBConnector::UpdateImageFromPath(FString Query, FString UpdateParameter, int ParameterID, FString ImagePath, 
	bool& IsSuccessful, FString& ErrorMessage)
{
#if PLATFORM_WINDOWS
	FString ImageParam = "@" + UpdateParameter;
	Query = Query.Replace(*ImageParam, *FString("?"));


	if (!bIsConnectionBusy)
	{
		bIsConnectionBusy = true;
	
		if (DLLManager::LoadDLL("MySQLLibrary.dll"))
		{
			IsSuccessful = DLLManager::UpdateImageFromPath(0, Query, ImagePath, ErrorMessage);
			DLLManager::UnLoadDLL();
		}
	
		bIsConnectionBusy = false;
	
	}
#endif
}

UTexture2D* UMySQLDBConnector::SelectImageFromQuery(FString Query, FString SelectParameter, bool& IsSuccessful, FString& ErrorMessage)
{

	UTexture2D* ImageTexture = nullptr;

#if PLATFORM_WINDOWS
	FString ImageParam = "@" + SelectParameter;
	Query = Query.Replace(*ImageParam, *FString("?"));
	
	string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());
	
	if (!bIsConnectionBusy)
	{
		bIsConnectionBusy = true;
	
		if (DLLManager::LoadDLL("MySQLLibrary.dll"))
		{
			
			char* ImageChar =  DLLManager::SelectImageFromQuery(0, Query, SelectParameter, ErrorMessage);
			ImageTexture = UMySQLBPLibrary::LoadTexturefromCharData(ImageChar);
			DLLManager::UnLoadDLL();
		}
	
		bIsConnectionBusy = false;
	
	}
#endif
	
	IsSuccessful = false;
	return ImageTexture;
}



