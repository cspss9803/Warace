// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MySQLDBConnectionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UTexture2D;
struct FMySQLDataRow;
struct FMySQLDataTable;
#ifdef MYSQL_MySQLDBConnectionActor_generated_h
#error "MySQLDBConnectionActor.generated.h already included, missing '#pragma once' in MySQLDBConnectionActor.h"
#endif
#define MYSQL_MySQLDBConnectionActor_generated_h

#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_SPARSE_DATA
#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectImageFromQuery); \
	DECLARE_FUNCTION(execUpdateImageFromPath); \
	DECLARE_FUNCTION(execUpdateImageFromTexture); \
	DECLARE_FUNCTION(execSelectDataFromQuery); \
	DECLARE_FUNCTION(execUpdateDataFromMultipleQueries); \
	DECLARE_FUNCTION(execUpdateDataFromQuery); \
	DECLARE_FUNCTION(execCloseConnection); \
	DECLARE_FUNCTION(execCloseAllConnections); \
	DECLARE_FUNCTION(execCreateNewConnection);


#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectImageFromQuery); \
	DECLARE_FUNCTION(execUpdateImageFromPath); \
	DECLARE_FUNCTION(execUpdateImageFromTexture); \
	DECLARE_FUNCTION(execSelectDataFromQuery); \
	DECLARE_FUNCTION(execUpdateDataFromMultipleQueries); \
	DECLARE_FUNCTION(execUpdateDataFromQuery); \
	DECLARE_FUNCTION(execCloseConnection); \
	DECLARE_FUNCTION(execCloseAllConnections); \
	DECLARE_FUNCTION(execCreateNewConnection);


#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_ACCESSORS
#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_CALLBACK_WRAPPERS
#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMySQLDBConnectionActor(); \
	friend struct Z_Construct_UClass_AMySQLDBConnectionActor_Statics; \
public: \
	DECLARE_CLASS(AMySQLDBConnectionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySQL"), NO_API) \
	DECLARE_SERIALIZER(AMySQLDBConnectionActor)


#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMySQLDBConnectionActor(); \
	friend struct Z_Construct_UClass_AMySQLDBConnectionActor_Statics; \
public: \
	DECLARE_CLASS(AMySQLDBConnectionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySQL"), NO_API) \
	DECLARE_SERIALIZER(AMySQLDBConnectionActor)


#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMySQLDBConnectionActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMySQLDBConnectionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMySQLDBConnectionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMySQLDBConnectionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMySQLDBConnectionActor(AMySQLDBConnectionActor&&); \
	NO_API AMySQLDBConnectionActor(const AMySQLDBConnectionActor&); \
public: \
	NO_API virtual ~AMySQLDBConnectionActor();


#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMySQLDBConnectionActor(AMySQLDBConnectionActor&&); \
	NO_API AMySQLDBConnectionActor(const AMySQLDBConnectionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMySQLDBConnectionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMySQLDBConnectionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMySQLDBConnectionActor) \
	NO_API virtual ~AMySQLDBConnectionActor();


#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_15_PROLOG
#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_SPARSE_DATA \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_RPC_WRAPPERS \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_ACCESSORS \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_CALLBACK_WRAPPERS \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_INCLASS \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_SPARSE_DATA \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_ACCESSORS \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_CALLBACK_WRAPPERS \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSQL_API UClass* StaticClass<class AMySQLDBConnectionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Warace_Plugins_MySQL_Source_MySQL_Public_MySQLDBConnectionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
