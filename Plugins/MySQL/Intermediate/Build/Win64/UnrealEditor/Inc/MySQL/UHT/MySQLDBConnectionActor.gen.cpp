// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySQL/Public/MySQLDBConnectionActor.h"
#include "MySQL/Public/MySQLBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLDBConnectionActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MYSQL_API UClass* Z_Construct_UClass_AMySQLDBConnectionActor();
	MYSQL_API UClass* Z_Construct_UClass_AMySQLDBConnectionActor_NoRegister();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLDBConnector_NoRegister();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable();
	UPackage* Z_Construct_UPackage__Script_MySQL();
// End Cross Module References
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execSelectImageFromQuery)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectParameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectImageFromQuery(Z_Param_ConnectionID,Z_Param_Query,Z_Param_SelectParameter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execUpdateImageFromPath)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_PROPERTY(FStrProperty,Z_Param_UpdateParameter);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParameterID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateImageFromPath(Z_Param_ConnectionID,Z_Param_Query,Z_Param_UpdateParameter,Z_Param_ParameterID,Z_Param_ImagePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execUpdateImageFromTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_PROPERTY(FStrProperty,Z_Param_UpdateParameter);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParameterID);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateImageFromTexture(Z_Param_ConnectionID,Z_Param_Query,Z_Param_UpdateParameter,Z_Param_ParameterID,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execSelectDataFromQuery)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectDataFromQuery(Z_Param_ConnectionID,Z_Param_Query);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execUpdateDataFromMultipleQueries)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionID);
		P_GET_TARRAY(FString,Z_Param_Queries);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDataFromMultipleQueries(Z_Param_ConnectionID,Z_Param_Queries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execUpdateDataFromQuery)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDataFromQuery(Z_Param_ConnectionID,Z_Param_Query);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execCloseConnection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseConnection(Z_Param_ConnectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execCloseAllConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseAllConnections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMySQLDBConnectionActor::execCreateNewConnection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Server);
		P_GET_PROPERTY(FStrProperty,Z_Param_DBName);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_TMAP(FString,FString,Z_Param_ExtraParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateNewConnection(Z_Param_Server,Z_Param_DBName,Z_Param_UserID,Z_Param_Password,Z_Param_ExtraParams);
		P_NATIVE_END;
	}
	struct MySQLDBConnectionActor_eventOnConnectionStateChanged_Parms
	{
		bool ConnectionStatus;
		int32 ConnectionID;
		FString ErrorMessage;
	};
	struct MySQLDBConnectionActor_eventOnImageSelectStatusChanged_Parms
	{
		bool IsSuccessful;
		FString ErrorMessage;
		UTexture2D* SelectedTexture;
	};
	struct MySQLDBConnectionActor_eventOnImageUpdateStatusChanged_Parms
	{
		bool IsSuccessful;
		FString ErrorMessage;
	};
	struct MySQLDBConnectionActor_eventOnQuerySelectStatusChanged_Parms
	{
		bool IsSuccessful;
		FString ErrorMessage;
		TArray<FMySQLDataTable> ResultByColumn;
		TArray<FMySQLDataRow> ResultByRow;
	};
	struct MySQLDBConnectionActor_eventOnQueryUpdateStatusChanged_Parms
	{
		bool IsSuccessful;
		FString ErrorMessage;
	};
	static FName NAME_AMySQLDBConnectionActor_OnConnectionStateChanged = FName(TEXT("OnConnectionStateChanged"));
	void AMySQLDBConnectionActor::OnConnectionStateChanged(bool ConnectionStatus, int32 ConnectionID, const FString& ErrorMessage)
	{
		MySQLDBConnectionActor_eventOnConnectionStateChanged_Parms Parms;
		Parms.ConnectionStatus=ConnectionStatus ? true : false;
		Parms.ConnectionID=ConnectionID;
		Parms.ErrorMessage=ErrorMessage;
		ProcessEvent(FindFunctionChecked(NAME_AMySQLDBConnectionActor_OnConnectionStateChanged),&Parms);
	}
	static FName NAME_AMySQLDBConnectionActor_OnImageSelectStatusChanged = FName(TEXT("OnImageSelectStatusChanged"));
	void AMySQLDBConnectionActor::OnImageSelectStatusChanged(bool IsSuccessful, const FString& ErrorMessage, UTexture2D* SelectedTexture)
	{
		MySQLDBConnectionActor_eventOnImageSelectStatusChanged_Parms Parms;
		Parms.IsSuccessful=IsSuccessful ? true : false;
		Parms.ErrorMessage=ErrorMessage;
		Parms.SelectedTexture=SelectedTexture;
		ProcessEvent(FindFunctionChecked(NAME_AMySQLDBConnectionActor_OnImageSelectStatusChanged),&Parms);
	}
	static FName NAME_AMySQLDBConnectionActor_OnImageUpdateStatusChanged = FName(TEXT("OnImageUpdateStatusChanged"));
	void AMySQLDBConnectionActor::OnImageUpdateStatusChanged(bool IsSuccessful, const FString& ErrorMessage)
	{
		MySQLDBConnectionActor_eventOnImageUpdateStatusChanged_Parms Parms;
		Parms.IsSuccessful=IsSuccessful ? true : false;
		Parms.ErrorMessage=ErrorMessage;
		ProcessEvent(FindFunctionChecked(NAME_AMySQLDBConnectionActor_OnImageUpdateStatusChanged),&Parms);
	}
	static FName NAME_AMySQLDBConnectionActor_OnQuerySelectStatusChanged = FName(TEXT("OnQuerySelectStatusChanged"));
	void AMySQLDBConnectionActor::OnQuerySelectStatusChanged(bool IsSuccessful, const FString& ErrorMessage, TArray<FMySQLDataTable> const& ResultByColumn, TArray<FMySQLDataRow> const& ResultByRow)
	{
		MySQLDBConnectionActor_eventOnQuerySelectStatusChanged_Parms Parms;
		Parms.IsSuccessful=IsSuccessful ? true : false;
		Parms.ErrorMessage=ErrorMessage;
		Parms.ResultByColumn=ResultByColumn;
		Parms.ResultByRow=ResultByRow;
		ProcessEvent(FindFunctionChecked(NAME_AMySQLDBConnectionActor_OnQuerySelectStatusChanged),&Parms);
	}
	static FName NAME_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged = FName(TEXT("OnQueryUpdateStatusChanged"));
	void AMySQLDBConnectionActor::OnQueryUpdateStatusChanged(bool IsSuccessful, const FString& ErrorMessage)
	{
		MySQLDBConnectionActor_eventOnQueryUpdateStatusChanged_Parms Parms;
		Parms.IsSuccessful=IsSuccessful ? true : false;
		Parms.ErrorMessage=ErrorMessage;
		ProcessEvent(FindFunctionChecked(NAME_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged),&Parms);
	}
	void AMySQLDBConnectionActor::StaticRegisterNativesAMySQLDBConnectionActor()
	{
		UClass* Class = AMySQLDBConnectionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseAllConnections", &AMySQLDBConnectionActor::execCloseAllConnections },
			{ "CloseConnection", &AMySQLDBConnectionActor::execCloseConnection },
			{ "CreateNewConnection", &AMySQLDBConnectionActor::execCreateNewConnection },
			{ "SelectDataFromQuery", &AMySQLDBConnectionActor::execSelectDataFromQuery },
			{ "SelectImageFromQuery", &AMySQLDBConnectionActor::execSelectImageFromQuery },
			{ "UpdateDataFromMultipleQueries", &AMySQLDBConnectionActor::execUpdateDataFromMultipleQueries },
			{ "UpdateDataFromQuery", &AMySQLDBConnectionActor::execUpdateDataFromQuery },
			{ "UpdateImageFromPath", &AMySQLDBConnectionActor::execUpdateImageFromPath },
			{ "UpdateImageFromTexture", &AMySQLDBConnectionActor::execUpdateImageFromTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_CloseAllConnections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_CloseAllConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_CloseAllConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "CloseAllConnections", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_CloseAllConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_CloseAllConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_CloseAllConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_CloseAllConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics
	{
		struct MySQLDBConnectionActor_eventCloseConnection_Parms
		{
			int32 ConnectionID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventCloseConnection_Parms, ConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::NewProp_ConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "CloseConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::MySQLDBConnectionActor_eventCloseConnection_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics
	{
		struct MySQLDBConnectionActor_eventCreateNewConnection_Parms
		{
			FString Server;
			FString DBName;
			FString UserID;
			FString Password;
			TMap<FString,FString> ExtraParams;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Server;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DBName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraParams_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraParams_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventCreateNewConnection_Parms, Server), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_DBName = { "DBName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventCreateNewConnection_Parms, DBName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventCreateNewConnection_Parms, UserID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventCreateNewConnection_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_ExtraParams_ValueProp = { "ExtraParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_ExtraParams_Key_KeyProp = { "ExtraParams_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_ExtraParams = { "ExtraParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventCreateNewConnection_Parms, ExtraParams), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_Server,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_DBName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_UserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_ExtraParams_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_ExtraParams_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::NewProp_ExtraParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "Comment", "/**\n\x09* Creates a New Database Connection\n\x09*/" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
		{ "ToolTip", "Creates a New Database Connection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "CreateNewConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::MySQLDBConnectionActor_eventCreateNewConnection_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics
	{
		static void NewProp_ConnectionStatus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConnectionStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ConnectionStatus_SetBit(void* Obj)
	{
		((MySQLDBConnectionActor_eventOnConnectionStateChanged_Parms*)Obj)->ConnectionStatus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ConnectionStatus = { "ConnectionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySQLDBConnectionActor_eventOnConnectionStateChanged_Parms), &Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ConnectionStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnConnectionStateChanged_Parms, ConnectionID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnConnectionStateChanged_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ConnectionStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "OnConnectionStateChanged", nullptr, nullptr, sizeof(MySQLDBConnectionActor_eventOnConnectionStateChanged_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics
	{
		static void NewProp_IsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccessful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_IsSuccessful_SetBit(void* Obj)
	{
		((MySQLDBConnectionActor_eventOnImageSelectStatusChanged_Parms*)Obj)->IsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_IsSuccessful = { "IsSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySQLDBConnectionActor_eventOnImageSelectStatusChanged_Parms), &Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_IsSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnImageSelectStatusChanged_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_SelectedTexture = { "SelectedTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnImageSelectStatusChanged_Parms, SelectedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_IsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::NewProp_SelectedTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "OnImageSelectStatusChanged", nullptr, nullptr, sizeof(MySQLDBConnectionActor_eventOnImageSelectStatusChanged_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics
	{
		static void NewProp_IsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccessful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_IsSuccessful_SetBit(void* Obj)
	{
		((MySQLDBConnectionActor_eventOnImageUpdateStatusChanged_Parms*)Obj)->IsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_IsSuccessful = { "IsSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySQLDBConnectionActor_eventOnImageUpdateStatusChanged_Parms), &Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_IsSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnImageUpdateStatusChanged_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_IsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "OnImageUpdateStatusChanged", nullptr, nullptr, sizeof(MySQLDBConnectionActor_eventOnImageUpdateStatusChanged_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics
	{
		static void NewProp_IsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccessful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultByColumn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultByColumn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultByColumn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultByRow_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultByRow_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultByRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_IsSuccessful_SetBit(void* Obj)
	{
		((MySQLDBConnectionActor_eventOnQuerySelectStatusChanged_Parms*)Obj)->IsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_IsSuccessful = { "IsSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySQLDBConnectionActor_eventOnQuerySelectStatusChanged_Parms), &Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_IsSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnQuerySelectStatusChanged_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByColumn_Inner = { "ResultByColumn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMySQLDataTable, METADATA_PARAMS(nullptr, 0) }; // 4140025920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByColumn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByColumn = { "ResultByColumn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnQuerySelectStatusChanged_Parms, ResultByColumn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByColumn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByColumn_MetaData)) }; // 4140025920
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByRow_Inner = { "ResultByRow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMySQLDataRow, METADATA_PARAMS(nullptr, 0) }; // 3456829493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByRow = { "ResultByRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnQuerySelectStatusChanged_Parms, ResultByRow), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByRow_MetaData)) }; // 3456829493
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_IsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByColumn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByRow_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::NewProp_ResultByRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "OnQuerySelectStatusChanged", nullptr, nullptr, sizeof(MySQLDBConnectionActor_eventOnQuerySelectStatusChanged_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics
	{
		static void NewProp_IsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccessful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_IsSuccessful_SetBit(void* Obj)
	{
		((MySQLDBConnectionActor_eventOnQueryUpdateStatusChanged_Parms*)Obj)->IsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_IsSuccessful = { "IsSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySQLDBConnectionActor_eventOnQueryUpdateStatusChanged_Parms), &Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_IsSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventOnQueryUpdateStatusChanged_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_IsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "OnQueryUpdateStatusChanged", nullptr, nullptr, sizeof(MySQLDBConnectionActor_eventOnQueryUpdateStatusChanged_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics
	{
		struct MySQLDBConnectionActor_eventSelectDataFromQuery_Parms
		{
			int32 ConnectionID;
			FString Query;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventSelectDataFromQuery_Parms, ConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventSelectDataFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::NewProp_ConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "Comment", "/**\n\x09* Selects data from the database\n   */" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
		{ "ToolTip", "Selects data from the database" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "SelectDataFromQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::MySQLDBConnectionActor_eventSelectDataFromQuery_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics
	{
		struct MySQLDBConnectionActor_eventSelectImageFromQuery_Parms
		{
			int32 ConnectionID;
			FString Query;
			FString SelectParameter;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventSelectImageFromQuery_Parms, ConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventSelectImageFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::NewProp_SelectParameter = { "SelectParameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventSelectImageFromQuery_Parms, SelectParameter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::NewProp_ConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::NewProp_SelectParameter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "Comment", "/**\n\x09* Selects image from the database and returns Texture2D format of the selected image\n\x09*/" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
		{ "ToolTip", "Selects image from the database and returns Texture2D format of the selected image" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "SelectImageFromQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::MySQLDBConnectionActor_eventSelectImageFromQuery_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics
	{
		struct MySQLDBConnectionActor_eventUpdateDataFromMultipleQueries_Parms
		{
			int32 ConnectionID;
			TArray<FString> Queries;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Queries_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Queries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateDataFromMultipleQueries_Parms, ConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::NewProp_Queries_Inner = { "Queries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::NewProp_Queries = { "Queries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateDataFromMultipleQueries_Parms, Queries), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::NewProp_ConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::NewProp_Queries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::NewProp_Queries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "Comment", "/**\n\x09* Executes Multiple Queries Simultaneously to the database\n\x09*/" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
		{ "ToolTip", "Executes Multiple Queries Simultaneously to the database" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "UpdateDataFromMultipleQueries", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::MySQLDBConnectionActor_eventUpdateDataFromMultipleQueries_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics
	{
		struct MySQLDBConnectionActor_eventUpdateDataFromQuery_Parms
		{
			int32 ConnectionID;
			FString Query;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateDataFromQuery_Parms, ConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateDataFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::NewProp_ConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "Comment", "/**\n\x09* Executes a Query to the database\n\x09*/" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
		{ "ToolTip", "Executes a Query to the database" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "UpdateDataFromQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::MySQLDBConnectionActor_eventUpdateDataFromQuery_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics
	{
		struct MySQLDBConnectionActor_eventUpdateImageFromPath_Parms
		{
			int32 ConnectionID;
			FString Query;
			FString UpdateParameter;
			int32 ParameterID;
			FString ImagePath;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UpdateParameter;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParameterID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromPath_Parms, ConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromPath_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_UpdateParameter = { "UpdateParameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromPath_Parms, UpdateParameter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_ParameterID = { "ParameterID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromPath_Parms, ParameterID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromPath_Parms, ImagePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_ConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_UpdateParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_ParameterID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::NewProp_ImagePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "Comment", "/**\n\x09* Updates image to the database from the hard drive Asynchronously\n\x09*/" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
		{ "ToolTip", "Updates image to the database from the hard drive Asynchronously" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "UpdateImageFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::MySQLDBConnectionActor_eventUpdateImageFromPath_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics
	{
		struct MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms
		{
			int32 ConnectionID;
			FString Query;
			FString UpdateParameter;
			int32 ParameterID;
			UTexture2D* Texture;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UpdateParameter;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParameterID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_ConnectionID = { "ConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms, ConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_UpdateParameter = { "UpdateParameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms, UpdateParameter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_ParameterID = { "ParameterID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms, ParameterID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms), &Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_ConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_UpdateParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_ParameterID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySql Server" },
		{ "Comment", "/**\n\x09\x09* Updates image to the database from the hard drive Asynchronously\n\x09*/" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
		{ "ToolTip", "Updates image to the database from the hard drive Asynchronously" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySQLDBConnectionActor, nullptr, "UpdateImageFromTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::MySQLDBConnectionActor_eventUpdateImageFromTexture_Parms), Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMySQLDBConnectionActor);
	UClass* Z_Construct_UClass_AMySQLDBConnectionActor_NoRegister()
	{
		return AMySQLDBConnectionActor::StaticClass();
	}
	struct Z_Construct_UClass_AMySQLDBConnectionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConnectionBusy_MetaData[];
#endif
		static void NewProp_bIsConnectionBusy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnectionBusy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SQLConnectors_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SQLConnectors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SQLConnectors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SQLConnectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentConnectionID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentConnectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMySQLDBConnectionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMySQLDBConnectionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_CloseAllConnections, "CloseAllConnections" }, // 3783258683
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_CloseConnection, "CloseConnection" }, // 3509098260
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_CreateNewConnection, "CreateNewConnection" }, // 3037403704
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_OnConnectionStateChanged, "OnConnectionStateChanged" }, // 4045984426
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageSelectStatusChanged, "OnImageSelectStatusChanged" }, // 2402271858
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_OnImageUpdateStatusChanged, "OnImageUpdateStatusChanged" }, // 2633476411
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_OnQuerySelectStatusChanged, "OnQuerySelectStatusChanged" }, // 400976914
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_OnQueryUpdateStatusChanged, "OnQueryUpdateStatusChanged" }, // 2471184157
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_SelectDataFromQuery, "SelectDataFromQuery" }, // 2956538206
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_SelectImageFromQuery, "SelectImageFromQuery" }, // 3188098219
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromMultipleQueries, "UpdateDataFromMultipleQueries" }, // 1729126813
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateDataFromQuery, "UpdateDataFromQuery" }, // 498290027
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromPath, "UpdateImageFromPath" }, // 550627311
		{ &Z_Construct_UFunction_AMySQLDBConnectionActor_UpdateImageFromTexture, "UpdateImageFromTexture" }, // 1953343361
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySQLDBConnectionActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MySQLDBConnectionActor.h" },
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_bIsConnectionBusy_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	void Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_bIsConnectionBusy_SetBit(void* Obj)
	{
		((AMySQLDBConnectionActor*)Obj)->bIsConnectionBusy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_bIsConnectionBusy = { "bIsConnectionBusy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMySQLDBConnectionActor), &Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_bIsConnectionBusy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_bIsConnectionBusy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_bIsConnectionBusy_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors_ValueProp = { "SQLConnectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMySQLDBConnector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors_Key_KeyProp = { "SQLConnectors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors = { "SQLConnectors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMySQLDBConnectionActor, SQLConnectors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_CurrentConnectionID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySQLDBConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_CurrentConnectionID = { "CurrentConnectionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMySQLDBConnectionActor, CurrentConnectionID), METADATA_PARAMS(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_CurrentConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_CurrentConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMySQLDBConnectionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_bIsConnectionBusy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_SQLConnectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySQLDBConnectionActor_Statics::NewProp_CurrentConnectionID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMySQLDBConnectionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySQLDBConnectionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMySQLDBConnectionActor_Statics::ClassParams = {
		&AMySQLDBConnectionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMySQLDBConnectionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMySQLDBConnectionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMySQLDBConnectionActor()
	{
		if (!Z_Registration_Info_UClass_AMySQLDBConnectionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMySQLDBConnectionActor.OuterSingleton, Z_Construct_UClass_AMySQLDBConnectionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMySQLDBConnectionActor.OuterSingleton;
	}
	template<> MYSQL_API UClass* StaticClass<AMySQLDBConnectionActor>()
	{
		return AMySQLDBConnectionActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMySQLDBConnectionActor);
	AMySQLDBConnectionActor::~AMySQLDBConnectionActor() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMySQLDBConnectionActor, AMySQLDBConnectionActor::StaticClass, TEXT("AMySQLDBConnectionActor"), &Z_Registration_Info_UClass_AMySQLDBConnectionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMySQLDBConnectionActor), 256834749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_551793856(TEXT("/Script/MySQL"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
