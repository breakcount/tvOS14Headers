/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:10 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/PXVideoScrubberControllerTarget.h>

@class ISWrappedAVPlayer, NSString;

@interface PXSimpleWrappedVideoScrubberControllerTarget : NSObject <ISChangeObserver, PXVideoScrubberControllerTarget> {

	/*^block*/id statusChangeHandler;
	/*^block*/id playerItemChangeHandler;
	/*^block*/id durationChangeHandler;
	ISWrappedAVPlayer* _videoPlayer;

}

@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;              //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id durationChangeHandler; 
@property (nonatomic,copy) id statusChangeHandler; 
@property (nonatomic,copy) id playerItemChangeHandler; 
-(id)init;
-(void)removeTimeObserver:(id)arg1 ;
-(id)playerItem;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_PX8)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)cancelPendingSeeks;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(float)playRate;
-(SCD_Struct_PX8)currentItemDuration;
-(SCD_Struct_PX8)playerCurrentTime;
-(void)videoScrubberController:(id)arg1 seekToTime:(SCD_Struct_PX8)arg2 toleranceBefore:(SCD_Struct_PX8)arg3 toleranceAfter:(SCD_Struct_PX8)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)playerStatus;
-(void)setPlayerItemChangeHandler:(id)arg1 ;
-(void)setStatusChangeHandler:(id)arg1 ;
-(void)setDurationChangeHandler:(id)arg1 ;
-(id)statusChangeHandler;
-(id)durationChangeHandler;
-(id)playerItemChangeHandler;
-(id)initWithVideoPlayer:(id)arg1 ;
@end

