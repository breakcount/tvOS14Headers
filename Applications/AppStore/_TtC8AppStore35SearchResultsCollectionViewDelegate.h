//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8AppStore35SearchResultsCollectionViewDelegate : NSObject
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *objectGraph;	// 16 = 0x10
    MISSING_TYPE *appStateController;	// 24 = 0x18
    MISSING_TYPE *storeDataProvider;	// 32 = 0x20
    MISSING_TYPE *artworkLoader;	// 48 = 0x30
    MISSING_TYPE *artworkIconFetcher;	// 56 = 0x38
    MISSING_TYPE *infiniteScrollCoordinator;	// 64 = 0x40
    MISSING_TYPE *impressionsCalculator;	// 72 = 0x48
    MISSING_TYPE *pageTraits;	// 80 = 0x50
    MISSING_TYPE *scrollViewDelegateCoordinator;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010005a6f0
- (id)init;	// IMP=0x000000010005a7a8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010005a5b8
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010005a514
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010005a4c8
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010005a3b4
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x000000010005a2a0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010005a0fc
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100059ffc
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100059ff0

@end
