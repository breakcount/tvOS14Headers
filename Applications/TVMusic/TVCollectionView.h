//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol TVCollectionViewDelegate;

@interface TVCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_playButtonRecognizer;	// 8 = 0x8
    UILongPressGestureRecognizer *_longPressRecognizer;	// 16 = 0x10
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
        unsigned int _respondsToCanBecomeFocused:1;
    } _delegateFlags;	// 24 = 0x18
    UIView *_overlayLayoutView;	// 32 = 0x20
    NSIndexPath *_indexPathForLastFocusedItem;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010006f158
@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
@property(readonly, nonatomic) UIView *overlayLayoutView; // @synthesize overlayLayoutView=_overlayLayoutView;
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;	// IMP=0x000000010006f008
- (void)_longPressAction:(id)arg1;	// IMP=0x000000010006ef14
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000010006ee48
@property(nonatomic) __weak id <TVCollectionViewDelegate> delegate; // @dynamic delegate;
- (void)_notifyDidScroll;	// IMP=0x000000010006ece0
- (void)reloadData;	// IMP=0x000000010006ec8c
- (_Bool)canBecomeFocused;	// IMP=0x000000010006ebfc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010006e9c4
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010006e7d0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000010006e7c8
- (void)_updateOverlayLayoutGuide;	// IMP=0x000000010006e6cc
- (void)adjustedContentInsetDidChange;	// IMP=0x000000010006e67c
- (void)layoutSubviews;	// IMP=0x000000010006e62c
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000010006e470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

