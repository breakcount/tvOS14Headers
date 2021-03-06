//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUISnippetCollectionViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SAGuidanceGuideDomainSnippet;

@interface SRGuideDomainViewController : SiriUISnippetCollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
}

- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010004c3b4
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010004c3ac
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000010004c3a4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010004c19c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010004c128
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010004c11c
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010004c060
- (void)setSnippet:(id)arg1;	// IMP=0x000000010004bfdc
- (id)_phraseForIndexPath:(id)arg1;	// IMP=0x000000010004bf0c
- (_Bool)_showsCategoriesForSection:(unsigned long long)arg1;	// IMP=0x000000010004bebc
- (id)_titleForSection:(unsigned long long)arg1;	// IMP=0x000000010004be14
- (_Bool)usePlatterStyle;	// IMP=0x000000010004be0c
- (_Bool)wantsToManageBackgroundColor;	// IMP=0x000000010004be04
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x000000010004bb60
- (id)_utterancesForSection:(unsigned long long)arg1;	// IMP=0x000000010004bab8
- (long long)_numberOfSections;	// IMP=0x000000010004ba44
- (struct UIEdgeInsets)_headerViewEdgeInsets;	// IMP=0x000000010004ba28
- (long long)_cellTypeForIndexPath:(id)arg1;	// IMP=0x000000010004b91c
- (double)desiredHeightForHeaderView;	// IMP=0x000000010004b810
- (void)configureReusableHeaderView:(id)arg1;	// IMP=0x000000010004b760
- (Class)headerViewClass;	// IMP=0x000000010004b754
- (void)loadView;	// IMP=0x000000010004b5ac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010004b518

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SAGuidanceGuideDomainSnippet *snippet; // @dynamic snippet;
@property(readonly) Class superclass;

@end

