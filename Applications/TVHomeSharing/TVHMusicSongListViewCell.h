//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHListViewCell.h"

#import "TVHNowPlayingBarsListViewCell-Protocol.h"

@class NSNumber, NSString, TVHNowPlayingBarsView, TVImageProxy, UIImage, UILabel, _TVImageView;

@interface TVHMusicSongListViewCell : TVHListViewCell <TVHNowPlayingBarsListViewCell>
{
    _Bool _hasExplicitLyrics;	// 8 = 0x8
    unsigned long long _nowPlayingBarsState;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSNumber *_duration;	// 32 = 0x20
    _TVImageView *_imageView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_artistTitleLabel;	// 56 = 0x38
    UILabel *_albumTitleLabel;	// 64 = 0x40
    UILabel *_durationLabel;	// 72 = 0x48
    TVHNowPlayingBarsView *_nowPlayingBarsView;	// 80 = 0x50
}

+ (id)_durationLabelTextColorWithUserInterfaceStyle:(long long)arg1 andFocus:(_Bool)arg2;	// IMP=0x000000010001cd9c
+ (id)_titleLabelTextColorWithUserInterfaceStyle:(long long)arg1 andFocus:(_Bool)arg2;	// IMP=0x000000010001cd48
- (void).cxx_destruct;	// IMP=0x000000010001d0cc
@property(retain, nonatomic) TVHNowPlayingBarsView *nowPlayingBarsView; // @synthesize nowPlayingBarsView=_nowPlayingBarsView;
@property(readonly, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(readonly, nonatomic) UILabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(readonly, nonatomic) UILabel *artistTitleLabel; // @synthesize artistTitleLabel=_artistTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool hasExplicitLyrics; // @synthesize hasExplicitLyrics=_hasExplicitLyrics;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long nowPlayingBarsState; // @synthesize nowPlayingBarsState=_nowPlayingBarsState;
- (id)_floatingContentViewContentView;	// IMP=0x000000010001cfc4
- (void)_updateNowPlayingBars:(unsigned long long)arg1;	// IMP=0x000000010001cdf0
- (void)_updateColors;	// IMP=0x000000010001cbb4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010001ca24
- (void)prepareForReuse;	// IMP=0x000000010001c954
- (void)updateConstraints;	// IMP=0x000000010001c6b8
- (void)didMoveToSuperview;	// IMP=0x000000010001c668
@property(copy, nonatomic) NSString *albumTitle;
@property(copy, nonatomic) NSString *artistTitle;
- (void)setTitle:(id)arg1 hasExplicitLyrics:(_Bool)arg2;	// IMP=0x000000010001c374
@property(retain, nonatomic) UIImage *placeholderImage;
@property(retain, nonatomic) TVImageProxy *imageProxy;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001b66c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
