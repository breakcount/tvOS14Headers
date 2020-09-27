/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMDMessagePTaskStore;
@class NSTimer;

@interface IMDMessageProcessingController : NSObject {

	id<IMDMessagePTaskStore> _pTaskStore;
	NSTimer* _processingTimer;

}

@property (nonatomic,retain) id<IMDMessagePTaskStore> pTaskStore;              //@synthesize pTaskStore=_pTaskStore - In the implementation block
@property (nonatomic,retain) NSTimer * processingTimer;                        //@synthesize processingTimer=_processingTimer - In the implementation block
-(id)init;
-(void)dealloc;
-(void)messageProcessingTaskAdded:(id)arg1 ;
-(id)initWithMessagesPTaskStore:(id)arg1 ;
-(void)_scheduleDeferredProcessingWithTimeInterval:(double)arg1 ;
-(void)_processingTimerFired;
-(void)_indexSpotlightIfNeedForPTask:(id)arg1 ;
-(BOOL)_pref_IMDCoreSpotlightHasMigrated;
-(void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)arg1 ;
-(void)scheduleInitialProcessingCheck;
-(id<IMDMessagePTaskStore>)pTaskStore;
-(void)setPTaskStore:(id<IMDMessagePTaskStore>)arg1 ;
-(NSTimer *)processingTimer;
-(void)setProcessingTimer:(NSTimer *)arg1 ;
@end

