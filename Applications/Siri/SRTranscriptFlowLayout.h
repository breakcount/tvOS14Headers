//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface SRTranscriptFlowLayout : SiriUICollectionViewFlowLayout
{
    NSMutableArray *_insertedIndexPaths;	// 8 = 0x8
    NSMutableArray *_reloadedIndexPaths;	// 16 = 0x10
    NSMutableArray *_handledIndexPaths;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100009ea8
@property(readonly, nonatomic, getter=_handledIndexPaths) NSMutableArray *handledIndexPaths; // @synthesize handledIndexPaths=_handledIndexPaths;
@property(readonly, nonatomic, getter=_reloadedIndexPaths) NSMutableArray *reloadedIndexPaths; // @synthesize reloadedIndexPaths=_reloadedIndexPaths;
@property(readonly, nonatomic, getter=_insertedIndexPaths) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000100009b98
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x0000000100009a40
- (void)finalizeCollectionViewUpdates;	// IMP=0x0000000100009970
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000010000976c
- (id)init;	// IMP=0x0000000100009660

@end

