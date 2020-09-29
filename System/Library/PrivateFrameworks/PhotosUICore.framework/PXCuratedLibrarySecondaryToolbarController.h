/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:11 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIView, PXCuratedLibraryViewModel, PXUpdater, PXCuratedLibraryStyleGuide, UIVisualEffectView, NSString;

@interface PXCuratedLibrarySecondaryToolbarController : NSObject <PXChangeObserver> {

	BOOL _willUpdate;
	BOOL _isAtTop;
	BOOL _stretched;
	UIView* _containerView;
	PXCuratedLibraryViewModel* _viewModel;
	UIView* _contentView;
	PXUpdater* _updater;
	PXCuratedLibraryStyleGuide* _styleGuide;
	UIView* _secondaryToolbar;
	UIVisualEffectView* _backgroundEffectView;
	double _height;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) PXUpdater * updater;                                         //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryStyleGuide * styleGuide;                     //@synthesize styleGuide=_styleGuide - In the implementation block
@property (nonatomic,readonly) UIView * secondaryToolbar;                                   //@synthesize secondaryToolbar=_secondaryToolbar - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backgroundEffectView;                   //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (assign,nonatomic) BOOL isAtTop;                                                  //@synthesize isAtTop=_isAtTop - In the implementation block
@property (assign,nonatomic) BOOL stretched;                                                //@synthesize stretched=_stretched - In the implementation block
@property (assign,nonatomic) double height;                                                 //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                          //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                       //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets containerViewAdditionalEdgeInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)updateIfNeeded;
-(UIView *)containerView;
-(void)_setNeedsUpdate;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXUpdater *)updater;
-(PXCuratedLibraryStyleGuide *)styleGuide;
-(id)initWithContainerView:(id)arg1 viewModel:(id)arg2 ;
-(UIEdgeInsets)containerViewAdditionalEdgeInsets;
-(void)setIsAtTop:(BOOL)arg1 ;
-(void)setStretched:(BOOL)arg1 ;
-(void)_invalidatePositioning;
-(void)_updatePositioning;
-(void)_invalidateSecondaryToolbarLayout;
-(void)_updateSecondaryToolbarLayout;
-(void)_invalidateContentLayout;
-(void)_updateContentLayout;
-(UIView *)secondaryToolbar;
-(UIVisualEffectView *)backgroundEffectView;
-(BOOL)isAtTop;
-(BOOL)stretched;
@end
