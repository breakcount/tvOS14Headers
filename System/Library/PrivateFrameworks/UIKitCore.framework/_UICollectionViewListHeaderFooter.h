/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol UITableConstants;
@class _UISystemBackgroundView, UIView, _UIBackgroundViewConfiguration;

@interface _UICollectionViewListHeaderFooter : UICollectionReusableView {

	struct {
		unsigned style : 3;
		unsigned needsConfigurationStateUpdate : 1;
		unsigned hasCustomBackgroundColor : 1;
		unsigned hasCustomBackgroundViewConfigurationProvider : 1;
		unsigned hasCustomBackgroundViewConfiguration : 1;
		unsigned automaticallyUpdatesBackgroundViewConfiguration : 1;
		unsigned automaticallyUpdatesContentViewConfiguration : 1;
	}  _headerFooterFlags;
	Class _contentViewConfigurationClass;
	/*^block*/id _contentViewConfigurationProvider;
	_UISystemBackgroundView* _systemBackgroundView;
	/*^block*/id _backgroundViewConfigurationProvider;
	UIView* _contentView;
	id<UITableConstants> _constants;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,retain) UIView * contentView;                                                                                                                                                                   //@synthesize contentView=_contentView - In the implementation block
@property (getter=_contentViewInsets,nonatomic,readonly) UIEdgeInsets contentViewInsets;                                                                                                                             //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants;                                                                                                                                     //@synthesize constants=_constants - In the implementation block
@property (setter=_setContentViewConfiguration:,getter=_contentViewConfiguration,nonatomic,copy) id<_UIContentViewConfiguration> _contentViewConfiguration; 
@property (assign,setter=_setAutomaticallyUpdatesContentViewConfiguration:,getter=_automaticallyUpdatesContentViewConfiguration,nonatomic) BOOL _automaticallyUpdatesContentViewConfiguration; 
@property (setter=_setContentViewConfigurationProvider:,getter=_contentViewConfigurationProvider,nonatomic,copy) id _contentViewConfigurationProvider; 
@property (setter=_setBackgroundViewConfiguration:,getter=_backgroundViewConfiguration,nonatomic,copy) _UIBackgroundViewConfiguration * _backgroundViewConfiguration; 
@property (assign,setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:,getter=_automaticallyUpdatesBackgroundViewConfiguration,nonatomic) BOOL _automaticallyUpdatesBackgroundViewConfiguration; 
@property (setter=_setBackgroundViewConfigurationProvider:,getter=_backgroundViewConfigurationProvider,nonatomic,copy) id _backgroundViewConfigurationProvider; 
@property (nonatomic,readonly) unsigned long long _viewConfigurationState; 
+(Class)_contentViewClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(UIView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_layoutContentView;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)_setBackgroundViewConfiguration:(id)arg1 ;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg1 ;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg1 ;
-(UIEdgeInsets)_contentViewInsets;
-(unsigned long long)_viewConfigurationState;
-(id)_constants;
-(void)_updateConstants;
-(void)_updateDefaultBackgroundAppearance;
-(long long)_styleFromLayoutAttributes:(id)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)_setNeedsConfigurationStateUpdate;
-(id)_backgroundViewConfigurationProvider;
-(void)_performConfigurationStateUpdate;
-(_UIBackgroundViewConfiguration *)_backgroundViewConfiguration;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(void)_setContentViewConfiguration:(id)arg1 ;
-(id<_UIContentViewConfiguration>)_contentViewConfiguration;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(void)_setBackgroundViewConfigurationProvider:(/*^block*/id)arg1 ;
-(void)_updateBackgroundViewConfigurationForState:(unsigned long long)arg1 ;
-(void)_updateContentViewConfigurationForState:(unsigned long long)arg1 ;
-(void)_layoutSystemBackgroundView;
-(void)_resetBackgroundViewConfiguration;
-(CGSize)_contentTargetSizeForTargetSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 forUseWithSizeThatFits:(BOOL)arg4 ;
-(void)_setContentViewConfigurationProvider:(/*^block*/id)arg1 ;
-(id)_contentViewConfigurationProvider;
-(void)_applyBackgroundViewConfiguration:(id)arg1 ;
-(void)_resetBackgroundColor;
-(/*^block*/id)_defaultBackgroundViewConfigurationProvider;
@end

