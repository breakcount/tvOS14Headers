/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImage, CAShapeLayer, CADisplayLink, UIVisualEffectView, UIImageView;

@interface VUICountDownProgressIndicator : UIView {

	BOOL _animating;
	double _duration;
	unsigned long long _countDownProgressDirection;
	double _progressWidth;
	UIColor* _progressTintColor;
	UIImage* _backgroundImage;
	UIColor* _backgroundTintColor;
	UIImage* _centerImage;
	UIColor* _centerTintColor;
	/*^block*/id _completion;
	CAShapeLayer* _backgroundLayer;
	CAShapeLayer* _centerLayer;
	CAShapeLayer* _progressLayer;
	CAShapeLayer* _progressMaskLayer;
	CADisplayLink* _displayLink;
	double _progress;
	double _autoFillDelta;
	UIVisualEffectView* _visualEffectView;
	UIImageView* _centerImageView;
	double _autoFillStartTimeStamp;
	UIEdgeInsets _progressInset;
	UIEdgeInsets _backgroundImageInset;
	UIEdgeInsets _centerImageInset;

}

@property (nonatomic,retain) CAShapeLayer * backgroundLayer;                             //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * centerLayer;                                 //@synthesize centerLayer=_centerLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                               //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressMaskLayer;                           //@synthesize progressMaskLayer=_progressMaskLayer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                          //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) double progress;                                            //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double autoFillDelta;                                       //@synthesize autoFillDelta=_autoFillDelta - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                      //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIImageView * centerImageView;                              //@synthesize centerImageView=_centerImageView - In the implementation block
@property (assign,nonatomic) double autoFillStartTimeStamp;                              //@synthesize autoFillStartTimeStamp=_autoFillStartTimeStamp - In the implementation block
@property (nonatomic,readonly) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long countDownProgressDirection;              //@synthesize countDownProgressDirection=_countDownProgressDirection - In the implementation block
@property (assign,nonatomic) double progressWidth;                                       //@synthesize progressWidth=_progressWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets progressInset;                                 //@synthesize progressInset=_progressInset - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                                //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                  //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundImageInset;                          //@synthesize backgroundImageInset=_backgroundImageInset - In the implementation block
@property (nonatomic,retain) UIColor * backgroundTintColor;                              //@synthesize backgroundTintColor=_backgroundTintColor - In the implementation block
@property (nonatomic,retain) UIImage * centerImage;                                      //@synthesize centerImage=_centerImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets centerImageInset;                              //@synthesize centerImageInset=_centerImageInset - In the implementation block
@property (nonatomic,retain) UIColor * centerTintColor;                                  //@synthesize centerTintColor=_centerTintColor - In the implementation block
@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(id)completion;
-(double)progress;
-(double)duration;
-(void)setCompletion:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)layoutSubviews;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)didMoveToSuperview;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIColor *)progressTintColor;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)progressLayer;
-(void)setBackgroundLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)backgroundLayer;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(void)_configureBackground;
-(void)_configureProgressLayer;
-(void)_setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_stopAutoAnimation;
-(UIEdgeInsets)progressInset;
-(UIEdgeInsets)backgroundImageInset;
-(CAShapeLayer *)centerLayer;
-(double)progressWidth;
-(UIImage *)centerImage;
-(void)setCenterLayer:(CAShapeLayer *)arg1 ;
-(double)autoFillDelta;
-(void)setAutoFillDelta:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 duration:(double)arg2 ;
-(void)setCenterImageInset:(UIEdgeInsets)arg1 ;
-(void)setCenterImage:(UIImage *)arg1 ;
-(void)setBackgroundTintColor:(UIColor *)arg1 ;
-(unsigned long long)countDownProgressDirection;
-(void)setCountDownProgressDirection:(unsigned long long)arg1 ;
-(void)setProgressWidth:(double)arg1 ;
-(void)setProgressInset:(UIEdgeInsets)arg1 ;
-(void)setBackgroundImageInset:(UIEdgeInsets)arg1 ;
-(UIColor *)backgroundTintColor;
-(UIEdgeInsets)centerImageInset;
-(UIColor *)centerTintColor;
-(void)setCenterTintColor:(UIColor *)arg1 ;
-(CAShapeLayer *)progressMaskLayer;
-(void)setProgressMaskLayer:(CAShapeLayer *)arg1 ;
-(UIImageView *)centerImageView;
-(void)setCenterImageView:(UIImageView *)arg1 ;
-(double)autoFillStartTimeStamp;
-(void)setAutoFillStartTimeStamp:(double)arg1 ;
@end

