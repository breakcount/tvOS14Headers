//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore22BaseCollectionViewCell.h"

@class MISSING_TYPE;

@interface _TtC8AppStore11OfferButton : _TtC8AppStore22BaseCollectionViewCell
{
    MISSING_TYPE *targetActions;	// 176 = 0xb0
    MISSING_TYPE *presenter;	// 184 = 0xb8
    MISSING_TYPE *layoutDelegate;	// 216 = 0xd8
    MISSING_TYPE *effectShape;	// 224 = 0xe0
    MISSING_TYPE *outlineShape;	// 232 = 0xe8
    MISSING_TYPE *imageView;	// 240 = 0xf0
    MISSING_TYPE *label;	// 248 = 0xf8
    MISSING_TYPE *subtitleLabel;	// 256 = 0x100
    MISSING_TYPE *backgroundEffectView;	// 264 = 0x108
    MISSING_TYPE *_configuration;	// 272 = 0x110
    MISSING_TYPE *isConfigurationLayoutEnabled;	// 312 = 0x138
    MISSING_TYPE *cachedIntrinsicContentSize;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x0000000100146910
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001001467e0
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000001001465f0
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000001001460a8
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000100145f2c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100145ee4
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000100145d6c
- (void)layoutSubviews;	// IMP=0x0000000100145c34
@property(nonatomic) struct CGRect frame;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100145138
- (void)accessibilityShowProgress:(double)arg1;	// IMP=0x000000010017cd5c
- (void)accessibilityShowRedownload;	// IMP=0x000000010017cd58
- (void)accessibilityShowText:(id)arg1;	// IMP=0x000000010017cd54
- (void)accessibilityShowLoading;	// IMP=0x000000010017cd50

@end

