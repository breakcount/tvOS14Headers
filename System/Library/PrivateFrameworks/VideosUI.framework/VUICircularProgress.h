/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, CAShapeLayer;

@interface VUICircularProgress : UIView {

	BOOL _indeterminate;
	double _indeterminateWidth;
	UIColor* _progressFillColor;
	double _progress;
	double _centerSquareWidth;
	CAShapeLayer* _indeterminateLayer;
	CAShapeLayer* _centerLayer;
	CAShapeLayer* _progressLayer;
	CAShapeLayer* _progressBackgroundLayer;
	double _progressWidth;

}

@property (nonatomic,retain) CAShapeLayer * indeterminateLayer;                      //@synthesize indeterminateLayer=_indeterminateLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * centerLayer;                             //@synthesize centerLayer=_centerLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                           //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressBackgroundLayer;                 //@synthesize progressBackgroundLayer=_progressBackgroundLayer - In the implementation block
@property (assign,nonatomic) double progressWidth;                                   //@synthesize progressWidth=_progressWidth - In the implementation block
@property (assign,nonatomic) double indeterminateWidth;                              //@synthesize indeterminateWidth=_indeterminateWidth - In the implementation block
@property (assign,getter=isIndeterminate,nonatomic) BOOL indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
@property (nonatomic,retain) UIColor * progressFillColor;                            //@synthesize progressFillColor=_progressFillColor - In the implementation block
@property (assign,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double centerSquareWidth;                               //@synthesize centerSquareWidth=_centerSquareWidth - In the implementation block
-(void)dealloc;
-(double)progress;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)progressLayer;
-(void)_startIndeterminateAnimation;
-(CAShapeLayer *)centerLayer;
-(double)progressWidth;
-(void)setCenterLayer:(CAShapeLayer *)arg1 ;
-(void)setProgressWidth:(double)arg1 ;
-(CGRect)_progressFrame;
-(CAShapeLayer *)progressBackgroundLayer;
-(id)_progressPath;
-(double)centerSquareWidth;
-(CAShapeLayer *)indeterminateLayer;
-(double)indeterminateWidth;
-(id)_indeterminatePath;
-(void)_configureProgress:(BOOL)arg1 ;
-(void)_addProgressLayer;
-(void)_addIndeterminateLayer;
-(void)_removeProgressLayer;
-(void)_removeIndeterminateLayer;
-(UIColor *)progressFillColor;
-(void)setProgressBackgroundLayer:(CAShapeLayer *)arg1 ;
-(void)setIndeterminateLayer:(CAShapeLayer *)arg1 ;
-(void)setIndeterminateWidth:(double)arg1 ;
-(void)setProgressFillColor:(UIColor *)arg1 ;
-(void)setCenterSquareWidth:(double)arg1 ;
@end

