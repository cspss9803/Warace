// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySQL/Public/MySQLDBConnector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLDBConnector() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLDBConnector();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLDBConnector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MySQL();
// End Cross Module References
	void UMySQLDBConnector::StaticRegisterNativesUMySQLDBConnector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySQLDBConnector);
	UClass* Z_Construct_UClass_UMySQLDBConnector_NoRegister()
	{
		return UMySQLDBConnector::StaticClass();
	}
	struct Z_Construct_UClass_UMySQLDBConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySQLDBConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySQLDBConnector_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MySQLDBConnector.h" },
		{ "ModuleRelativePath", "Public/MySQLDBConnector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySQLDBConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySQLDBConnector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySQLDBConnector_Statics::ClassParams = {
		&UMySQLDBConnector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMySQLDBConnector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLDBConnector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySQLDBConnector()
	{
		if (!Z_Registration_Info_UClass_UMySQLDBConnector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySQLDBConnector.OuterSingleton, Z_Construct_UClass_UMySQLDBConnector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySQLDBConnector.OuterSingleton;
	}
	template<> MYSQL_API UClass* StaticClass<UMySQLDBConnector>()
	{
		return UMySQLDBConnector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySQLDBConnector);
	UMySQLDBConnector::~UMySQLDBConnector() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySQLDBConnector, UMySQLDBConnector::StaticClass, TEXT("UMySQLDBConnector"), &Z_Registration_Info_UClass_UMySQLDBConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySQLDBConnector), 1466363367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnector_h_3643083445(TEXT("/Script/MySQL"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
