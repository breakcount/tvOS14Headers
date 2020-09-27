/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class NSManagedObjectContext, CallDBManager, NSString;

@interface CallHistoryDBHandle : CHLogger {

	NSManagedObjectContext* fCallRecordContext;
	NSManagedObjectContext* fCallDBPropertiesContext;
	CallDBManager* callDBManager;
	NSString* objectId;
	id _observerCallRecordRef;
	id _observerCallDBPropRef;
	id _moveCallRecordsFromTempStoreRef;
	id _dataStoreAddedRef;

}

@property (nonatomic,readonly) NSString * objectId; 
@property (nonatomic,readonly) CallDBManager * callDBManager; 
+(id)createForClient;
+(id)createWithDBManager:(id)arg1 ;
+(id)createForServer;
-(void)dealloc;
-(BOOL)save:(id*)arg1 ;
-(void)resetTimers;
-(NSString *)objectId;
-(void)deleteAll;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 ;
-(id)initWithDBManager:(id)arg1 ;
-(void)handleCallRecordContextDidSaveNotification:(id)arg1 ;
-(void)handleCallDBPropContextDidSaveNotification:(id)arg1 ;
-(CallDBManager *)callDBManager;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 ;
-(void)handlePersistentStoreChangedNotification:(id)arg1 ;
-(id)createCallRecord;
-(BOOL)handleSaveForCallRecordContext:(id)arg1 error:(id*)arg2 ;
-(void)postTimersChangedNotification;
-(id)callDBProperties;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(BOOL)arg3 ;
-(id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(long long)deleteManagedCalls:(id)arg1 ;
-(id)getArrayForCallTypeMask:(unsigned)arg1 ;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchAllNoLimit;
-(void)updateCallDBProperties;
-(BOOL)saveTimers:(/*^block*/id)arg1 ;
-(BOOL)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetAllTimers;
-(void)unRegisterForNotifications;
-(id)callRecordContext;
-(void)registerForNotifications:(id)arg1 ;
-(void)mergeCallRecordChangesFromRemoteAppSave;
-(void)mergeCallDBPropChangesFromRemoteAppSave;
-(long long)deleteManagedCallsWithPredicate:(id)arg1 ;
-(unsigned long long)fetchManagedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchManagedCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(id)updateManagedCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 ;
-(id)fetchAll;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(void)deleteObjectWithUniqueId:(id)arg1 ;
-(void)deleteObjectsWithUniqueIds:(id)arg1 ;
-(id)timerIncoming;
-(id)timerOutgoing;
-(id)timerLifetime;
-(id)timerLastReset;
@end

