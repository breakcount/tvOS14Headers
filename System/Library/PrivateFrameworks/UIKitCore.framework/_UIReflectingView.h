/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIReflectingView : UIView {

	UIView* _containerView;
	UIView* _gradientView;
	double _reflectionAlpha;

}

@property (nonatomic,retain,readonly) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) double reflectionFraction; 
@property (assign,nonatomic) double reflectionAlpha; 
-(void)setFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(id)_gradientLayer;
-(void)setReflectionAlpha:(double)arg1 ;
-(void)setReflectionFraction:(double)arg1 ;
-(double)reflectionAlpha;
-(void)_updateGradientColors;
-(double)reflectionFraction;
@end

