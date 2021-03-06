//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol TVPCollectionViewDelegate;

@interface TVPCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_playButtonRecognizer;	// 8 = 0x8
    UILongPressGestureRecognizer *_longPressRecognizer;	// 16 = 0x10
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
        unsigned int _respondsToCanBecomeFocused:1;
    } _delegateFlags;	// 24 = 0x18
    NSIndexPath *_indexPathForLastFocusedItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010007af30
@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;	// IMP=0x000000010007adf0
- (void)_longPressAction:(id)arg1;	// IMP=0x000000010007acfc
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000010007ac30
@property(nonatomic) __weak id <TVPCollectionViewDelegate> delegate; // @dynamic delegate;
- (void)_notifyDidScroll;	// IMP=0x000000010007aac8
- (void)reloadData;	// IMP=0x000000010007aa74
- (_Bool)canBecomeFocused;	// IMP=0x000000010007a9e4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007a7ac
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010007a5b8
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000010007a5b0
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000010007a440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

