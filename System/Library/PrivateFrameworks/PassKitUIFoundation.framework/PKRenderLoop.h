/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKRenderLoopDelegate;
@class CADisplayLink;

@interface PKRenderLoop : NSObject {

	CADisplayLink* _displayLink;
	BOOL _effectivePaused;
	BOOL _background;
	BOOL _invalidated;
	BOOL _drawing;
	BOOL _inApplicationContext;
	BOOL _paused;
	long long _preferredFramesPerSecond;
	id<PKRenderLoopDelegate> _delegate;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;               //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=isDrawing,nonatomic,readonly) BOOL drawing;                       //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic) BOOL inApplicationContext;                             //@synthesize inApplicationContext=_inApplicationContext - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                    //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                           //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic,__weak) id<PKRenderLoopDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<PKRenderLoopDelegate>)delegate;
-(void)setDelegate:(id<PKRenderLoopDelegate>)arg1 ;
-(BOOL)isPaused;
-(BOOL)isInvalidated;
-(void)setPaused:(BOOL)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_drawAtTime:(double)arg1 ;
-(BOOL)isDrawing;
-(void)_drawWithDisplayLink:(id)arg1 ;
-(void)_updateEffectivePausedState;
-(void)_willDraw;
-(void)_didDraw;
-(BOOL)_subclassPreferredPauseState;
-(void)attachToScreen:(id)arg1 ;
-(void)setInApplicationContext:(BOOL)arg1 ;
-(BOOL)inApplicationContext;
@end

