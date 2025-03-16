// Copyright 2021-2022, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Misc/Paths.h"
#include "PlatformFeatures.h"
#include "MySQLBPLibrary.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

#if PLATFORM_WINDOWS
	#include "Windows/WindowsPlatformProcess.h"
	#include <map>
	#include <string>
	#include <vector>
using namespace std;

static class DLLManager
{
private:

	static TArray<FString> GetSplitStringArray(FString Input, FString Pattern);

public:

	/**
	* Loads DLL from the given name.
	* @param  DLLName  The DLL to load.
	* @returns true if the DLL is successfully loaded.
	*/
	static bool LoadDLL(FString DLLName);

	/**
	* UnLoads the currently loaded DLL.
	*/
	static void UnLoadDLL();



	static bool CreateConnection(int ConnectionID, FString Server, FString DBName, FString UserID, FString Password, TMap<FString, FString> ExtraParams,
		FString& ErrorMessage);

	static bool UpdateDataFromQuery(int ConnectionID, FString Query, FString& ErrorMessage);
	static bool SelectDataFromQuery(int ConnectionID, FString Query, FString& ErrorMessage, TArray<FMySQLDataTable>& ResultByColumn, TArray<FMySQLDataRow>& ResultByRow);

	static void CloseConnection(int ConnectionID);

	static bool UpdateImageFromPath(int ConnectionID, FString Query, FString ImagePath, FString& ErrorMessage);
	static char* SelectImageFromQuery(int ConnectionID, FString Query, FString SelectParameter, FString& ErrorMessage);
	
};

#endif

