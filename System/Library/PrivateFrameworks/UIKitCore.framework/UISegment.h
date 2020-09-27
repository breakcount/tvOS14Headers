/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, UIImageView, _UISegmentedControlAppearanceStorage, _UIFloatingContentView, NSString, _UIBadgeView, NSArray, UIAction;

@interface UISegment : UIImageView <CAAnimationDelegate> {

	UIView* _info;
	UIImageView* _backgroundView;
	UIView* _selectionIndicatorView;
	UIImageView* _selectionImageView;
	_UISegmentedControlAppearanceStorage* _appearanceStorage;
	_UIFloatingContentView* _floatingContentView;
	double _width;
	CGSize _contentOffset;
	long long _barStyle;
	unsigned long long _rightSegmentState;
	NSString* _badgeValue;
	_UIBadgeView* _badgeView;
	id _objectValue;
	struct {
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
		unsigned wasSelected : 1;
		unsigned needsBackgroundAndContentViewUpdate : 1;
		unsigned usesAXTextSize : 1;
		unsigned selectionIndicatorDragged : 1;
		unsigned adjustsForContentSizeCategory : 1;
	}  _segmentFlags;
	NSArray* _infoConstraints;
	UIAction* _action;
	double _requestedScaleFactor;

}

@property (setter=_setInfoConstraints:,nonatomic,copy) NSArray * _infoConstraints;              //@synthesize infoConstraints=_infoConstraints - In the implementation block
@property (nonatomic,copy) UIAction * action;                                                   //@synthesize action=_action - In the implementation block
@property (getter=isSelected) BOOL selected; 
@property (getter=isMomentary) BOOL momentary; 
@property (assign) int controlSize; 
@property (nonatomic,copy) NSString * badgeValue; 
@property (readonly) UIView * badgeView; 
@property (assign,nonatomic) double requestedScaleFactor;                                       //@synthesize requestedScaleFactor=_requestedScaleFactor - In the implementation block
@property (assign,nonatomic) unsigned position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundImageWithStorage:(id)arg1 mini:(BOOL)arg2 state:(unsigned long long)arg3 position:(unsigned)arg4 drawMode:(unsigned*)arg5 isCustom:(BOOL*)arg6 defaultBlock:(/*^block*/id)arg7 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned)position;
-(void)setPosition:(unsigned)arg1 ;
-(id)label;
-(void)setFrame:(CGRect)arg1 ;
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(UIAction *)action;
-(void)setAction:(UIAction *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)contentSize;
-(CGRect)contentRect;
-(void)removeFromSuperview;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)objectValue;
-(BOOL)isHighlighted;
-(void)setContentOffset:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)updateConstraints;
-(void)setObjectValue:(id)arg1 ;
-(void)tintColorDidChange;
-(id)disabledTextColor;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIView *)badgeView;
-(id)viewForLastBaselineLayout;
-(void)_updateTextColors;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_floatingContentView;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(double)_barHeight;
-(int)controlSize;
-(void)setControlSize:(int)arg1 ;
-(id)_effectiveContentView;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)_encodableSubviews;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setAdjustsForContentSizeCategory:(BOOL)arg1 ;
-(void)insertDividerView;
-(void)_finishInitialSegmentSetup;
-(id)_parentSegmentedControl;
-(id)_effectiveBackgroundView;
-(unsigned long long)_segmentState;
-(BOOL)_effectiveDisableShadow;
-(Class)_segmentedControlClass;
-(id)_effectiveBackgroundTintColor;
-(void)setNeedsBackgroundAndContentViewUpdate;
-(id)_dividerImageIsCustom:(BOOL*)arg1 ;
-(void)_updateBackgroundAndContentViews;
-(id)_effectiveVibrancyEffect;
-(id)_effectiveSelectedSegmentTintColor;
-(void)_insertSelectionView;
-(void)_removeSelectionIndicator;
-(CATransform3D)_highlightSelectionInfoTransform;
-(void)_updateSelectionToTransform:(CATransform3D)arg1 infoTransform:(CATransform3D)arg2 hideSelection:(BOOL)arg3 shouldAnimate:(BOOL)arg4 ;
-(void)updateDividerViewForChangedSegment:(id)arg1 ;
-(void)_updateHighlight;
-(void)_updateSelectionIndicator;
-(void)_positionInfo;
-(BOOL)isMomentary;
-(BOOL)_hasSelectedColor;
-(void)updateMasking;
-(id)_attributedTextForState:(unsigned long long)arg1 selected:(BOOL)arg2 forceSelectedAppearance:(BOOL)arg3 ;
-(id)_stateTextAttibutes:(id)arg1 segmentState:(unsigned long long)arg2 ;
-(void)_setEnabledAppearance:(BOOL)arg1 ;
-(void)_setSelectionIndicatorDragged:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_invalidateInfoConstraints;
-(UIEdgeInsets)_paddingInsets;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(CGSize)_maximumTextSize;
-(void)_setInfoConstraints:(id)arg1 ;
-(void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(BOOL)arg4 ;
-(void)_updateBackgroundAndContentViewsIfNeeded;
-(id)initWithInfo:(id)arg1 size:(int)arg2 barStyle:(long long)arg3 tintColor:(id)arg4 appearanceStorage:(id)arg5 position:(unsigned)arg6 autosizeText:(BOOL)arg7 adjustsForContentSizeCategory:(BOOL)arg8 ;
-(id)_tintColorArchivingKey;
-(void)updateForAppearance:(id)arg1 ;
-(id)_dividerImage;
-(void)setWasSelected:(BOOL)arg1 ;
-(void)setUsesAXTextSize:(BOOL)arg1 ;
-(void)setAutosizeText:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(BOOL)isSelectionIndicatorDragged;
-(void)setSelectionIndicatorDragged:(BOOL)arg1 ;
-(BOOL)_isContainedInHostedFocusSystem;
-(BOOL)isRightSelected;
-(void)setMomentary:(BOOL)arg1 ;
-(BOOL)showDivider;
-(void)setShowDivider:(BOOL)arg1 ;
-(void)animateAdd:(BOOL)arg1 ;
-(void)animateRemoveForWidth:(double)arg1 ;
-(void)_positionInfoWithoutAnimation;
-(id)_segmentLabel;
-(void)setRequestedScaleFactor:(double)arg1 ;
-(void)_forceInfoDisplay;
-(BOOL)useBlockyMagnificationInClassic;
-(double)_idealWidth;
-(NSArray *)_infoConstraints;
-(double)requestedScaleFactor;
@end

