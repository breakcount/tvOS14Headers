/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray, TVPProgressBarShapeView, CAShapeLayer;

@interface TVPPlaybackProgressBarBackgroundMask : UIView {

	UIColor* _fillColor;
	double _borderWidth;
	double _minBufferingProgress;
	double _maxBufferingProgress;
	double _minPlayheadProgress;
	double _maxPlayheadProgress;
	NSArray* _adMarkers;
	TVPProgressBarShapeView* _pillView;
	TVPProgressBarShapeView* _rectangleView;
	CAShapeLayer* _pillMask;
	CAShapeLayer* _rectangleMask;

}

@property (nonatomic,readonly) TVPProgressBarShapeView * pillView;                   //@synthesize pillView=_pillView - In the implementation block
@property (nonatomic,readonly) TVPProgressBarShapeView * rectangleView;              //@synthesize rectangleView=_rectangleView - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * pillMask;                              //@synthesize pillMask=_pillMask - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * rectangleMask;                         //@synthesize rectangleMask=_rectangleMask - In the implementation block
@property (assign,nonatomic) UIColor * fillColor;                                    //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double minBufferingProgress;                            //@synthesize minBufferingProgress=_minBufferingProgress - In the implementation block
@property (assign,nonatomic) double maxBufferingProgress;                            //@synthesize maxBufferingProgress=_maxBufferingProgress - In the implementation block
@property (assign,nonatomic) double minPlayheadProgress;                             //@synthesize minPlayheadProgress=_minPlayheadProgress - In the implementation block
@property (assign,nonatomic) double maxPlayheadProgress;                             //@synthesize maxPlayheadProgress=_maxPlayheadProgress - In the implementation block
@property (nonatomic,copy) NSArray * adMarkers;                                      //@synthesize adMarkers=_adMarkers - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(void)layoutSubviews;
-(double)maxBufferingProgress;
-(void)setMinBufferingProgress:(double)arg1 maxBufferingProgress:(double)arg2 ;
-(double)minBufferingProgress;
-(double)maxPlayheadProgress;
-(void)setMinPlayheadProgress:(double)arg1 maxPlayheadProgress:(double)arg2 ;
-(double)minPlayheadProgress;
-(void)setMinBufferingProgress:(double)arg1 ;
-(void)setMaxBufferingProgress:(double)arg1 ;
-(void)setMinPlayheadProgress:(double)arg1 ;
-(void)setMaxPlayheadProgress:(double)arg1 ;
-(void)setAdMarkers:(NSArray *)arg1 ;
-(NSArray *)adMarkers;
-(TVPProgressBarShapeView *)pillView;
-(TVPProgressBarShapeView *)rectangleView;
-(CAShapeLayer *)pillMask;
-(CAShapeLayer *)rectangleMask;
-(void)_updateMasks;
@end

