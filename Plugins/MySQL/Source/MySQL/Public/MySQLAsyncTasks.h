// Copyright 2021-2022, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Async/AsyncWork.h"
#include "Engine/DataTable.h"


#include "MySQLDBConnector.h"

/**
 * 
 */

class AMySQLDBConnectionActor;

class MYSQL_API OpenMySQLConnectionTask : public FNonAbandonableTask
{

private:

	FString Server;
	FString DBName;
	FString UserID;
	FString Password;
	FString ExtraParam;
	AMySQLDBConnectionActor* CurrentDBConnectionActor;
	TMap<FString, FString> ExtraParams;
	UMySQLDBConnector* MySQLDBConnector;

public:


	OpenMySQLConnectionTask(AMySQLDBConnectionActor* dbConnectionActor, UMySQLDBConnector* dbConnector, FString server, FString dBName, FString userID, FString password, TMap<FString, FString> extraParams);

	virtual ~OpenMySQLConnectionTask();
	virtual void DoWork();
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(OpenConnectionTask, STATGROUP_ThreadPoolAsyncTasks);
	}

};


class MYSQL_API UpdateMySQLQueryAsyncTask : public FNonAbandonableTask
{

private:

	TArray<FString> Queries;
	AMySQLDBConnectionActor* CurrentDBConnectionActor;
	UMySQLDBConnector* MySQLDBConnector;

public:


	UpdateMySQLQueryAsyncTask(AMySQLDBConnectionActor* dbConnectionActor, UMySQLDBConnector* dbConnector, 
		TArray<FString> queries);

	virtual ~UpdateMySQLQueryAsyncTask();
	virtual void DoWork();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UpdateQueryAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

};


class MYSQL_API SelectMySQLQueryAsyncTask : public FNonAbandonableTask
{

private:

	FString Query;
	AMySQLDBConnectionActor* CurrentDBConnectionActor;
	UMySQLDBConnector* MySQLDBConnector;

public:


	SelectMySQLQueryAsyncTask(AMySQLDBConnectionActor* dbConnectionActor, UMySQLDBConnector* dbConnector, FString query);

	virtual ~SelectMySQLQueryAsyncTask();
	virtual void DoWork();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(SelectQueryAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

};


class MYSQL_API UpdateMySQLImageAsyncTask : public FNonAbandonableTask
{

private:

	FString Query;
	AMySQLDBConnectionActor* CurrentDBConnectionActor;
	FString UpdateParameter;
	int ParameterID;
	FString ImagePath;
	UMySQLDBConnector* MySQLDBConnector;

public:


	UpdateMySQLImageAsyncTask(AMySQLDBConnectionActor* dbConnectionActor, UMySQLDBConnector* dbConnector, FString query, FString updateParameter, int parameterID, FString imagePath);

	virtual ~UpdateMySQLImageAsyncTask();
	virtual void DoWork();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UpdateImageAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

};


class MYSQL_API SelectMySQLImageAsyncTask : public FNonAbandonableTask
{

private:

	FString Query;
	AMySQLDBConnectionActor* CurrentDBConnectionActor;
	FString SelectParameter;
	UMySQLDBConnector* MySQLDBConnector;

public:


	SelectMySQLImageAsyncTask(AMySQLDBConnectionActor* dbConnectionActor, UMySQLDBConnector* dbConnector, FString query, FString selectParameter);

	virtual ~SelectMySQLImageAsyncTask();
	virtual void DoWork();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(SelectImageAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

};




