//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore25ShelfDisplayingFlowLayout.h"

@class MISSING_TYPE;

@interface _TtC8AppStore29CollectionViewTableFlowLayout : _TtC8AppStore25ShelfDisplayingFlowLayout
{
    MISSING_TYPE *globalHeaderAvoidsOverscroll;	// 24 = 0x18
    MISSING_TYPE *isSupplementaryViewAnimationEnabled;	// 25 = 0x19
    MISSING_TYPE *globalHeaderSize;	// 32 = 0x20
    MISSING_TYPE *globalHeaderFrame;	// 48 = 0x30
    MISSING_TYPE *pendingPrepareObserver;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100185894
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x0000000100185804
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000100185690
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000001001853ec
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100185124
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100185118
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000010018507c
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100184a08
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100184864
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000001001844d8
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x00000001001841d4
@property(nonatomic) _Bool sectionFootersPinToVisibleBounds;
@property(nonatomic) _Bool sectionHeadersPinToVisibleBounds;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100183b0c
- (id)init;	// IMP=0x0000000100183aec

@end

