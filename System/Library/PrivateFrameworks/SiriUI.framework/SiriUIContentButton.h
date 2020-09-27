/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface SiriUIContentButton : UIButton {

	BOOL _isRenderingImageTemplate;
	UIColor* _defaultColorForTemplate;
	UIColor* _highlightColorForTemplate;
	UIColor* _overrideTextColor;
	BOOL _usePlatterStyle;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic) BOOL usePlatterStyle;                        //@synthesize usePlatterStyle=_usePlatterStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;              //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
+(id)button;
+(id)buttonWithLightWeightFont;
+(id)buttonWithMediumWeightFont;
+(id)buttonWithImageMask:(id)arg1 style:(long long)arg2 ;
+(id)buttonWithImageTemplate:(id)arg1 style:(long long)arg2 ;
+(id)buttonWithImageMask:(id)arg1 ;
+(id)buttonWithImageTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateTintColor;
-(BOOL)usePlatterStyle;
-(void)setUsePlatterStyle:(BOOL)arg1 ;
-(void)_setIsRenderingImageTemplate:(BOOL)arg1 ;
-(void)setDefaultColorForTemplate:(id)arg1 ;
-(void)setHighlightColorForTemplate:(id)arg1 ;
-(void)_updateStyling;
-(void)setOverrideTextColor:(id)arg1 ;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
@end

