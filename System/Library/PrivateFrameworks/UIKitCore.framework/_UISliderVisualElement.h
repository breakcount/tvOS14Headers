/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UISlider, _UISliderDataModel;


@protocol _UISliderVisualElement
@property (assign,nonatomic,__weak) UISlider * slider; 
@property (nonatomic,retain) _UISliderDataModel * data; 
@required
-(_UISliderDataModel *)data;
-(void)setData:(id)arg1;
-(void)setSlider:(id)arg1;
-(CGRect*)trackRectForBounds:(CGRect)arg1;
-(void)setValue:(float)arg1 animated:(BOOL)arg2;
-(CGRect*)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
-(id)createThumbView;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(id)thumbView;
-(id)currentThumbImage;
-(BOOL)cancelMouseTracking;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
-(BOOL)cancelTouchTracking;
-(BOOL)isAnimatingValueChange;
-(void)didSetMinimumValueImage;
-(void)didSetMaximumValueImage;
-(void)didSetThumbImageForState:(unsigned long long)arg1;
-(void)didSetThumbTintColor;
-(void)didSetMinimumTrackImageForState:(unsigned long long)arg1;
-(void)didSetMinimumTrackTintColor;
-(void)didSetMaximumTrackImageForState:(unsigned long long)arg1;
-(void)didSetMaximumTrackTintColor;
-(id)currentMinimumTrackImage;
-(id)currentMaximumTrackImage;
-(CGRect*)minimumValueImageRectForBounds:(CGRect)arg1;
-(CGRect*)maximumValueImageRectForBounds:(CGRect)arg1;
-(void)didPerformLayout;
-(void)didSetEnabled;
-(void)didSetHighlighted;
-(void)didSetSelected;
-(void)didSetValues;
-(void)didSetShowValue;
-(CGRect*)valueTextRectForBounds:(CGRect)arg1;
-(void)didSetThumbImageForStates;
-(void)didSetMinimumTrackImageForStates;
-(void)didSetMaximumTrackImageForStates;
-(void)didSetThumbEnabled;
-(void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;
-(UIEdgeInsets*)thumbHitEdgeInsets;
-(id)minTrackView;
-(id)maxTrackView;
-(id)minValueImageView;
-(id)maxValueImageView;
-(id)thumbViewNeue;
-(UISlider *)slider;

@end

