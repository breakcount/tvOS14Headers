/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>
#import <libobjc.A.dylib/ISVitalitySettings.h>

@class NSString;

@interface ISVitalitySpecificSettings : ISSettings <ISVitalitySettings> {

	long long _behavior;
	double _preDuration;
	double _postDuration;
	double _startSeekTolerance;
	double _playbackRate;
	double _endTimeOffset;
	double _minimumVisibilityFactor;
	double _maximumDelayBeforePlayback;
	double _maxVitalityDelay;
	double _minimumPhotoTransitionDuration;

}

@property (assign,nonatomic) long long behavior;                                 //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) double preDuration;                                 //@synthesize preDuration=_preDuration - In the implementation block
@property (assign,nonatomic) double postDuration;                                //@synthesize postDuration=_postDuration - In the implementation block
@property (assign,nonatomic) double startSeekTolerance;                          //@synthesize startSeekTolerance=_startSeekTolerance - In the implementation block
@property (assign,nonatomic) double playbackRate;                                //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) double endTimeOffset;                               //@synthesize endTimeOffset=_endTimeOffset - In the implementation block
@property (assign,nonatomic) double minimumVisibilityFactor;                     //@synthesize minimumVisibilityFactor=_minimumVisibilityFactor - In the implementation block
@property (assign,nonatomic) double maximumDelayBeforePlayback;                  //@synthesize maximumDelayBeforePlayback=_maximumDelayBeforePlayback - In the implementation block
@property (assign,nonatomic) double maxVitalityDelay;                            //@synthesize maxVitalityDelay=_maxVitalityDelay - In the implementation block
@property (assign,nonatomic) double minimumPhotoTransitionDuration;              //@synthesize minimumPhotoTransitionDuration=_minimumPhotoTransitionDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setBehavior:(long long)arg1 ;
-(long long)behavior;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1 ;
-(void)setDefaultValues;
-(double)minimumVisibilityFactor;
-(double)preDuration;
-(double)postDuration;
-(double)maxVitalityDelay;
-(double)minimumPhotoTransitionDuration;
-(double)startSeekTolerance;
-(double)endTimeOffset;
-(double)maximumDelayBeforePlayback;
-(void)setPreDuration:(double)arg1 ;
-(void)setMinimumVisibilityFactor:(double)arg1 ;
-(void)setPostDuration:(double)arg1 ;
-(void)setStartSeekTolerance:(double)arg1 ;
-(void)setEndTimeOffset:(double)arg1 ;
-(void)setMaximumDelayBeforePlayback:(double)arg1 ;
-(void)setMaxVitalityDelay:(double)arg1 ;
-(void)setMinimumPhotoTransitionDuration:(double)arg1 ;
@end

