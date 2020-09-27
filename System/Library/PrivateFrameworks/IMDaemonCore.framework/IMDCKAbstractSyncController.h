/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMDCKAbstractSyncControllerDelegate;
@class IMDCKSyncState;

@interface IMDCKAbstractSyncController : NSObject {

	BOOL _isSyncing;
	id<IMDCKAbstractSyncControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isSyncing;                                      //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isUsingStingRay; 
@property (nonatomic,readonly) IMDCKSyncState * syncState; 
@property (__weak) id<IMDCKAbstractSyncControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IMDCKAbstractSyncControllerDelegate>)delegate;
-(void)setDelegate:(id<IMDCKAbstractSyncControllerDelegate>)arg1 ;
-(IMDCKSyncState *)syncState;
-(BOOL)isSyncing;
-(void)setIsSyncing:(BOOL)arg1 ;
-(long long)syncControllerRecordType;
-(id)ckUtilities;
-(void)clearLocalSyncState:(unsigned long long)arg1 ;
-(void)setBroadcastedSyncStateToUploading;
-(BOOL)isUsingStingRay;
-(BOOL)_fetchedAllChangesFromCloudKit;
-(void)setBroadcastedSyncStateToDownloading;
-(void)syncBatchCompleted:(unsigned long long)arg1 ;
-(void)setBroadcastedSyncStateToDeleting;
-(void)setBroadcastedSyncStateStateToStarting;
-(void)setBroadcastedSyncStateStateToFinished;
-(void)addSyncDebuggingInfoToDictionary:(id)arg1 ;
-(void)setBroadcastedSyncStateToStartingPeriodicSync;
-(void)setBroadcastedSyncStateToStartingInitialSync;
-(id)syncStateDebuggingInfo:(id)arg1 ;
@end

