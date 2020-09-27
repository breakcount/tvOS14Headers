/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, PLCloudPhotoLibraryManager, PLCloudResourcePruneManager, NSDictionary, NSDate, NSObject, PLVolumeInfo;

@interface PLCloudResourcePrefetchManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _cplManager;
	PLCloudResourcePruneManager* _pruneManager;
	NSDictionary* _inflightResources;
	long long _defaultPrefetchMode;
	NSDate* _lastCheckCPLBGDownloadDate;
	BOOL _enqueuedCheckCPLBGDownload;
	NSObject*<OS_dispatch_queue> _workQueue;
	PLVolumeInfo* _volumeInfo;

}
+(id)descriptionForPrefetchPhase:(unsigned long long)arg1 ;
+(id)_identifierForResourceDownload:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)stop;
-(void)clearPrefetchState;
-(void)handleOptimizeModeChange;
-(void)prefetchResourcesWithPredicates:(id)arg1 prefetchPhase:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithCPLManager:(id)arg1 pruneManager:(id)arg2 library:(id)arg3 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_volumeInfo;
-(void)startAutomaticPrefetch;
-(void)_checkCPLBackgroundDownloadOperations;
-(void)_enqueueCheckCPLBGDownloadFromNow:(id)arg1 withReason:(id)arg2 ;
-(void)_cleanupInflightResources;
-(id)prefetchStatusForDebug:(BOOL)arg1 ;
-(void)_reloadDownloadOriginalsSetting;
-(void)_reloadDefaultDownload;
-(unsigned long long)_countOfAllInflightResources;
-(unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)arg1 ;
-(id)_allInflightResourceIdentifiers;
-(id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)arg1 ;
-(BOOL)_isInflightResourceIdentifier:(id)arg1 ;
-(void)_addInflightResourceIdentifier:(id)arg1 prefetchPhase:(unsigned long long)arg2 cplResource:(id)arg3 ;
-(void)_removeInflightResourceIdentifier:(id)arg1 prefetchPhase:(unsigned long long)arg2 cplResource:(id)arg3 ;
-(void)_removeAllInflightResourceIdentifiers;
-(BOOL)_canPrefetch;
-(void)_writeDownloadFinishedMarkerIfNeeded;
-(void)_startPrefetchNextBatch;
-(unsigned long long)_intentForPrefetchPhase:(unsigned long long)arg1 ;
-(void)_prefetchResources:(id)arg1 prefetchPhase:(unsigned long long)arg2 shouldAutoPefetchNextBatch:(BOOL)arg3 ;
-(void)_incrementPrefetchCountForPLCloudResources:(id)arg1 ;
-(void)_handlePrefetchError:(id)arg1 forPLCloudResourceWithObjectID:(id)arg2 ;
-(long long)diskSpaceBudgetForPrefetchPhase:(unsigned long long)arg1 ;
-(id)_lastCompletePrefetchDate;
-(void)_resourcesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

