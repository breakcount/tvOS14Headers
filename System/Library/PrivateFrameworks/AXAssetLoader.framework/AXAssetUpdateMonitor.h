/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXAssetLoader/AXAssetLoader-Structs.h>
#import <AXAssetLoader/AXAssetControllerObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSArray, AXDispatchTimer, NSObject, AXAssetController, AXAssetPolicy, NSString;

@interface AXAssetUpdateMonitor : NSObject <AXAssetControllerObserver> {

	os_unfair_lock_s _assetsLock;
	NSHashTable* _updateObservers;
	NSArray* _cachedInstalledAssets;
	AXDispatchTimer* _refreshDispatchTimer;
	NSObject*<OS_dispatch_queue> _workerQueue;
	AXAssetController* _assetController;

}

@property (nonatomic,retain) AXAssetController * assetController;              //@synthesize assetController=_assetController - In the implementation block
@property (nonatomic,readonly) AXAssetPolicy * assetPolicy; 
@property (assign,nonatomic) BOOL userInitiated; 
@property (nonatomic,readonly) BOOL hasInProgressDownloads; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetMonitorWithPolicy:(id)arg1 ;
+(id)assetMonitorWithPolicy:(id)arg1 qosClass:(unsigned)arg2 ;
+(id)assetMonitorWithPolicy:(id)arg1 qosClass:(unsigned)arg2 targetQueue:(id)arg3 ;
-(NSString *)description;
-(void)stop;
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 ;
-(void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 hasRemainingDownloads:(BOOL)arg5 ;
-(void)removeUpdateObserver:(id)arg1 ;
-(void)addUpdateObserver:(id)arg1 ;
-(void)logInfo:(id)arg1 ;
-(id)_initWithAssetPolicy:(id)arg1 qosClass:(unsigned)arg2 targetQueue:(id)arg3 ;
-(AXAssetPolicy *)assetPolicy;
-(BOOL)hasInProgressDownloads;
-(void)_workerQueue_refreshAssetsAfterDelay:(double)arg1 canRefreshCatalog:(BOOL)arg2 ;
-(void)_performWithinLock:(/*^block*/id)arg1 ;
-(AXAssetController *)assetController;
-(void)refreshAssetsAfterDelay:(double)arg1 ;
-(id)_purgeUnneededAssetsFromInstalledAssets:(id)arg1 ;
-(void)_updateCachedInstalledAssets:(id)arg1 ;
-(void)setAssetController:(AXAssetController *)arg1 ;
@end

