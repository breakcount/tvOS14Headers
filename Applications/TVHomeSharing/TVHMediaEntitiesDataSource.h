//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHDiffableDataSourceContentProvider-Protocol.h"

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSOrderedSet, NSString, TVHKCollectionChangeSet, TVHMediaEntitiesDataSourceFetchResult, TVHSortOption;
@protocol TVHDiffableDataSourceContentProviderDelegate, TVHMediaEntitiesDataSourceDelegate;

@interface TVHMediaEntitiesDataSource : NSObject <TVHDiffableDataSourceContentProvider>
{
    _Bool _wantsMultipleSections;	// 8 = 0x8
    _Bool _wantsIndexTitles;	// 9 = 0x9
    id <TVHDiffableDataSourceContentProviderDelegate> _diffableDataSourceContentProviderDelegate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    id <TVHMediaEntitiesDataSourceDelegate> _delegate;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    TVHSortOption *_currentSortOption;	// 48 = 0x30
    TVHMediaEntitiesDataSourceFetchResult *_fetchResult;	// 56 = 0x38
    NSArray *_sections;	// 64 = 0x40
    NSDictionary *_sectionByIdentifierDictionary;	// 72 = 0x48
    NSMapTable *_indexByMediaEntityMapTable;	// 80 = 0x50
    NSMapTable *_itemIdentifierByMediaEntityMapTable;	// 88 = 0x58
    NSMutableDictionary *_mediaEntityByItemIdentifierDictionary;	// 96 = 0x60
    NSMutableDictionary *_collisionCountsDictionary;	// 104 = 0x68
    long long _lastProcessedIndex;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001000b57ac
@property(nonatomic) long long lastProcessedIndex; // @synthesize lastProcessedIndex=_lastProcessedIndex;
@property(retain, nonatomic) NSMutableDictionary *collisionCountsDictionary; // @synthesize collisionCountsDictionary=_collisionCountsDictionary;
@property(retain, nonatomic) NSMutableDictionary *mediaEntityByItemIdentifierDictionary; // @synthesize mediaEntityByItemIdentifierDictionary=_mediaEntityByItemIdentifierDictionary;
@property(retain, nonatomic) NSMapTable *itemIdentifierByMediaEntityMapTable; // @synthesize itemIdentifierByMediaEntityMapTable=_itemIdentifierByMediaEntityMapTable;
@property(retain, nonatomic) NSMapTable *indexByMediaEntityMapTable; // @synthesize indexByMediaEntityMapTable=_indexByMediaEntityMapTable;
@property(retain, nonatomic) NSDictionary *sectionByIdentifierDictionary; // @synthesize sectionByIdentifierDictionary=_sectionByIdentifierDictionary;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) TVHMediaEntitiesDataSourceFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) TVHSortOption *currentSortOption; // @synthesize currentSortOption=_currentSortOption;
@property(nonatomic) _Bool wantsIndexTitles; // @synthesize wantsIndexTitles=_wantsIndexTitles;
@property(nonatomic) _Bool wantsMultipleSections; // @synthesize wantsMultipleSections=_wantsMultipleSections;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TVHMediaEntitiesDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <TVHDiffableDataSourceContentProviderDelegate> diffableDataSourceContentProviderDelegate; // @synthesize diffableDataSourceContentProviderDelegate=_diffableDataSourceContentProviderDelegate;
- (id)_itemIdentifiersForIndexes:(id)arg1;	// IMP=0x00000001000b55a8
- (id)_sectionItemCollectionsWithIndexBarItems:(id)arg1;	// IMP=0x00000001000b52d4
- (id)_indexBarItems;	// IMP=0x00000001000b5280
- (_Bool)_canProvideIndexTitles;	// IMP=0x00000001000b5210
- (_Bool)_canHaveMultipleSections;	// IMP=0x00000001000b51a0
- (id)_sectionForIndex:(unsigned long long)arg1;	// IMP=0x00000001000b5124
- (void)_updateSections;	// IMP=0x00000001000b4b20
- (id)_mediaEntitiesInSectionWithIdentifier:(id)arg1;	// IMP=0x00000001000b4a3c
- (id)_mediaEntities;	// IMP=0x00000001000b49e8
- (void)_updateWithLatestFetchResult:(id)arg1 previousFetchResult:(id)arg2;	// IMP=0x00000001000b46b0
- (id)_itemIdentifierForMediaEntity:(id)arg1;	// IMP=0x00000001000b42fc
- (id)_itemIdentifiersForMediaEntities:(id)arg1;	// IMP=0x00000001000b4168
- (void)_notfiyDelegatesCurrentSortDidChange:(id)arg1;	// IMP=0x00000001000b40e0
- (void)_notfiyDelegatesMediaEntitiesDidChangeWithAnimateChanges:(_Bool)arg1 itemIdentifiersOfAmendedItems:(id)arg2;	// IMP=0x00000001000b4004
- (void)_notifyDelegateMediaEntitiesDidChange:(id)arg1 changeSet:(id)arg2 itemIdentifiersOfAmendedItems:(id)arg3;	// IMP=0x00000001000b3f44
- (void)_notifyDelegateCurrentSortDidChange:(id)arg1;	// IMP=0x00000001000b3ec4
@property(readonly, copy) NSString *description;
- (id)indexPathForIndexTitle:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000001000b38d0
@property(readonly, copy, nonatomic) NSArray *indexTitles;
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x00000001000b36b0
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000001000b3644
- (id)sectionTitleAIndex:(unsigned long long)arg1;	// IMP=0x00000001000b35f0
@property(readonly, copy, nonatomic) NSOrderedSet *sectionIdentifiers;
- (void)removeAll;	// IMP=0x00000001000b3418
- (_Bool)updateWithMediaEntitiesDataSourceFetchResult:(id)arg1 itemIdentifiersOfAmendedItems:(id *)arg2;	// IMP=0x00000001000b3114
- (_Bool)updateWithMediaEntitiesDataSourceFetchResult:(id)arg1;	// IMP=0x00000001000b3104
- (id)mediaItemForItemIdentifier:(id)arg1;	// IMP=0x00000001000b3098
- (id)mediaEntityCollectionForItemIdentifier:(id)arg1;	// IMP=0x00000001000b302c
- (id)mediaEntityForItemIdentifier:(id)arg1;	// IMP=0x00000001000b2f74
- (id)mediaItemAtIndexPath:(id)arg1;	// IMP=0x00000001000b2f08
- (id)mediaEntityCollectionAtIndexPath:(id)arg1;	// IMP=0x00000001000b2e9c
- (id)mediaEntityAtIndexPath:(id)arg1;	// IMP=0x00000001000b2df0
@property(readonly, copy, nonatomic) NSArray *indexBarItems;
@property(readonly, nonatomic) TVHKCollectionChangeSet *lastChangeSet;
@property(readonly, copy, nonatomic) NSArray *mediaEntities;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001000b2b38
- (id)init;	// IMP=0x00000001000b2ab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
