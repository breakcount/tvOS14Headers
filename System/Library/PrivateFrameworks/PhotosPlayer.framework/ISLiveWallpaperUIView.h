/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayerUIView.h>

@class UIGestureRecognizer, NSTimer, ISLiveWallpaperPlayer;

@interface ISLiveWallpaperUIView : ISBasePlayerUIView {

	BOOL _touching;
	UIGestureRecognizer* _playbackGestureRecognizer;
	double _force;
	NSTimer* _updateTimer;

}

@property (assign,nonatomic) BOOL touching;                                                  //@synthesize touching=_touching - In the implementation block
@property (assign,nonatomic) double force;                                                   //@synthesize force=_force - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                          //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) ISLiveWallpaperPlayer * player; 
@property (nonatomic,readonly) UIGestureRecognizer * playbackGestureRecognizer;              //@synthesize playbackGestureRecognizer=_playbackGestureRecognizer - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)force;
-(void)setForce:(double)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(void)_handlePlaybackRecognizer:(id)arg1 ;
-(void)setTouching:(BOOL)arg1 ;
-(void)_updatePlayer;
-(void)_ISLiveWallpaperUIViewCommonInitialization;
-(void)_handleUpdateTimer;
-(BOOL)touching;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
@end
