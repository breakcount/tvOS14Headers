//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHDiffableDataSourceContentProvider-Protocol.h"
#import "TVHMediaEntitiesDataSourceDelegate-Protocol.h"

@class NSArray, NSOrderedSet, NSString, TVHSearchResultsDataSourceItem;
@protocol TVHDiffableDataSourceContentProviderDelegate;

@interface TVHSearchResultsDataSource : NSObject <TVHMediaEntitiesDataSourceDelegate, TVHDiffableDataSourceContentProvider>
{
    id <TVHDiffableDataSourceContentProviderDelegate> _diffableDataSourceContentProviderDelegate;	// 8 = 0x8
    CDUnknownBlockType _shelfViewControllerBlock;	// 16 = 0x10
    TVHSearchResultsDataSourceItem *_audiobooksItem;	// 24 = 0x18
    TVHSearchResultsDataSourceItem *_audiobookChaptersItem;	// 32 = 0x20
    TVHSearchResultsDataSourceItem *_homeVideosItem;	// 40 = 0x28
    TVHSearchResultsDataSourceItem *_iTunesUEpisodesItem;	// 48 = 0x30
    TVHSearchResultsDataSourceItem *_iTunesUCoursesItem;	// 56 = 0x38
    TVHSearchResultsDataSourceItem *_movieRentalsItem;	// 64 = 0x40
    TVHSearchResultsDataSourceItem *_moviesItem;	// 72 = 0x48
    TVHSearchResultsDataSourceItem *_musicAlbumsItem;	// 80 = 0x50
    TVHSearchResultsDataSourceItem *_musicAlbumArtistsItem;	// 88 = 0x58
    TVHSearchResultsDataSourceItem *_musicSongsItem;	// 96 = 0x60
    TVHSearchResultsDataSourceItem *_musicVideosItem;	// 104 = 0x68
    TVHSearchResultsDataSourceItem *_podcastEpisodesItem;	// 112 = 0x70
    TVHSearchResultsDataSourceItem *_podcastsItem;	// 120 = 0x78
    TVHSearchResultsDataSourceItem *_showEpisodesItem;	// 128 = 0x80
    TVHSearchResultsDataSourceItem *_showsItem;	// 136 = 0x88
    NSArray *_items;	// 144 = 0x90
}

+ (void)_addDisplayableItem:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000100090080
+ (id)new;	// IMP=0x000000010008dd30
- (void).cxx_destruct;	// IMP=0x0000000100090258
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *showsItem; // @synthesize showsItem=_showsItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *showEpisodesItem; // @synthesize showEpisodesItem=_showEpisodesItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *podcastsItem; // @synthesize podcastsItem=_podcastsItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *podcastEpisodesItem; // @synthesize podcastEpisodesItem=_podcastEpisodesItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *musicVideosItem; // @synthesize musicVideosItem=_musicVideosItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *musicSongsItem; // @synthesize musicSongsItem=_musicSongsItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *musicAlbumArtistsItem; // @synthesize musicAlbumArtistsItem=_musicAlbumArtistsItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *musicAlbumsItem; // @synthesize musicAlbumsItem=_musicAlbumsItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *moviesItem; // @synthesize moviesItem=_moviesItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *movieRentalsItem; // @synthesize movieRentalsItem=_movieRentalsItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *iTunesUCoursesItem; // @synthesize iTunesUCoursesItem=_iTunesUCoursesItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *iTunesUEpisodesItem; // @synthesize iTunesUEpisodesItem=_iTunesUEpisodesItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *homeVideosItem; // @synthesize homeVideosItem=_homeVideosItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *audiobookChaptersItem; // @synthesize audiobookChaptersItem=_audiobookChaptersItem;
@property(retain, nonatomic) TVHSearchResultsDataSourceItem *audiobooksItem; // @synthesize audiobooksItem=_audiobooksItem;
@property(readonly, copy, nonatomic) CDUnknownBlockType shelfViewControllerBlock; // @synthesize shelfViewControllerBlock=_shelfViewControllerBlock;
@property(nonatomic) __weak id <TVHDiffableDataSourceContentProviderDelegate> diffableDataSourceContentProviderDelegate; // @synthesize diffableDataSourceContentProviderDelegate=_diffableDataSourceContentProviderDelegate;
- (void)_updateDataSource:(id)arg1 withMediaEntities:(id)arg2 andChangeSet:(id)arg3;	// IMP=0x000000010008ff94
- (id)_itemForIndexPath:(id)arg1;	// IMP=0x000000010008fec8
- (void)_notfiyDiffableDataSourceContentProviderDelegateMediaEntitiesDidChangeWithAnimateChanges:(_Bool)arg1 itemIdentifiersOfAmendedItems:(id)arg2;	// IMP=0x000000010008fe50
- (id)_displayableItems;	// IMP=0x000000010008fce4
- (id)indexPathForIndexTitle:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000010008fcdc
@property(readonly, copy, nonatomic) NSArray *indexTitles;
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x000000010008fc6c
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x000000010008fb00
- (id)sectionTitleAIndex:(unsigned long long)arg1;	// IMP=0x000000010008faf8
@property(readonly, copy, nonatomic) NSOrderedSet *sectionIdentifiers;
- (void)mediaEntitiesDataSource:(id)arg1 mediaEntitiesDidChange:(id)arg2 changeSet:(id)arg3 itemIdentifiersOfAmendedItems:(id)arg4;	// IMP=0x000000010008fac8
- (id)mediaEntitiesShelfViewControllerAtIndexPath:(id)arg1;	// IMP=0x000000010008f9a0
- (id)mediaEntitiesShelfViewControllerForItemIdentifier:(id)arg1;	// IMP=0x000000010008f7ec
- (void)updateWithSearchControllerResult:(id)arg1;	// IMP=0x000000010008eda4
- (id)initWithShelfViewControllerBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010008ddf4
- (id)init;	// IMP=0x000000010008dd6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

