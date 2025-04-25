// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySQL/Public/MySQLBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLBPLibrary();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLBPLibrary_NoRegister();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable();
	UPackage* Z_Construct_UPackage__Script_MySQL();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLDataTable;
class UScriptStruct* FMySQLDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLDataTable, Z_Construct_UPackage__Script_MySQL(), TEXT("MySQLDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLDataTable.OuterSingleton;
}
template<> MYSQL_API UScriptStruct* StaticStruct<FMySQLDataTable>()
{
	return FMySQLDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColumnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MySql|Tables" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "SQLDataTable" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMySQLDataTable, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_Inner = { "ColumnData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData[] = {
		{ "Category", "SQLDataTable" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData = { "ColumnData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMySQLDataTable, ColumnData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewProp_ColumnData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
		nullptr,
		&NewStructOps,
		"MySQLDataTable",
		sizeof(FMySQLDataTable),
		alignof(FMySQLDataTable),
		Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLDataTable.InnerSingleton, Z_Construct_UScriptStruct_FMySQLDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLDataTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLDataRow;
class UScriptStruct* FMySQLDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLDataRow, Z_Construct_UPackage__Script_MySQL(), TEXT("MySQLDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLDataRow.OuterSingleton;
}
template<> MYSQL_API UScriptStruct* StaticStruct<FMySQLDataRow>()
{
	return FMySQLDataRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMySQLDataRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_RowData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MySql|Tables" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLDataRow>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_Inner = { "RowData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData[] = {
		{ "Category", "SQLDataRow" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData = { "RowData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMySQLDataRow, RowData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewProp_RowData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
		nullptr,
		&NewStructOps,
		"MySQLDataRow",
		sizeof(FMySQLDataRow),
		alignof(FMySQLDataRow),
		Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLDataRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow()
	{
		if (!Z_Registration_Info_UScriptStruct_MySQLDataRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLDataRow.InnerSingleton, Z_Construct_UScriptStruct_FMySQLDataRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MySQLDataRow.InnerSingleton;
	}
	void UMySQLBPLibrary::StaticRegisterNativesUMySQLBPLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySQLBPLibrary);
	UClass* Z_Construct_UClass_UMySQLBPLibrary_NoRegister()
	{
		return UMySQLBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMySQLBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySQLBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Contains all the methods that are used to connect to the C# dll \n* which takes care of connecting to the MySQL server and executing\n* the given queries. These methods can be directly called from GetErrorMessage\n* the Blueprints.\n\n*/" },
		{ "IncludePath", "MySQLBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
		{ "ToolTip", "Contains all the methods that are used to connect to the C# dll\nwhich takes care of connecting to the MySQL server and executing\nthe given queries. These methods can be directly called from GetErrorMessage\nthe Blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySQLBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySQLBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySQLBPLibrary_Statics::ClassParams = {
		&UMySQLBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySQLBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySQLBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UMySQLBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySQLBPLibrary.OuterSingleton, Z_Construct_UClass_UMySQLBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySQLBPLibrary.OuterSingleton;
	}
	template<> MYSQL_API UClass* StaticClass<UMySQLBPLibrary>()
	{
		return UMySQLBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySQLBPLibrary);
	UMySQLBPLibrary::~UMySQLBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMySQLDataTable::StaticStruct, Z_Construct_UScriptStruct_FMySQLDataTable_Statics::NewStructOps, TEXT("MySQLDataTable"), &Z_Registration_Info_UScriptStruct_MySQLDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLDataTable), 4140025920U) },
		{ FMySQLDataRow::StaticStruct, Z_Construct_UScriptStruct_FMySQLDataRow_Statics::NewStructOps, TEXT("MySQLDataRow"), &Z_Registration_Info_UScriptStruct_MySQLDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLDataRow), 3456829493U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySQLBPLibrary, UMySQLBPLibrary::StaticClass, TEXT("UMySQLBPLibrary"), &Z_Registration_Info_UClass_UMySQLBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySQLBPLibrary), 1559098408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_1116317986(TEXT("/Script/MySQL"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
