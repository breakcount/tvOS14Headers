/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKitCore/_UILayoutEngineSuspending.h>
#import <UIKit/UITableConstantsCellProviding.h>
#import <UIKitCore/_UISystemBackgroundViewContainer.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITable_UITableViewCellDelegate, _UIContentViewInternal, _UIBackgroundConfigurationInternal, UITableConstants;
@class NSMutableDictionary, NSString, _UIFloatingContentView, UIView, UIImageView, UILabel, _UISystemBackgroundView, UIColor, UIVisualEffect, UIStoryboardPreviewingSegueTemplateStorage, UIControl, _UITableViewCellSeparatorView, UITextField, NSTimer, NSArray, UILongPressGestureRecognizer, NSIndexPath, UIFocusGuide, UICellAccessoryManager, UICellConfigurationState, UIBackgroundConfiguration;

@interface UITableViewCell : UIView <UIScrollViewDelegate, _UILayoutEngineSuspending, UITableConstantsCellProviding, _UISystemBackgroundViewContainer, NSCoding, UIGestureRecognizerDelegate> {

	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selected : 1;
		unsigned editing : 1;
		unsigned swiped : 1;
		unsigned reordering : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsReorderControl : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 5;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned usingDefaultBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned shouldShowMenu : 1;
		unsigned showingMenu : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned deleteAnimationInProgress : 1;
		unsigned animating : 1;
		unsigned animatingEditing : 1;
		unsigned shouldHaveFullLengthBottomSeparator : 1;
		unsigned shouldHaveFullLengthTopSeparator : 1;
		unsigned drawsSeparatorAtTopOfSection : 1;
		unsigned drawsSeparatorAtBottomOfSection : 1;
		unsigned separatorBackdropOverlayBlendMode : 3;
		unsigned separatorDrawsInVibrantLightMode : 1;
		unsigned separatorHidden : 1;
		unsigned hidingSeparatorsForSelection : 1;
		unsigned wantsClipping : 1;
		unsigned allowsReorderingWhenNotEditing : 1;
		unsigned needsHeightCalculation : 1;
		unsigned hasEditingFocusGuides : 1;
		unsigned focusStyle : 3;
		unsigned accessoryViewsHidden : 1;
		unsigned skipsLayout : 1;
		unsigned separatorInsetIsRelativeToCellEdges : 1;
		unsigned highlightingInteractively : 1;
		unsigned insetsContentViewsToSafeArea : 1;
		unsigned needsAccessoriesUpdate : 1;
		unsigned needsAccessoriesUpdateForced : 1;
		unsigned badgeVisible : 1;
		unsigned shouldRestoreTextLabelAfterSystemTextSizeChange : 1;
		unsigned shouldRestoreDetailTextLabelAfterSystemTextSizeChange : 1;
		unsigned shouldRestoreEditableTextFieldAfterSystemTextSizeChange : 1;
		unsigned tableViewHasBeenExplicitlySet : 1;
		unsigned ignoresMultipleSelectionDuringEditing : 1;
		unsigned hasEverUsedRoundedGroups : 1;
		unsigned preserveBackgroundMaskingForReorderAnimationEnding : 1;
		unsigned needsConfigurationStateUpdate : 1;
		unsigned hasCustomBackgroundColor : 1;
		unsigned hasCustomBackgroundView : 1;
		unsigned hasCustomSelectedBackgroundView : 1;
		unsigned hasCustomMultipleSelectionBackgroundView : 1;
		unsigned hasCustomBackgroundViewConfigurationProvider : 1;
		unsigned hasCustomBackgroundViewConfiguration : 1;
		unsigned hasCustomIndentationWidth : 1;
		unsigned automaticallyUpdatesContentViewConfiguration : 1;
		unsigned automaticallyUpdatesBackgroundViewConfiguration : 1;
		unsigned hasShownHighlightedOrSelectedBackground : 1;
	}  _tableCellFlags;
	NSMutableDictionary* __editingControlTintColors;
	id<UITable_UITableViewCellDelegate> _tableView;
	id _layoutManager;
	id _target;
	SEL _editAction;
	SEL _accessoryAction;
	id _editingData;
	long long _indentationLevel;
	double _indentationWidth;
	double _extraLeadingLayoutMarginForIndentation;
	NSString* _reuseIdentifier;
	_UIFloatingContentView* _floatingContentView;
	long long _lineBreakModeBeforeFocus;
	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UIView* _multipleSelectionBackgroundView;
	UIView* _selectedOverlayView;
	double _selectionFadeDuration;
	NSString* _contentViewConfigurationIdentifier;
	id<_UIContentViewInternal> _viewForContentConfiguration;
	/*^block*/id _contentViewConfigurationProvider;
	_UISystemBackgroundView* _systemBackgroundView;
	/*^block*/id _backgroundViewConfigurationProvider;
	id<_UIBackgroundConfigurationInternal> _lastNormalBackgroundViewConfiguration;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UIColor* _sectionBorderColor;
	UIView* _floatingSeparatorView;
	UIView* _topShadowAnimationView;
	UIView* _bottomShadowAnimationView;
	id _badge;
	CFDictionaryRef _unhighlightedStates;
	id _selectionSegueTemplate;
	id _accessoryActionSegueTemplate;
	UIStoryboardPreviewingSegueTemplateStorage* _accessoryActionPreviewingSegueTemplateStorage;
	UIControl* _accessoryView;
	UIControl* _editingAccessoryView;
	UIView* _customAccessoryView;
	UIView* _customEditingAccessoryView;
	_UITableViewCellSeparatorView* _separatorView;
	_UITableViewCellSeparatorView* _topSeparatorView;
	UITextField* _editableTextField;
	double _lastSelectionTime;
	NSTimer* _deselectTimer;
	double _textFieldOffset;
	double _indexBarExtentFromEdge;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	SEL _returnAction;
	UIColor* _selectionTintColor;
	NSArray* _selectionEffects;
	UIColor* _accessoryTintColor;
	UILongPressGestureRecognizer* _longPressGesture;
	NSIndexPath* _representedIndexPath;
	UIView* _clearBlendingView;
	double _sectionCornerRadius;
	double _defaultLeadingMarginWidth;
	double _defaultTrailingCellMarginWidth;
	UIFocusGuide* _editControlFocusGuide;
	UIFocusGuide* _reorderControlFocusGuide;
	id<UITableConstants> _constants;
	BOOL _isLayoutEngineSuspended;
	BOOL _userInteractionEnabledWhileDragging;
	UICellAccessoryManager* _accessoryManager;

}

@property (assign,setter=_setUsesModernAccessoriesLayout:,getter=_usesModernAccessoriesLayout,nonatomic) BOOL usesModernAccessoriesLayout; 
@property (getter=_accessoryManager,nonatomic,readonly) UICellAccessoryManager * accessoryManager;                                                       //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (setter=_setEditControlFocusGuide:,getter=_editControlFocusGuide,nonatomic,retain) UIFocusGuide * editControlFocusGuide;                       //@synthesize editControlFocusGuide=_editControlFocusGuide - In the implementation block
@property (setter=_setReorderControlFocusGuide:,getter=_reorderControlFocusGuide,nonatomic,retain) UIFocusGuide * reorderControlFocusGuide;              //@synthesize reorderControlFocusGuide=_reorderControlFocusGuide - In the implementation block
@property (assign,setter=_setSkipsLayout:,getter=_skipsLayout,nonatomic) BOOL skipsLayout; 
@property (nonatomic,readonly) UICellConfigurationState * configurationState; 
@property (nonatomic,copy) id<UIContentConfiguration> contentConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesContentConfiguration; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,copy) UIBackgroundConfiguration * backgroundConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) UIView * selectedBackgroundView; 
@property (nonatomic,retain) UIView * multipleSelectionBackgroundView; 
@property (nonatomic,copy,readonly) NSString * reuseIdentifier; 
@property (assign,nonatomic) long long selectionStyle; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) long long editingStyle; 
@property (assign,nonatomic) BOOL showsReorderControl; 
@property (assign,nonatomic) BOOL shouldIndentWhileEditing; 
@property (assign,nonatomic) long long accessoryType; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) long long editingAccessoryType; 
@property (nonatomic,retain) UIView * editingAccessoryView; 
@property (assign,nonatomic) long long indentationLevel; 
@property (assign,nonatomic) double indentationWidth; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,readonly) BOOL showingDeleteConfirmation; 
@property (assign,nonatomic) long long focusStyle; 
@property (assign,nonatomic) BOOL userInteractionEnabledWhileDragging;                                                                                   //@synthesize userInteractionEnabledWhileDragging=_userInteractionEnabledWhileDragging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;                              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
@property (getter=_minimumCellAccessoryMargin,nonatomic,readonly) double minimumCellAccessoryMargin; 
@property (getter=_cellStyle,nonatomic,readonly) long long cellStyle; 
+(void)_initializeForIdiom:(long long)arg1 ;
+(void)_ensureInitializeSystemAppearanceModifications;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)_target;
-(id)target;
-(long long)style;
-(void)_setTarget:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(BOOL)isEditing;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setAccessoryType:(long long)arg1 ;
-(long long)accessoryType;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)image;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(id)font;
-(void)setFont:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)textLabel;
-(id)_tableView;
-(id)_badge;
-(id)_indexPath;
-(id)textColor;
-(void)setTextColor:(id)arg1 ;
-(UIView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeFromSuperview;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)layoutManager;
-(void)setLayoutManager:(id)arg1 ;
-(void)_updateAccessories;
-(void)setEditing:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(BOOL)_canDrawContent;
-(id)_accessoryManager;
-(BOOL)isHighlighted;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setSelectedImage:(id)arg1 ;
-(id)selectedImage;
-(UILabel *)detailTextLabel;
-(void)setTextAlignment:(long long)arg1 ;
-(id)editableTextField;
-(long long)tableViewStyle;
-(void)setBackgroundView:(UIView *)arg1 ;
-(id)separatorColor;
-(void)setSeparatorColor:(id)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)selectionFadeDuration;
-(UIView *)selectedBackgroundView;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(double)textFieldOffset;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSString *)reuseIdentifier;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTextFieldOffset:(double)arg1 ;
-(UIView *)accessoryView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setNeedsUpdateConstraints;
-(void)setPlaceHolderValue:(id)arg1 ;
-(double)_marginWidth;
-(void)setContentConfiguration:(id<UIContentConfiguration>)arg1 ;
-(void)setNeedsUpdateConfiguration;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(UIEdgeInsets)separatorInset;
-(long long)textAlignment;
-(UIView *)backgroundView;
-(void)_setMarginWidth:(double)arg1 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(int)sectionLocation;
-(id)_imageView;
-(void)bringSubviewToFront:(id)arg1 ;
-(long long)_separatorBackdropOverlayBlendMode;
-(void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(void)_setAccessoryTintColor:(id)arg1 ;
-(void)setEditingAccessoryType:(long long)arg1 ;
-(id)_multiselectBackgroundColor;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForContentRect:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didMoveToSuperview;
-(BOOL)_isAnimating;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(CGRect)_separatorFrame;
-(id)preferredFocusedView;
-(double)_separatorHeight;
-(long long)_cellStyle;
-(void)setEditingAccessoryView:(UIView *)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)setIndentationWidth:(double)arg1 ;
-(id)_textLabel;
-(void)setClipsContents:(BOOL)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(id)_checkmarkImage;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_setContentView:(id)arg1 ;
-(BOOL)_isReordering;
-(BOOL)_isHighlighted;
-(BOOL)_separatorHidden;
-(void)_setupBackgroundView;
-(long long)indentationLevel;
-(void)_setAnimating:(BOOL)arg1 ;
-(SEL)editAction;
-(void)setEditAction:(SEL)arg1 ;
-(id)_defaultFont;
-(id)_contentBackgroundColor;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1 ;
-(BOOL)_needsSetup;
-(UICellConfigurationState *)configurationState;
-(id)_configurationState;
-(id<UIContentConfiguration>)contentConfiguration;
-(id)defaultContentConfiguration;
-(UIBackgroundConfiguration *)backgroundConfiguration;
-(void)setBackgroundConfiguration:(UIBackgroundConfiguration *)arg1 ;
-(id)_detailTextLabel;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(id)selectedTextColor;
-(UIEdgeInsets)_effectiveSafeAreaInsets;
-(id)_systemBackgroundView;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(void)_systemTextSizeChanged;
-(id)_defaultAccessoryView;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_accessoryViewForType:(long long)arg1 ;
-(id)_textLabel:(BOOL)arg1 ;
-(id)_detailTextLabel:(BOOL)arg1 ;
-(id)_imageView:(BOOL)arg1 ;
-(id)_editableTextField:(BOOL)arg1 ;
-(long long)editingAccessoryType;
-(BOOL)showingDeleteConfirmation;
-(CGRect)reorderRectForBounds:(CGRect)arg1 ;
-(id)_badgeText;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)editControlWasClicked:(id)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)_backgroundInset;
-(long long)focusStyle;
-(void)setFocusStyle:(long long)arg1 ;
-(void)_setHiddenForReuse:(BOOL)arg1 ;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)_setBackgroundViewConfiguration:(id)arg1 ;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg1 ;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)selectionTintColor;
-(void)setSelectionTintColor:(id)arg1 ;
-(UIView *)editingAccessoryView;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(id)_encodableSubviews;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_setRawLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(double)_indexBarExtentFromEdge;
-(void)_setBadgeColor:(id)arg1 ;
-(id)_badgeColor;
-(long long)_focusTouchSensitivityStyle;
-(unsigned long long)_viewConfigurationState;
-(id)_constants;
-(void)_updateLeadingLayoutMarginForIndentation;
-(void)_updateAccessoriesIfNeeded;
-(void)_updateDefaultBackgroundAppearance;
-(void)_updateDefaultIndentationWidth;
-(void)_setNeedsConfigurationStateUpdate;
-(/*^block*/id)_backgroundViewConfigurationProvider;
-(void)_performConfigurationStateUpdate;
-(void)_resetRawLayoutMargins;
-(void)_setIndentationWidth:(double)arg1 ;
-(UIEdgeInsets)_concreteDefaultLayoutMargins;
-(UIEdgeInsets)_adjustedRawLayoutMargins:(UIEdgeInsets)arg1 withLeadingLayoutMarginAdjustment:(double)arg2 ;
-(id)_editingControlTintColorForStyle:(long long)arg1 ;
-(double)_minimumCellAccessoryMargin;
-(id)_defaultBackgroundConfiguration;
-(double)indentationWidth;
-(unsigned long long)_maskedCornersForSystemBackgroundView;
-(id)_backgroundViewConfiguration;
-(void)_applyBackgroundViewConfiguration:(id)arg1 withState:(id)arg2 ;
-(id)_accessoryTintColor;
-(id)_separatorEffect;
-(void)_setDefaultLeadingMarginWidth:(double)arg1 ;
-(double)_defaultLeadingMarginWidth;
-(void)_setDefaultTrailingCellMarginWidth:(double)arg1 ;
-(double)_defaultTrailingCellMarginWidth;
-(void)_setIndexBarExtentFromEdge:(double)arg1 ;
-(void)_setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(void)_setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)_insetsContentViewsToSafeArea;
-(void)_setSeparatorEffect:(id)arg1 ;
-(void)_setBackgroundInset:(UIEdgeInsets)arg1 ;
-(void)_setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(BOOL)_drawsSeparatorAtTopOfSection;
-(void)_setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(BOOL)_drawsSeparatorAtBottomOfSection;
-(void)setSectionLocation:(int)arg1 ;
-(long long)editingStyle;
-(void)setEditingStyle:(long long)arg1 ;
-(BOOL)shouldIndentWhileEditing;
-(BOOL)showsReorderControl;
-(void)_setTableView:(id)arg1 ;
-(unsigned long long)currentStateMask;
-(id)_accessoryView:(BOOL)arg1 ;
-(id)_separatorView:(BOOL)arg1 ;
-(id)editingData:(BOOL)arg1 ;
-(void)_setSeparatorHidden:(BOOL)arg1 ;
-(void)_setAccessoryViewsHidden:(BOOL)arg1 ;
-(void)removeEditingData;
-(void)_setShowsReorderControl:(BOOL)arg1 ;
-(void)_setEditingStyle:(long long)arg1 ;
-(void)_setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2 cellOrAncestorViewForAnimatedLayout:(id)arg3 ;
-(void)_setMultiselecting:(BOOL)arg1 ;
-(void)setWasSwiped:(BOOL)arg1 ;
-(UIEdgeInsets)_rawSeparatorInset;
-(UIView *)multipleSelectionBackgroundView;
-(void)setMultipleSelectionBackgroundView:(UIView *)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(long long)_popoverControllerStyle;
-(BOOL)_isInModalViewController;
-(void)_setConstants:(id)arg1 ;
-(void)_setRightMarginWidth:(double)arg1 ;
-(BOOL)_shouldApplyReadableWidthInsets;
-(CGRect)_updatedContentViewFrameForTargetWidth:(double)arg1 ;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(BOOL)_isUsingOldStyleMultiselection;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(void)_applyContentViewConfiguration:(id)arg1 withState:(id)arg2 usingSPI:(BOOL)arg3 ;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(void)_setContentViewConfiguration:(id)arg1 ;
-(id)_contentViewConfiguration;
-(void)_setSwiped:(BOOL)arg1 ;
-(void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2 ;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(BOOL)_usingBackgroundViewConfiguration;
-(id)_stateForUpdatingBackgroundConfigurationWithState:(id)arg1 ;
-(void)_resetBackgroundViewsAndColor;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(void)_setBackgroundViewConfigurationProvider:(/*^block*/id)arg1 ;
-(BOOL)_isSwiped;
-(void)_updateBackgroundViewConfigurationForState:(id)arg1 ;
-(void)_updateContentViewConfigurationForState:(id)arg1 ;
-(void)_layoutSystemBackgroundView;
-(void)_resetBackgroundViewConfiguration;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_ensureFocusedFloatingContentView;
-(BOOL)_isLayoutEngineSuspended;
-(void)setAutomaticallyUpdatesContentConfiguration:(BOOL)arg1 ;
-(BOOL)automaticallyUpdatesContentConfiguration;
-(void)_setContentViewConfigurationProvider:(/*^block*/id)arg1 ;
-(/*^block*/id)_contentViewConfigurationProvider;
-(void)_setReordering:(BOOL)arg1 ;
-(id)_visiblePathForBackgroundConfiguration;
-(void)setAutomaticallyUpdatesBackgroundConfiguration:(BOOL)arg1 ;
-(BOOL)automaticallyUpdatesBackgroundConfiguration;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)_setBadgeText:(id)arg1 ;
-(id)_layoutDebuggingTitle;
-(void)setSelectionFadeDuration:(double)arg1 ;
-(id)_previewingSegueTemplateStorageForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)_insetsBackground;
-(BOOL)_usesRoundedGroups;
-(id)_customEditingAccessoryView:(BOOL)arg1 ;
-(id)_customAccessoryView:(BOOL)arg1 ;
-(BOOL)_hasEditingAccessoryView;
-(id)_editingAccessoryView:(BOOL)arg1 ;
-(BOOL)_hasAccessoryView;
-(BOOL)_usesModernAccessoriesLayout;
-(BOOL)_allowsReorderingWhenNotEditing;
-(void)_setUsesModernAccessoriesLayout:(BOOL)arg1 ;
-(BOOL)_changesOpaqueStateOfSubviews;
-(void)_setOverriddenDefaultContentViewLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)_badge:(BOOL)arg1 ;
-(id)_backgroundView:(BOOL)arg1 ;
-(id)_selectedBackgroundView:(BOOL)arg1 ;
-(void)_updateSeparatorContent:(BOOL)arg1 ;
-(id)_editControlFocusGuide;
-(id)_reorderControlFocusGuide;
-(void)_setEditControlFocusGuide:(id)arg1 ;
-(void)_setReorderControlFocusGuide:(id)arg1 ;
-(BOOL)wasSwiped;
-(void)_contentViewLabelTextDidChange:(id)arg1 ;
-(id)_disclosureChevronImage;
-(void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1 ;
-(double)_verticalPaddingForSeparator;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(BOOL)_isCurrentlyConsideredHighlighted;
-(void)_saveOpaqueViewState:(id)arg1 ;
-(void)_updateDefaultImageSymbolConfiguration;
-(void)_updateImageViewTintColor;
-(void)_showMenuFromLongPressGesture;
-(BOOL)_shouldMaskToBoundsWhileAnimating;
-(double)_roundedGroupCornerRadius;
-(BOOL)_appliesMaskingToCellWhenUsingBackgroundConfiguration;
-(void)_setContentClipCorners:(unsigned long long)arg1 updateCorners:(BOOL)arg2 ;
-(void)_updateSeparatorContent;
-(void)_setNeedsSeparatorUpdate;
-(double)_rightMarginWidth;
-(BOOL)_showFullLengthTopSeparatorForTopOfSection;
-(BOOL)_hidesBottomSeparatorWhenUnselected;
-(void)_updateSeparatorViewAlpha;
-(void)_updateTopSeparatorViewAlpha;
-(BOOL)_shouldHideSeparator;
-(id)_addSeparatorWithFrame:(CGRect)arg1 ;
-(BOOL)_showSeparatorAtTopOfSection;
-(CGRect)_topSeparatorFrame;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(id)_subviewsForFloatingContentView;
-(void)_releaseTextLabel;
-(void)_releaseDetailTextLabel;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)_updateContentClip;
-(void)_setupTableViewCellCommon;
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(id)_createDefaultContentView;
-(void)_setupModernAccessoriesLayout;
-(void)_setupMenuGesture;
-(id)_existingSystemAccessoryViews;
-(void)_didCreateContentView;
-(void)_setFont:(id)arg1 layout:(BOOL)arg2 ;
-(void)_setNeedsAccessoriesUpdate;
-(void)_clearPrimaryTextFrameDidChangeHandlerForContentView:(id)arg1 ;
-(void)_setupPrimaryTextFrameDidChangeHandlerForContentView:(id)arg1 ;
-(BOOL)drawingEnabled;
-(void)_resetContentViews;
-(BOOL)_usingBackgroundConfigurationOrDefaultBackgroundConfiguration;
-(void)_setupSelectedBackgroundView;
-(void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setDrawsTopSeparator:(BOOL)arg1 ;
-(void)_resetSelectionTimer;
-(void)_resetEditControlRotation;
-(void)_updateHighlightColors;
-(id)_existingSystemAccessoryView:(BOOL)arg1 ;
-(BOOL)_shouldChangeOpaqueStateOfView:(id)arg1 ;
-(void)_applySelectedStateToSeparators:(BOOL)arg1 ;
-(void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1 ;
-(void)_setSelectionStyle:(long long)arg1 selectionTintColor:(id)arg2 ;
-(void)_updateCellForCurrentBackgroundConfiguration;
-(void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_deselectAnimationFinished;
-(void)_cancelInternalPerformRequests;
-(void)_updateFloatingContentControlStateAnimated:(BOOL)arg1 ;
-(void)_delayedDeselect;
-(void)_updateDefaultLabelsForFocus:(BOOL)arg1 ;
-(void)_updateDefaultAccessoryViewForFocus:(BOOL)arg1 ;
-(void)_removeFocusedFloatingContentView;
-(void)_willTransitionToState:(unsigned long long)arg1 ;
-(void)_didTransitionToState:(unsigned long long)arg1 ;
-(void)_updateExpansionButton:(id)arg1 forType:(long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)_updateExpansionButtonFromType:(long long)arg1 toType:(long long)arg2 ;
-(void)_syncAccessoryViewsIfNecessary;
-(void)_setFrame:(CGRect)arg1 skipLayout:(BOOL)arg2 ;
-(void)_updateAccessoryMetrics;
-(void)_removeFromSuperviewIgnoringFirstResponder:(BOOL)arg1 ;
-(void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2 ;
-(void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(BOOL)arg3 ;
-(void)_restoreLabelTextAfterSystemTextSizeChangeIfNeeded;
-(void)_layoutFloatingContentView;
-(BOOL)_skipsLayout;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setSectionLocation:(int)arg1 animated:(BOOL)arg2 forceBackgroundSetup:(BOOL)arg3 ;
-(id)_editableTextField;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 touch:(id)arg3 ;
-(void)_setDeleteAnimationInProgress:(BOOL)arg1 ;
-(id)_newAccessoryView:(BOOL)arg1 ;
-(void)_clearOpaqueViewState:(id)arg1 ;
-(void)_multiselectColorChanged;
-(double)_contentConfigurationPrimaryTextInsetFromCellLeadingEdge;
-(double)_imageViewExtentFromCellLeadingEdge;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1 ;
-(id)accessoryActionPreviewingSegueTemplateStorage;
-(void)_setNeedsAccessoriesUpdateForced:(BOOL)arg1 ;
-(void)_setAccessoryManager:(id)arg1 ;
-(long long)_sanitizedEditingStyleForEditing:(BOOL)arg1 style:(long long)arg2 ;
-(BOOL)_editControlShouldBeOnLeadingSideForStyle:(long long)arg1 ;
-(id)_editControlAccessoryForStyle:(long long)arg1 ;
-(id)_leadingAccessoriesForEditing:(BOOL)arg1 style:(long long)arg2 ;
-(id)_trailingAccessoriesForType:(long long)arg1 view:(id)arg2 editing:(BOOL)arg3 style:(long long)arg4 ;
-(void)_removeRemoveControl;
-(BOOL)_drawsTopSeparatorDuringReordering;
-(void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1 ;
-(void)setAccessoryActionSegueTemplate:(id)arg1 ;
-(id)accessoryActionSegueTemplate;
-(void)setSelectionSegueTemplate:(id)arg1 ;
-(id)selectionSegueTemplate;
-(BOOL)_shouldHaveFullLengthBottomSeparator;
-(BOOL)_shouldHaveFullLengthTopSeparator;
-(UIEdgeInsets)_backgroundSeparatorInset;
-(void)_encodeBackgroundColorWithCoder:(id)arg1 ;
-(void)setSelectedTextColor:(id)arg1 ;
-(void)_setBadgeFont:(id)arg1 ;
-(id)_badgeFont;
-(id)_forSpringBoardDefaultSelectedBackgroundView;
-(void)_forSpringBoardSetDefaultSelectedBackgroundView:(id)arg1 ;
-(void)_setDefaultBackgroundColor:(id)arg1 ;
-(id)sectionBorderColor;
-(void)setSectionBorderColor:(id)arg1 ;
-(void)_willEnterReusePool;
-(BOOL)_ignoresMultipleSelectionDuringEditing;
-(void)_setIgnoresMultipleSelectionDuringEditing:(BOOL)arg1 ;
-(CGRect)accessoryRectForBounds:(CGRect)arg1 ;
-(void)_updateShowingSelectedBackground;
-(BOOL)isAtLeastHalfSelected;
-(float)selectionPercent;
-(id)selectedOverlayView;
-(void)_transitionToReorderingAppearance:(BOOL)arg1 ;
-(void)_finishTransitioningToReorderingAppearance:(BOOL)arg1 ;
-(void)setHidesAccessoryWhenEditing:(BOOL)arg1 ;
-(BOOL)hidesAccessoryWhenEditing;
-(BOOL)clipsContents;
-(void)_setSkipsLayout:(BOOL)arg1 ;
-(void)setAccessoryAction:(SEL)arg1 ;
-(SEL)accessoryAction;
-(CGRect)contentRectForState:(unsigned long long)arg1 ;
-(void)_setReorderControlImage:(id)arg1 ;
-(id)_reorderControlImage;
-(void)_setEditingControlTintColor:(id)arg1 forStyle:(long long)arg2 ;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(long long)arg2 ;
-(void)_removeFloatingSeparator;
-(void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(long long)arg2 ;
-(void)_removeInnerShadow;
-(BOOL)_isReorderControlActive;
-(BOOL)_grabberBeganReorder:(id)arg1 touch:(id)arg2 ;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 ;
-(void)_grabberReleased:(id)arg1 ;
-(BOOL)_isReorderable;
-(void)_toggleExpansionButton;
-(void)_setAccessoryAction:(SEL)arg1 ;
-(SEL)_accessoryAction;
-(void)_setNeedsSetup:(BOOL)arg1 ;
-(void)_setNeedsHeightCalculation:(BOOL)arg1 ;
-(BOOL)_needsHeightCalculation;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)_startToEditTextField;
-(BOOL)_isMultiselecting;
-(void)_setIndexPath:(id)arg1 ;
-(NSDirectionalEdgeInsets)_overriddenDefaultContentViewLayoutMargins;
-(void)_tableViewDidUpdateMarginWidth;
-(BOOL)_isDeleteAnimationInProgress;
-(void)setReturnAction:(SEL)arg1 ;
-(SEL)returnAction;
-(BOOL)_separatorDrawsInVibrantLightMode;
-(BOOL)_accessoryViewsHidden;
-(void)_setAllowsReorderingWhenNotEditing:(BOOL)arg1 ;
-(void)setAccessoryActionPreviewingSegueTemplateStorage:(id)arg1 ;
-(void)_setCurrentScreenScale:(double)arg1 ;
-(BOOL)userInteractionEnabledWhileDragging;
-(void)setUserInteractionEnabledWhileDragging:(BOOL)arg1 ;
@end

