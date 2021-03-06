//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCache, NSString, UIColor, UILabel;
@protocol MTLabelStackViewDelegate;

@interface MTLabelStackView : UIView
{
    _Bool _heightWillChange;	// 8 = 0x8
    NSCache *_textSizeCache;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    NSString *_titleTextStyle;	// 32 = 0x20
    NSString *_subtitleTextStyle;	// 40 = 0x28
    UIColor *_titleTextColor;	// 48 = 0x30
    UIColor *_subtitleTextColor;	// 56 = 0x38
    id <MTLabelStackViewDelegate> _delegate;	// 64 = 0x40
    double _subtitleMaxWidth;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
    UILabel *_subtitleLabel;	// 88 = 0x58
}

+ (unsigned long long)defaultSubtitleNumberOfLines;	// IMP=0x00000001000e00dc
+ (unsigned long long)defaultTitleNumberOfLines;	// IMP=0x00000001000e00d4
+ (id)defaultSubtitleFont;	// IMP=0x00000001000e0070
+ (id)defaultTitleFont;	// IMP=0x00000001000e000c
+ (id)defaultSubtitleTextStyle;	// IMP=0x00000001000dfffc
+ (id)defaultTitleTextStyle;	// IMP=0x00000001000dffec
+ (double)distanceBetweenLabelFramesWithTitleFont:(id)arg1 subtitleFont:(id)arg2 multilineTitle:(_Bool)arg3;	// IMP=0x00000001000dff3c
+ (double)distanceBetweenLabelFrames;	// IMP=0x00000001000dfe88
+ (double)maxHeightForTitleNumberOfLines:(unsigned long long)arg1 subtitleNumberOfLines:(unsigned long long)arg2;	// IMP=0x00000001000dfd90
+ (double)maxHeight;	// IMP=0x00000001000dfd38
- (void).cxx_destruct;	// IMP=0x00000001000e166c
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double subtitleMaxWidth; // @synthesize subtitleMaxWidth=_subtitleMaxWidth;
@property(nonatomic) __weak id <MTLabelStackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long subtitleNumberOfLines;
@property(nonatomic) unsigned long long titleNumberOfLines;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)_notifyDelegateIfHeightChanged;	// IMP=0x00000001000e0ad0
- (void)_heightWillChange;	// IMP=0x00000001000e0ab4
- (void)_updateSubtitleFont;	// IMP=0x00000001000e0a00
- (void)_updateTitleFont;	// IMP=0x00000001000e094c
- (id)sizeCacheKeyForLabel:(id)arg1 width:(double)arg2;	// IMP=0x00000001000e0910
- (double)subtitleHeightForWidth:(double)arg1;	// IMP=0x00000001000e07e8
- (double)titleHeightForWidth:(double)arg1;	// IMP=0x00000001000e06c0
- (double)distanceBetweenLabelFrames;	// IMP=0x00000001000e0554
- (double)heightForWidth:(double)arg1;	// IMP=0x00000001000e04d0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000e04a0
- (void)layoutSubviews;	// IMP=0x00000001000e02f8
- (void)updateFonts;	// IMP=0x00000001000e0208
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000e00e4

@end

