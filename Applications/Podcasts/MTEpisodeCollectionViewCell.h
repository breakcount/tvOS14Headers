//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTCollectionViewCell.h"

#import "MTEpisodeLockupDelegate-Protocol.h"

@class MTColorTheme, MTEpisode, MTEpisodeActionController, MTEpisodeLockup, NSString, UIView;
@protocol MTEpisodeCollectionViewCellDelegate;

@interface MTEpisodeCollectionViewCell : MTCollectionViewCell <MTEpisodeLockupDelegate>
{
    UIView *_lockupContainer;	// 8 = 0x8
    MTEpisodeLockup *_episodeLockup;	// 16 = 0x10
}

+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x0000000100092ac0
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x0000000100092aac
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x00000001000929d4
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x000000010009298c
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x0000000100092978
- (void).cxx_destruct;	// IMP=0x0000000100094208
@property(retain, nonatomic) MTEpisodeLockup *episodeLockup; // @synthesize episodeLockup=_episodeLockup;
@property(retain, nonatomic) UIView *lockupContainer; // @synthesize lockupContainer=_lockupContainer;
- (void)clearLayer:(id)arg1;	// IMP=0x000000010009417c
- (void)lockupDidChangeSize:(id)arg1;	// IMP=0x0000000100094090
- (void)lockup:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x0000000100094020
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100093f88
- (void)moreButtonTapped:(id)arg1;	// IMP=0x0000000100093f84
- (void)updateOverlayForSelectedOrIsNew;	// IMP=0x0000000100093a38
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100093960
- (void)layoutSubviews;	// IMP=0x0000000100093800
- (void)prepareForReuse;	// IMP=0x0000000100093758
- (void)fixEmptyTextContainers;	// IMP=0x0000000100093718
- (void)invalidateLayoutMargins;	// IMP=0x00000001000936d8
- (void)invalidateSizeMetrics;	// IMP=0x0000000100093698
- (void)updateActionSheetsAndPopovers;	// IMP=0x0000000100093658
- (void)dismissActionSheetsAndPopovers;	// IMP=0x0000000100093618
@property(readonly, nonatomic) MTEpisodeActionController *actionController;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(retain, nonatomic) MTColorTheme *colorTheme;
@property(retain, nonatomic) MTEpisode *episode;
- (void)updateCurrentRowHeight;	// IMP=0x0000000100093274
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100093178
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100093128
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100093008
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100092ffc
@property(nonatomic) _Bool showsPlayState;
@property(nonatomic) _Bool showsPubDate;
@property(nonatomic) unsigned long long style;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000100092d5c
- (void)dealloc;	// IMP=0x0000000100092ce8
- (void)setupCell;	// IMP=0x0000000100092b2c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100092ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTEpisodeCollectionViewCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
