/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue, HMDSyncOperationManagerDataSource;
@class NSMutableArray, NSMutableDictionary, HMDSyncOperationQueue, NSObject, HMFExponentialBackoffTimer, HMDSyncOperation, NSArray, NSString;

@interface HMDSyncOperationManager : HMFObject <HMFLogging, HMFTimerDelegate> {

	os_unfair_lock_s _lock;
	NSMutableArray* _cloudVerifyAccountOperations;
	NSMutableArray* _cloudZonePushOperationQueues;
	NSMutableArray* _cloudZoneFetchOperationQueues;
	NSMutableArray* _cloudCancelPauseOperations;
	NSMutableArray* _cloudQueryDatabaseOperations;
	NSMutableArray* _cloudPostFetchOperations;
	NSMutableDictionary* _cloudZonePushOperationQueuesMap;
	NSMutableDictionary* _cloudZoneFetchOperationQueuesMap;
	BOOL _pauseQueue;
	BOOL _syncLoopDialogDisplayed;
	HMDSyncOperationQueue* _cloudPushOperations;
	HMDSyncOperationQueue* _cloudFetchOperations;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	long long _pauseCloudPushLevel;
	HMFExponentialBackoffTimer* _cloudPushDelayTimer;
	HMDSyncOperation* _currentOperation;
	id<HMDSyncOperationManagerDataSource> _dataSource;
	/*^block*/id _timerFactory;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) HMDSyncOperationQueue * cloudPushOperations;                                         //@synthesize cloudPushOperations=_cloudPushOperations - In the implementation block
@property (copy,readonly) NSArray * cloudVerifyAccountOperations; 
@property (readonly) HMDSyncOperationQueue * cloudFetchOperations;                                        //@synthesize cloudFetchOperations=_cloudFetchOperations - In the implementation block
@property (copy,readonly) NSArray * cloudZonePushOperationQueues; 
@property (copy,readonly) NSArray * cloudZoneFetchOperationQueues;                                        //@synthesize cloudZoneFetchOperationQueues=_cloudZoneFetchOperationQueues - In the implementation block
@property (copy,readonly) NSArray * cloudCancelPauseOperations; 
@property (copy,readonly) NSArray * cloudQueryDatabaseOperations; 
@property (copy,readonly) NSArray * cloudPostFetchOperations; 
@property (assign,nonatomic) BOOL pauseQueue;                                                             //@synthesize pauseQueue=_pauseQueue - In the implementation block
@property (assign,nonatomic) long long pauseCloudPushLevel;                                               //@synthesize pauseCloudPushLevel=_pauseCloudPushLevel - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * cloudPushDelayTimer;                            //@synthesize cloudPushDelayTimer=_cloudPushDelayTimer - In the implementation block
@property (assign,getter=wasSyncLoopDialogDisplayed,nonatomic) BOOL syncLoopDialogDisplayed;              //@synthesize syncLoopDialogDisplayed=_syncLoopDialogDisplayed - In the implementation block
@property (nonatomic,retain) HMDSyncOperation * currentOperation;                                         //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDSyncOperationManagerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) id timerFactory;                                                                     //@synthesize timerFactory=_timerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(void)addOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)resume;
-(void)pause;
-(HMDSyncOperation *)currentOperation;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id<HMDSyncOperationManagerDataSource>)dataSource;
-(id)dumpState;
-(void)setCurrentOperation:(HMDSyncOperation *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)timerFactory;
-(void)kick;
-(void)addOperation:(id)arg1 withDelay:(double)arg2 ;
-(id)initWithClientQueue:(id)arg1 dataSource:(id)arg2 timerFactory:(/*^block*/id)arg3 ;
-(BOOL)wasSyncLoopDialogDisplayed;
-(void)setSyncLoopDialogDisplayed:(BOOL)arg1 ;
-(void)addOperationRespectingOptions:(id)arg1 withDelay:(double)arg2 ;
-(HMDSyncOperationQueue *)cloudPushOperations;
-(void)_reportPossibleSyncLoop;
-(void)addCloudVerifyAccountOperation:(id)arg1 ;
-(HMDSyncOperationQueue *)cloudFetchOperations;
-(BOOL)addCloudZonePushOperation:(id)arg1 delay:(double)arg2 ;
-(BOOL)addCloudZoneFetchOperation:(id)arg1 delay:(double)arg2 ;
-(void)addCloudCancelPauseOperation:(id)arg1 ;
-(BOOL)addCloudQueryDatabaseOperationIfNonePresent:(id)arg1 ;
-(BOOL)dropCloudPostFetchOperationsIfPresent;
-(NSArray *)cloudPostFetchOperations;
-(BOOL)addCloudPostFetchOperationIfNonePresent:(id)arg1 ;
-(void)_handleNextOperation;
-(HMFExponentialBackoffTimer *)cloudPushDelayTimer;
-(void)setCloudPushDelayTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(void)setPauseCloudPushLevel:(long long)arg1 ;
-(void)_handleCancelledOperations:(id)arg1 ;
-(BOOL)pauseQueue;
-(id)popCloudCancelPauseOperation;
-(id)popCloudQueryDatabaseOperation;
-(id)popCloudVerifyAccountOperation;
-(BOOL)popCloudZoneFetchOperationAndMoveQueueToEnd:(id*)arg1 ;
-(id)popCloudPostFetchOperation;
-(long long)pauseCloudPushLevel;
-(id)popCloudZonePushOperationAndMoveQueueToEnd;
-(id)_dequeueNextOperation;
-(void)setPauseQueue:(BOOL)arg1 ;
-(NSArray *)cloudZonePushOperationQueues;
-(id)cloudZoneFetchOperations;
-(void)removeCloudZoneFetchOperationQueue:(id)arg1 ;
-(void)removeCloudZonePushOperationQueue:(id)arg1 ;
-(id)initWithClientQueue:(id)arg1 dataSource:(id)arg2 ;
-(NSArray *)cloudVerifyAccountOperations;
-(NSArray *)cloudCancelPauseOperations;
-(NSArray *)cloudQueryDatabaseOperations;
-(void)pauseAndWaitForCurrentOperationCompletion:(/*^block*/id)arg1 ;
-(void)cancelOperations;
-(void)pauseCloudPush;
-(void)resumeCloudPush;
-(void)killCloudPushAndResume;
-(void)resetCloudPushTimer:(id)arg1 ;
-(NSArray *)cloudZoneFetchOperationQueues;
@end

