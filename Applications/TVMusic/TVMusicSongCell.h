//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "_UIFloatingContentViewDelegate-Protocol.h"

@class MPIdentifierSet, MPModelObject, NSArray, NSNumber, NSString, TVImageProxy, TVImageView, TVMusicBarsView, TVMusicSocialBadge, UIColor, UIImage, UIImageView, UILabel, _UIFloatingContentView;

@interface TVMusicSongCell : UICollectionViewCell <_UIFloatingContentViewDelegate>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_artistLabel;	// 16 = 0x10
    UILabel *_durationLabel;	// 24 = 0x18
    UILabel *_ordinalLabel;	// 32 = 0x20
    UILabel *_headingLabel;	// 40 = 0x28
    TVImageView *_thumbnailView;	// 48 = 0x30
    UIImageView *_popularityIndicatorView;	// 56 = 0x38
    UIImageView *_videoBadgeView;	// 64 = 0x40
    NSArray *_labels;	// 72 = 0x48
    TVMusicBarsView *_musicBarsView;	// 80 = 0x50
    _Bool _isObservingPlayer;	// 88 = 0x58
    UIImageView *_playIconView;	// 96 = 0x60
    UIImage *_popularityOnImage;	// 104 = 0x68
    UIImageView *_watchedCheckmarkImageView;	// 112 = 0x70
    UIColor *_titleColor;	// 120 = 0x78
    _Bool _didConfigureOrdinal;	// 128 = 0x80
    _Bool _isExplicit;	// 129 = 0x81
    _Bool _hasOrdinal;	// 130 = 0x82
    _Bool _fullWidthStyle;	// 131 = 0x83
    _Bool _showPlayIconWhenFocused;	// 132 = 0x84
    _Bool _enabled;	// 133 = 0x85
    _Bool _focusable;	// 134 = 0x86
    _Bool _isWatched;	// 135 = 0x87
    _Bool _ordinalVisible;	// 136 = 0x88
    _Bool _playIconVisible;	// 137 = 0x89
    _Bool _musicBarsVisible;	// 138 = 0x8a
    _Bool _hasThumbnailOverrideFrame;	// 139 = 0x8b
    long long _songType;	// 144 = 0x90
    UIImage *_placeholderImage;	// 152 = 0x98
    NSString *_title;	// 160 = 0xa0
    NSString *_artist;	// 168 = 0xa8
    NSString *_heading;	// 176 = 0xb0
    double _duration;	// 184 = 0xb8
    NSString *_durationString;	// 192 = 0xc0
    unsigned long long _ordinalValue;	// 200 = 0xc8
    NSNumber *_popularity;	// 208 = 0xd0
    NSNumber *_popularityThreshold;	// 216 = 0xd8
    TVMusicSocialBadge *_socialBadge;	// 224 = 0xe0
    MPIdentifierSet *_songIdentifier;	// 232 = 0xe8
    _UIFloatingContentView *_floatingView;	// 240 = 0xf0
    MPModelObject *_playbackItem;	// 248 = 0xf8
    MPModelObject *_playbackContainer;	// 256 = 0x100
    struct CGPoint _socialBadgeOffset;	// 264 = 0x108
    struct CGRect _thumbnailOverrideFrame;	// 280 = 0x118
}

+ (id)songCellFromElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000127cc
+ (void)registerElements;	// IMP=0x0000000100012734
- (void).cxx_destruct;	// IMP=0x000000010005e5d4
@property(nonatomic) _Bool hasThumbnailOverrideFrame; // @synthesize hasThumbnailOverrideFrame=_hasThumbnailOverrideFrame;
@property(retain, nonatomic) MPModelObject *playbackContainer; // @synthesize playbackContainer=_playbackContainer;
@property(retain, nonatomic) MPModelObject *playbackItem; // @synthesize playbackItem=_playbackItem;
@property(nonatomic) _Bool musicBarsVisible; // @synthesize musicBarsVisible=_musicBarsVisible;
@property(nonatomic) _Bool playIconVisible; // @synthesize playIconVisible=_playIconVisible;
@property(nonatomic) _Bool ordinalVisible; // @synthesize ordinalVisible=_ordinalVisible;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) MPIdentifierSet *songIdentifier; // @synthesize songIdentifier=_songIdentifier;
@property(nonatomic) struct CGPoint socialBadgeOffset; // @synthesize socialBadgeOffset=_socialBadgeOffset;
@property(nonatomic) struct CGRect thumbnailOverrideFrame; // @synthesize thumbnailOverrideFrame=_thumbnailOverrideFrame;
@property(retain, nonatomic) TVMusicSocialBadge *socialBadge; // @synthesize socialBadge=_socialBadge;
@property(nonatomic) _Bool isWatched; // @synthesize isWatched=_isWatched;
@property(nonatomic) _Bool focusable; // @synthesize focusable=_focusable;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool showPlayIconWhenFocused; // @synthesize showPlayIconWhenFocused=_showPlayIconWhenFocused;
@property(retain, nonatomic) NSNumber *popularityThreshold; // @synthesize popularityThreshold=_popularityThreshold;
@property(retain, nonatomic) NSNumber *popularity; // @synthesize popularity=_popularity;
@property(nonatomic) _Bool fullWidthStyle; // @synthesize fullWidthStyle=_fullWidthStyle;
@property(nonatomic) _Bool hasOrdinal; // @synthesize hasOrdinal=_hasOrdinal;
@property(nonatomic) unsigned long long ordinalValue; // @synthesize ordinalValue=_ordinalValue;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSString *durationString; // @synthesize durationString=_durationString;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) long long songType; // @synthesize songType=_songType;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000010005e2ec
- (void)_updateTitleColor;	// IMP=0x000000010005e074
- (id)_decoratedTitleString;	// IMP=0x000000010005e00c
- (void)_layoutMusicBarsView;	// IMP=0x000000010005de24
- (void)_updateMusicBarsView;	// IMP=0x000000010005dacc
- (void)_updateVideoBadge;	// IMP=0x000000010005d8d4
- (_Bool)_hasVideoBadge;	// IMP=0x000000010005d88c
- (_Bool)_hasThumbnail;	// IMP=0x000000010005d81c
- (unsigned long long)_floatingViewControlState;	// IMP=0x000000010005d7f4
- (_Bool)_shouldShowPlayIcon;	// IMP=0x000000010005d778
- (void)_playbackStatusChanged:(id)arg1;	// IMP=0x000000010005d76c
- (void)_updatePlayingState;	// IMP=0x000000010005d520
@property(readonly, nonatomic) struct CGSize thumbnailSize;
- (void)_setColorsForCurrentUserInterfaceStyle;	// IMP=0x000000010005d214
- (void)_updateColorsForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000010005ccc0
- (void)_layoutLabel:(id)arg1;	// IMP=0x000000010005cbd0
- (id)_createLabelAtPosition:(double)arg1 width:(double)arg2;	// IMP=0x000000010005cb38
@property(readonly, nonatomic) TVImageView *thumbnailImageView;
@property(retain, nonatomic) UIImage *thumbnailImage;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005c8f4
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005c7e4
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010005c6c8
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010005c564
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000010005c504
- (void)setPlayItem:(id)arg1 inContainer:(id)arg2;	// IMP=0x000000010005c3b4
@property(readonly, nonatomic) _Bool hasPlaylistOrdinal;
- (double)_ordinalWidth;	// IMP=0x000000010005bf1c
- (void)_updateOrdinalLabel;	// IMP=0x000000010005bcb4
- (id)_popularityImageForPopularity:(id)arg1;	// IMP=0x000000010005bb88
- (void)setTitle:(id)arg1 isExplicit:(_Bool)arg2;	// IMP=0x000000010005b3b0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010005b24c
- (void)_adjustThumbnailForFocusState;	// IMP=0x000000010005b0c0
- (void)layoutSubviews;	// IMP=0x000000010005a018
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100059d9c
@property(retain, nonatomic) TVImageProxy *thumbnail;
@property(readonly, nonatomic) double cellHeight;
- (void)prepareForReuse;	// IMP=0x0000000100059884
- (_Bool)canBecomeFocused;	// IMP=0x0000000100059878
@property(readonly, nonatomic) double artistWidth;
@property(readonly, nonatomic) double titleWidth;
@property(readonly, nonatomic) double durationWidth;
@property(readonly, nonatomic) double labelHorizontalGap;
- (void)dealloc;	// IMP=0x0000000100059454
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100058c6c
- (long long)_songCellTypeFromTrackTypeAttribute:(id)arg1;	// IMP=0x000000010001393c
- (void)_setPlaybackIdentifiersWithAttributes:(id)arg1;	// IMP=0x0000000100013200
- (void)layoutWithElement:(id)arg1;	// IMP=0x0000000100012880

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
