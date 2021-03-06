//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTableViewCell.h"

@class NSString, UISwitch;

@interface MTSwitchCell : MTTableViewCell
{
    CDUnknownBlockType _toggleChanged;	// 24 = 0x18
    NSString *_artworkKey;	// 32 = 0x20
    unsigned long long _maximumNumberOfTextLines;	// 40 = 0x28
    UISwitch *_toggle;	// 48 = 0x30
}

+ (id)titleFont;	// IMP=0x00000001000304c8
- (void).cxx_destruct;	// IMP=0x0000000100030598
@property(retain, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
@property(nonatomic) unsigned long long maximumNumberOfTextLines; // @synthesize maximumNumberOfTextLines=_maximumNumberOfTextLines;
@property(retain, nonatomic) NSString *artworkKey; // @synthesize artworkKey=_artworkKey;
@property(copy, nonatomic) CDUnknownBlockType toggleChanged; // @synthesize toggleChanged=_toggleChanged;
- (void)toggleChanged:(id)arg1;	// IMP=0x00000001000304e8
- (_Bool)_loadArtworkFromMemoryCache;	// IMP=0x00000001000303d4
- (void)_asyncFetchArtworkDidLoadImage:(id)arg1 forArtworkKey:(id)arg2;	// IMP=0x00000001000302fc
- (void)_fetchArtworkInBackground;	// IMP=0x000000010002ff8c
- (void)_fetchArtwork;	// IMP=0x000000010002fea8
- (void)_clearAndHideArtworkView;	// IMP=0x000000010002fe50
- (id)_artworkView;	// IMP=0x000000010002fe44
- (_Bool)_showsArtwork;	// IMP=0x000000010002fe14
- (void)_layoutContentViewSubviews;	// IMP=0x000000010002fab8
- (void)_updateSeparatorInsets;	// IMP=0x000000010002f9d4
@property(readonly, nonatomic) _Bool customiseLabelAndSeparatorInsets;
- (void)setupCell;	// IMP=0x000000010002f85c
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000010002f7dc
- (void)layoutSubviews;	// IMP=0x000000010002f780
- (void)toggleOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002f5fc
- (void)toggleOn:(_Bool)arg1;	// IMP=0x000000010002f5ec

@end

