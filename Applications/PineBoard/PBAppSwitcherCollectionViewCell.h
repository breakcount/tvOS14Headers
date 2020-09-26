//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, PBAppSwitcherItem, PBAppSwitcherTitleView, TVSUIOuterShadowView, UIView;

@interface PBAppSwitcherCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    UIView *_sceneView;	// 8 = 0x8
    PBAppSwitcherItem *_appSwitcherItem;	// 16 = 0x10
    PBAppSwitcherTitleView *_titleView;	// 24 = 0x18
    UIView *_itemContentView;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    UIView *_dimmingView;	// 48 = 0x30
    TVSUIOuterShadowView *_shadowView;	// 56 = 0x38
    double _contentCornerRadius;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100166888
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(readonly, nonatomic) TVSUIOuterShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *itemContentView; // @synthesize itemContentView=_itemContentView;
@property(readonly, nonatomic) PBAppSwitcherTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) PBAppSwitcherItem *appSwitcherItem; // @synthesize appSwitcherItem=_appSwitcherItem;
@property(retain, nonatomic) UIView *sceneView; // @synthesize sceneView=_sceneView;
- (void)_setShadowRadius:(double)arg1 alpha:(double)arg2;	// IMP=0x0000000100166460
- (void)_setDimingAlpha:(double)arg1;	// IMP=0x00000001001663c4
- (void)_setContentAlpha:(double)arg1;	// IMP=0x0000000100166348
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100166098
- (void)layoutSubviews;	// IMP=0x00000001001659cc
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000010016547c
- (void)dealloc;	// IMP=0x0000000100165410
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100164d10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
