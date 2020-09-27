/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MTPAFActivity;

@interface MTPAFTracker : NSObject {

	NSArray* _videoTrackers;
	NSArray* _playlistBindings;
	MTPAFActivity* _currentActivity;

}

@property (nonatomic,retain) NSArray * videoTrackers;                      //@synthesize videoTrackers=_videoTrackers - In the implementation block
@property (nonatomic,retain) NSArray * playlistBindings;                   //@synthesize playlistBindings=_playlistBindings - In the implementation block
@property (nonatomic,retain) MTPAFActivity * currentActivity;              //@synthesize currentActivity=_currentActivity - In the implementation block
-(MTPAFActivity *)currentActivity;
-(void)synchronizeAtMilliseconds:(unsigned long long)arg1 ;
-(void)updateEventData:(id)arg1 ;
-(void)trackPlaylist:(id)arg1 using:(id)arg2 ;
-(void)playStartedWithPlaybackRate:(float)arg1 atMilliseconds:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(void)forEachVideoTracker:(/*^block*/id)arg1 ;
-(void)startActivity:(long long)arg1 playbackRate:(float)arg2 atMilliseconds:(unsigned long long)arg3 triggerType:(id)arg4 reason:(id)arg5 eventData:(id)arg6 ;
-(void)playStoppedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)stopActivity:(long long)arg1 atMilliseconds:(unsigned long long)arg2 triggerType:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(void)seekStartedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)seekStoppedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(NSArray *)playlistBindings;
-(NSArray *)videoTrackers;
-(void)setCurrentActivity:(MTPAFActivity *)arg1 ;
-(void)playStartedWithPlaybackRate:(float)arg1 atSeconds:(double)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(void)playStartedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)playStartedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)playStoppedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)seekStartedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)seekStoppedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)synchronizeAtSeconds:(double)arg1 ;
-(void)setVideoTrackers:(NSArray *)arg1 ;
-(void)setPlaylistBindings:(NSArray *)arg1 ;
@end

