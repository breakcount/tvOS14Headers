/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class _UIToolbarNavigationButton, UILabel, UIColor;

@interface UIToolbarButton : UIControl {

	CGRect _hitRect;
	_UIToolbarNavigationButton* _info;
	UILabel* _label;
	long long _barStyle;
	long long _style;
	UIEdgeInsets _glowAdjust;
	BOOL _onState;
	BOOL _barHeight;
	BOOL _bezel;
	double _minimumWidth;
	double _maximumWidth;
	double _labelHeight;
	UIEdgeInsets _infoInsets;
	UIColor* _toolbarTintColor;
	id _appearanceStorage;
	BOOL _isInTopBar;
	Class _appearanceGuideClass;
	UIEdgeInsets __additionalSelectionInsets;

}

@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;                               //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (assign,setter=_setCreatedByBarButtonItem:,nonatomic) BOOL _createdByBarButtonItem; 
@property (assign,setter=_setAdditionalSelectionInsets:,nonatomic) UIEdgeInsets _additionalSelectionInsets;              //@synthesize _additionalSelectionInsets=__additionalSelectionInsets - In the implementation block
+(id)_defaultLabelFont;
+(id)_defaultLabelColor;
+(id)defaultButtonFont;
-(void)dealloc;
-(id)_info;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setImage:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)_tintColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setBarStyle:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)_buttonBarHitRect;
-(void)_setTintColor:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(UIEdgeInsets)_additionalSelectionInsets;
-(void)_setAdditionalSelectionInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_wantsAccessibilityButtonShapes;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1 ;
-(CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1 ;
-(void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(BOOL)arg3 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setWantsLetterpressContent;
-(BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(BOOL)_createdByBarButtonItem;
-(void)_setCreatedByBarButtonItem:(BOOL)arg1 ;
-(Class)_appearanceGuideClass;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(void)_adjustPushButtonForMiniBar:(BOOL)arg1 isChangingBarHeight:(BOOL)arg2 ;
-(BOOL)_infoIsButton;
-(void)_adjustToolbarButtonInfo;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(BOOL)_isBordered;
-(BOOL)_isBorderedOtherThanAccessibility;
-(BOOL)_shouldApplyPadding;
-(void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)arg1 ;
-(void)_updateInfoTextColorsForState:(unsigned long long)arg1 ;
-(void)_setInTopBar:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(double)arg4 withBarStyle:(long long)arg5 withStyle:(long long)arg6 withInsets:(UIEdgeInsets)arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(BOOL)arg11 imageInsets:(UIEdgeInsets)arg12 glowInsets:(UIEdgeInsets)arg13 landscape:(BOOL)arg14 ;
-(void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3 ;
-(void)_setButtonBarHitRect:(CGRect)arg1 ;
-(void)_setPressed:(BOOL)arg1 ;
-(void)setUseSelectedImage:(BOOL)arg1 ;
-(void)_setInfoWidth:(float)arg1 ;
-(void)_setInfoExtremityWidth:(float)arg1 isMin:(BOOL)arg2 ;
-(void)_setInfoFlexibleWidth:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(BOOL)_canGetPadding;
-(double)_paddingForLeft:(BOOL)arg1 ;
-(void)_setBarHeight:(float)arg1 ;
-(BOOL)_useBarHeight;
-(void)setToolbarTintColor:(id)arg1 ;
@end

