//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsFoundation/MTPlaylist.h>

#import "IMMetricsDataSource-Protocol.h"

@class MTEpisode, NSString;

@interface MTPlaylist (DB) <IMMetricsDataSource>
+ (id)predicateForMediaLibraryId:(long long)arg1;	// IMP=0x00000001000c75a0
+ (id)predicateForVisiblePlaylistWithUUID:(id)arg1;	// IMP=0x00000001000c754c
+ (id)predicateForFlag:(int)arg1 isTrue:(_Bool)arg2;	// IMP=0x00000001000c74e4
+ (id)topLevelPlaylistsExcludingFoldersPredicate;	// IMP=0x00000001000c7450
+ (id)containerOrderOptionValues;	// IMP=0x00000001000c7434
+ (id)containerOrderOptionArray:(_Bool)arg1;	// IMP=0x00000001000c72bc
+ (id)stringForContainerOrder:(int)arg1 short:(_Bool)arg2;	// IMP=0x00000001000c7134
+ (long long)getITunesPlaylistsCount;	// IMP=0x00000001000c6f18
+ (void)prepareForPlatform:(id)arg1;	// IMP=0x00000001000c53ec
+ (id)insertNewPlaylistInManagedObjectContext:(id)arg1 uuid:(id)arg2 defaultSettings:(id)arg3;	// IMP=0x00000001000c5218
+ (id)insertNewPlaylistInManagedObjectContext:(id)arg1;	// IMP=0x00000001000c5158
+ (id)topLevelPlaylistsPredicate;	// IMP=0x000000010014dfd0
+ (id)sortDescriptors;	// IMP=0x0000000100169804
- (_Bool)needsUpdate;	// IMP=0x0000000100030650
- (void)setNeedsUpdate:(_Bool)arg1;	// IMP=0x00000001000305ec
- (id)metricsAdditionalData;	// IMP=0x00000001000c7684
- (id)metricsContentIdentifier;	// IMP=0x00000001000c7630
- (long long)getFolderSubPlaylistsCount;	// IMP=0x00000001000c6cdc
@property(readonly, nonatomic) MTEpisode *nextEpisode;
@property(readonly, nonatomic) double totalDuration;
- (void)removeEpisode:(id)arg1 inBulkTransaction:(_Bool)arg2;	// IMP=0x00000001000c6988
- (void)removeEpisode:(id)arg1;	// IMP=0x00000001000c6978
- (void)removeEpisodes:(id)arg1;	// IMP=0x00000001000c67b8
- (void)removePodcastEpisodes:(id)arg1 shouldSave:(_Bool)arg2;	// IMP=0x00000001000c6400
- (void)removePodcast:(id)arg1;	// IMP=0x00000001000c6130
- (void)recalculateEpisodeCounts;	// IMP=0x00000001000c5fe0
@property(nonatomic) _Bool hasBeenSynced;
- (_Bool)updateUnplayedCount;	// IMP=0x00000001000c5d88
@property(readonly, nonatomic) _Bool isEditable;
- (void)forceUpdate;	// IMP=0x00000001000c5d20
@property(nonatomic) _Bool isUngroupedList;
@property(nonatomic) _Bool isItunesSmartPlaylist;
@property(nonatomic) _Bool includesAllPodcasts;
@property(nonatomic) _Bool isBuiltIn;
@property(nonatomic) _Bool isItunesPlaylist;
@property(nonatomic) _Bool isFolder;
- (id)podcasts;	// IMP=0x00000001000c59a8
- (void)setEpisodes:(id)arg1;	// IMP=0x00000001000c58e8
- (void)setPodcasts:(id)arg1;	// IMP=0x00000001000c53f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
