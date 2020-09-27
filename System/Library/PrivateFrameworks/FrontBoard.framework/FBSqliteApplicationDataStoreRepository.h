/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBApplicationDataStoreRepository.h>

@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;
@class NSURL, NSObject, BSSqliteDatabaseConnection, NSString;

@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {

	NSURL* _storeURL;
	id<FBApplicationDataStoreRepositoryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dbQueue;
	BSSqliteDatabaseConnection* _dbQueue_dbConnection;
	unsigned long long _dbQueue_batchDepth;
	int _dbQueue_firstUnlockToken;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (assign,nonatomic,__weak) id<FBApplicationDataStoreRepositoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_objectRequiresSerialization:(id)arg1 ;
+(id)_generateParameterizedQuery:(id)arg1 forKeyList:(id)arg2 outBindings:(id*)arg3 ;
+(id)_objectForResultRow:(id)arg1 index:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)close;
-(id<FBApplicationDataStoreRepositoryDelegate>)delegate;
-(void)setDelegate:(id<FBApplicationDataStoreRepositoryDelegate>)arg1 ;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(id)allObjectsForKeys:(id)arg1 ;
-(void)flushSynchronously;
-(id)applicationIdentifiersWithState;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)removeAllObjectsForApplication:(id)arg1 ;
-(BOOL)_isEligibleForSaving:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2 ;
-(id)keysForApplication:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 forApplication:(id)arg2 ;
-(void)beginBatchedUpdate;
-(void)endBatchedUpdate;
-(id)initWithStorePath:(id)arg1 ;
-(void)_dbQueue_load;
-(id)_dbQueue_applicationIdentifiersWithState;
-(id)_dbQueue_keysForApplication:(id)arg1 ;
-(BOOL)_dbQueue_containsKey:(id)arg1 forApplication:(id)arg2 ;
-(id)_dbQueue_objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(id)_dbQueue_objectsForKeys:(id)arg1 ;
-(BOOL)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(/*^block*/id)arg3 ;
-(void)_dbQueue_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2 ;
-(void)_dbQueue_performWithSavepoint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1 ;
-(BOOL)_dbQueue_loadDatabase;
-(void)_dbQueue_notifyDelegateOfLateLoad;
-(BOOL)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(/*^block*/id)arg3 error:(out id*)arg4 ;
-(id)urlByAppendingString:(id)arg1 toURL:(id)arg2 ;
-(BOOL)_preserveFileAtURL:(id)arg1 ;
-(id)_dbQueue_openDatabase;
-(BOOL)_inAlternateSystemApp;
-(BOOL)_dbQueue_databaseIntegrityCheck;
-(BOOL)_dbQueue_tryPreserveDamagedDatabase;
-(BOOL)_dbQueue_truncateDamagedDatabase;
-(long long)_dbQueue_databaseVersion;
-(void)_dbQueue_createTables;
@end

