/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportUploadBatchTask, CPLEngineTransportGroup;
@class NSObject, CPLEngineScopeStorage, CPLEngineTransport, CPLEnginePushRepository, CPLEngineScheduler, CPLBatchExtractionStrategy, CPLChangeBatch, NSError, CPLDerivativesFilter, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSDate;

@interface CPLPushToTransportScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _lock;
	CPLEngineScopeStorage* _scopes;
	CPLEngineTransport* _transport;
	CPLEnginePushRepository* _pushRepository;
	CPLEngineScheduler* _scheduler;
	CPLBatchExtractionStrategy* _currentStrategy;
	CPLChangeBatch* _uploadBatch;
	CPLChangeBatch* _batchToCommit;
	NSError* _preparationError;
	CPLDerivativesFilter* _derivativesFilter;
	NSArray* _uploadResourceTasks;
	NSDictionary* _recordsWithGeneratedResources;
	NSMutableDictionary* _recordsWithSparseResources;
	NSMutableDictionary* _recordsWithForwardCompatibilityCheck;
	NSMutableDictionary* _recordsWithUntrustedCloudCache;
	NSMutableDictionary* _recordsWithResourcesToLookAhead;
	NSMutableDictionary* _recordsCopyingDerivativesFromSource;
	NSMutableDictionary* _recordsToCheckForExistence;
	NSMutableSet* _recordsNeedingToBeFullyFetched;
	NSMutableDictionary* _additionalTransportScopes;
	id<CPLEngineTransportCheckRecordsExistenceTask> _checkExistenceTask;
	id<CPLEngineTransportUploadBatchTask> _uploadTask;
	unsigned long long _lastReportedProgress;
	unsigned long long _countOfPushedChanges;
	double _startOfIteration;
	double _startOfDerivativesGeneration;
	BOOL _generatingSomeDerivatives;
	BOOL _deferredCancel;
	BOOL _hasCachedShouldCheckResourcesAhead;
	BOOL _shouldCheckResourcesAhead;
	unsigned long long _estimatedSize;
	unsigned long long _estimatedCount;
	BOOL _shouldSetupEstimatedSize;
	id<CPLEngineTransportGroup> _transportGroup;
	long long _taskItem;
	BOOL _mightPushSomeResources;
	BOOL _hasPushedSomeChanges;
	BOOL _hasDroppedSomeResources;
	BOOL _shouldResetExceedingQuotaOnSuccess;
	BOOL _isUsingOverQuotaStrategy;
	BOOL _resetStrategy;
	double _latestApproximativeUploadRate;
	NSString* _currentTaskKey;
	NSDate* _taskStartDate;
	unsigned long long _recordCount;
	BOOL _didExtractOneBatch;
	BOOL _highPriority;

}

@property (assign,nonatomic) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
-(void)cancel;
-(id)taskIdentifier;
-(void)launch;
-(void)cancel:(BOOL)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)_doOneIteration;
-(void)_uploadBatch;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
-(void)_didStartTaskWithKey:(id)arg1 recordCount:(unsigned long long)arg2 ;
-(void)_didFinishTaskWithKey:(id)arg1 error:(BOOL)arg2 cancelled:(BOOL)arg3 ;
-(void)_popNextBatchAndContinue;
-(void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg1 ;
-(void)_requireExistenceCheckForRecords:(id)arg1 ;
-(BOOL)_prepareResourcesToUploadInBatch:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)_markUploadedTasksDidFinishWithError:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)_discardUploadedExtractedBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)_reenqueueExtractedBatchWithRejectedRecords:(id)arg1 error:(id*)arg2 ;
-(void)_updateChangeProperties:(id)arg1 withBaseChange:(id)arg2 withCopyProperty:(/*^block*/id)arg3 ;
-(BOOL)_shouldCheckResourcesAheadForChange:(id)arg1 ;
-(void)_clearUploadBatch;
-(void)_detectUpdatesNeedingExistenceCheck:(id)arg1 ;
-(void)_checkForRecordExistence;
-(void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2 ;
-(void)_deleteGeneratedResourcesAfterError:(id)arg1 ;
-(void)_generateDerivativesForNextRecord:(id)arg1 ;
-(void)_generateNeededDerivatives;
-(void)_pushTaskDidFinishWithError:(id)arg1 ;
@end

