//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTGenericCell.h"

@class MTCountChevronView;

@interface MTPodcastCell : MTGenericCell
{
    MTCountChevronView *_countView;	// 24 = 0x18
}

+ (_Bool)showsArtwork;	// IMP=0x00000001000d34f4
- (void).cxx_destruct;	// IMP=0x00000001000d3da0
@property(retain, nonatomic) MTCountChevronView *countView; // @synthesize countView=_countView;
- (void)updateColors;	// IMP=0x00000001000d3c3c
- (void)updateFonts;	// IMP=0x00000001000d3b04
- (void)configureSubviews;	// IMP=0x00000001000d3a8c
- (id)_subtitleForPodcast:(id)arg1;	// IMP=0x00000001000d36fc
- (void)updateWithObject:(id)arg1;	// IMP=0x00000001000d3554
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000d34fc

@end
