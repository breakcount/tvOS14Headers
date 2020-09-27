/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUISBIconProgressViewDelegate;
@class _VUISBInstallProgressStateTransition, _VUISBIconProgressPausedTransition, _VUISBIconProgressFractionTransition, CADisplayLink, UIImage;

@interface VUISBIconProgressView : UIView {

	_VUISBInstallProgressStateTransition* _activeStateTransition;
	_VUISBIconProgressPausedTransition* _activePausedTransition;
	_VUISBIconProgressFractionTransition* _activeFractionTransition;
	long long _modelState;
	BOOL _modelPaused;
	double _modelFraction;
	CADisplayLink* _displayLink;
	double _lastUpdate;
	UIImage* _maskImage;
	BOOL _canAnimate;
	BOOL _displayingPaused;
	id<VUISBIconProgressViewDelegate> _delegate;
	UIImage* _overlayImage;
	double _backgroundAlpha;
	double _foregroundAlpha;
	double _circleRadiusFraction;
	double _pauseRadiusFraction;
	long long _displayedState;
	double _displayedFraction;

}

@property (assign,nonatomic) double backgroundAlpha;                                  //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) double foregroundAlpha;                                  //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) double circleRadiusFraction;                             //@synthesize circleRadiusFraction=_circleRadiusFraction - In the implementation block
@property (assign,nonatomic) double pauseRadiusFraction;                              //@synthesize pauseRadiusFraction=_pauseRadiusFraction - In the implementation block
@property (nonatomic,readonly) CGRect circleBoundingRect; 
@property (assign,nonatomic) long long displayedState;                                //@synthesize displayedState=_displayedState - In the implementation block
@property (assign,nonatomic) BOOL displayingPaused;                                   //@synthesize displayingPaused=_displayingPaused - In the implementation block
@property (assign,nonatomic) double displayedFraction;                                //@synthesize displayedFraction=_displayedFraction - In the implementation block
@property (assign,nonatomic) id<VUISBIconProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                  //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) BOOL canAnimate;                                         //@synthesize canAnimate=_canAnimate - In the implementation block
+(id)_pieImagesMemoryPool;
+(id)_pieImageAtFraction:(double)arg1 ;
-(void)dealloc;
-(id<VUISBIconProgressViewDelegate>)delegate;
-(void)setDelegate:(id<VUISBIconProgressViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(id)_maskImage;
-(double)backgroundAlpha;
-(void)setDisplayedState:(long long)arg1 ;
-(long long)displayedState;
-(void)setBackgroundAlpha:(double)arg1 ;
-(double)foregroundAlpha;
-(void)setForegroundAlpha:(double)arg1 ;
-(void)_updateTransitionsAnimated:(BOOL)arg1 ;
-(void)_clearDisplayLink;
-(void)_clearTransitionIfComplete:(id*)arg1 ;
-(void)_updatePausedTransitionAnimated:(BOOL)arg1 ;
-(void)_updateStateTransitionAnimated:(BOOL)arg1 ;
-(void)_updateFractionTransitionAnimated:(BOOL)arg1 ;
-(BOOL)_hasActiveTransitions;
-(void)_ensureDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_drawPieWithCenter:(CGPoint)arg1 ;
-(void)_drawOutgoingCircleWithCenter:(CGPoint)arg1 ;
-(void)_drawIncomingCircleWithCenter:(CGPoint)arg1 ;
-(void)_drawPauseUIWithCenter:(CGPoint)arg1 ;
-(void)setState:(long long)arg1 paused:(BOOL)arg2 fractionLoaded:(double)arg3 animated:(BOOL)arg4 ;
-(void)setCanAnimate:(BOOL)arg1 ;
-(CGRect)circleBoundingRect;
-(BOOL)canAnimate;
-(double)circleRadiusFraction;
-(void)setCircleRadiusFraction:(double)arg1 ;
-(double)pauseRadiusFraction;
-(void)setPauseRadiusFraction:(double)arg1 ;
-(BOOL)displayingPaused;
-(void)setDisplayingPaused:(BOOL)arg1 ;
-(double)displayedFraction;
-(void)setDisplayedFraction:(double)arg1 ;
@end

