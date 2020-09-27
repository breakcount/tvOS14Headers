/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DDSAssetProvidingDelegate.h>
#import <libobjc.A.dylib/DDSAssetTrackingDelegate.h>
#import <libobjc.A.dylib/DDSRemoteSyncStateDelegate.h>
#import <libobjc.A.dylib/DDSAssetObservingDelegate.h>
#import <libobjc.A.dylib/DDSManaging.h>

@protocol DDSManagingDelegate, DDSAssetTracking, DDSAssetProviding, DDSAssetObserving, OS_dispatch_queue;
@class DDSScheduledTimer, DDSRemoteSyncState, NSMutableSet, NSObject, NSString;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSRemoteSyncStateDelegate, DDSAssetObservingDelegate, DDSManaging> {

	id<DDSManagingDelegate> _delegate;
	id<DDSAssetTracking> _tracker;
	id<DDSAssetProviding> _provider;
	id<DDSAssetObserving> _assetObserver;
	DDSScheduledTimer* _timer;
	DDSRemoteSyncState* _remoteSyncState;
	NSMutableSet* _pendingAssertionsToUpdate;
	NSObject*<OS_dispatch_queue> _pendingAssertionsQueue;

}

@property (nonatomic,readonly) id<DDSAssetTracking> tracker;                                     //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) id<DDSAssetProviding> provider;                                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) id<DDSAssetObserving> assetObserver;                              //@synthesize assetObserver=_assetObserver - In the implementation block
@property (nonatomic,readonly) DDSScheduledTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) DDSRemoteSyncState * remoteSyncState;                             //@synthesize remoteSyncState=_remoteSyncState - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingAssertionsToUpdate;                           //@synthesize pendingAssertionsToUpdate=_pendingAssertionsToUpdate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> pendingAssertionsQueue;              //@synthesize pendingAssertionsQueue=_pendingAssertionsQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DDSManagingDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<DDSManagingDelegate>)delegate;
-(void)setDelegate:(id<DDSManagingDelegate>)arg1 ;
-(id<DDSAssetProviding>)provider;
-(DDSScheduledTimer *)timer;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
-(void)removeAssertionWithID:(id)arg1 ;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)triggerDump;
-(void)triggerUpdate;
-(void)serverDidUpdateAssetsWithType:(id)arg1 ;
-(id<DDSAssetObserving>)assetObserver;
-(void)remoteSyncStateRequestsUpdate;
-(void)remoteSyncStateRequestsRetry;
-(void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2 ;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2 ;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2 ;
-(void)didUpdateCatalogWithError:(id)arg1 ;
-(void)didBeginUpdateCatalog;
-(void)handleNewAssertions:(id)arg1 ;
-(void)handleRemovedAssertions:(id)arg1 ;
-(id)initWithProvider:(id)arg1 tracker:(id)arg2 ;
-(void)deleteV1AssetsIfNecessary;
-(DDSRemoteSyncState *)remoteSyncState;
-(void)didStartUpdateCycle;
-(id<DDSAssetTracking>)tracker;
-(NSObject*<OS_dispatch_queue>)pendingAssertionsQueue;
-(void)setPendingAssertionsToUpdate:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingAssertionsToUpdate;
-(void)didEndUpdateCycleWithError:(id)arg1 ;
-(void)beginUpdateCycleForced:(BOOL)arg1 discretionaryDownload:(BOOL)arg2 ;
-(void)willRetryUpdateCycle;
@end

