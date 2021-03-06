//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTLibraryMigrator : NSObject
{
}

+ (_Bool)runImageStoreMigation;	// IMP=0x000000010015f830
+ (_Bool)moveSQLiteFilesFromDocumentsToSharedContainer;	// IMP=0x000000010015f2b0
+ (id)legacyLibraryPath;	// IMP=0x000000010015f194
+ (_Bool)runCoreDataMigration;	// IMP=0x000000010015f0bc
+ (void)fixupDataMigrationVersion;	// IMP=0x000000010015ef90
+ (_Bool)needsMigration;	// IMP=0x000000010015eebc
+ (void)migrateDatabaseToSharedContainerIfNeeded;	// IMP=0x000000010015ee28
+ (_Bool)needToMigrateDataToSharedContainer;	// IMP=0x000000010015ec80
+ (void)touchCoreDataMigrationVersion;	// IMP=0x000000010015ec68
+ (void)touchLibraryMigrationVersion;	// IMP=0x000000010015ec50
+ (void)touchAllMigrationVersions;	// IMP=0x000000010015ec1c
+ (void)recalculateAllPlaylists;	// IMP=0x000000010015e868
+ (long long)episodesToKeepToEpisodeLimit:(int)arg1;	// IMP=0x000000010015e844
+ (int)episodesToKeepDefaultValue;	// IMP=0x000000010015e7e8
+ (void)deleteDuplicateVideoEpisodesForRdar59691904;	// IMP=0x000000010015e39c
+ (_Bool)podcastMigrationForVersion8to9:(id)arg1;	// IMP=0x000000010015e0fc
+ (void)podcastMigrationForVersion6to7:(id)arg1;	// IMP=0x000000010015dfac
+ (void)podcastMigrationForVersion9to10:(id)arg1;	// IMP=0x000000010015df60
+ (void)podcastMigrationForVersion11to12:(id)arg1;	// IMP=0x000000010015df10
+ (void)podcastMigrationForVersion14to15:(id)arg1;	// IMP=0x000000010015de18
+ (void)podcastMigrationForVersion19to20:(id)arg1;	// IMP=0x000000010015dbc8
+ (void)podcastMigrationForVersion20to21:(id)arg1;	// IMP=0x000000010015dbb4
+ (void)podcastMigrationForVersion24to25:(id)arg1;	// IMP=0x000000010015dbb0
+ (void)podcastMigrationForVersion25to26:(id)arg1;	// IMP=0x000000010015da48
+ (void)podcastMigrationForVersion26to27:(id)arg1;	// IMP=0x000000010015da44
+ (void)podcastMigrationForVersion27to28:(id)arg1;	// IMP=0x000000010015d9dc
+ (void)podcastMigrationForVersion28to29:(id)arg1;	// IMP=0x000000010015d918
+ (void)podcastMigrationForVersion32to33:(id)arg1;	// IMP=0x000000010015d904
+ (void)podcastMigrationForVersion35:(id)arg1;	// IMP=0x000000010015d694
+ (void)podcastMigrationForVersion36:(id)arg1;	// IMP=0x000000010015d690
+ (_Bool)runMigrationForPodcast:(id)arg1 version:(long long)arg2;	// IMP=0x000000010015d45c
+ (void)episodeMigrationForVersion24to25:(id)arg1;	// IMP=0x000000010015d340
+ (void)episodeMigrationForVersion23to24:(id)arg1;	// IMP=0x000000010015d228
+ (void)episodeMigrationForVersion21to22:(id)arg1;	// IMP=0x000000010015d190
+ (void)episodeMigrationForVersion17to18:(id)arg1;	// IMP=0x000000010015d124
+ (void)episodeMigrationForVersion16to17:(id)arg1;	// IMP=0x000000010015d0ac
+ (void)episodeMigrationForVersion13to14:(id)arg1;	// IMP=0x000000010015d01c
+ (void)episodeMigrationForVersion6to7:(id)arg1;	// IMP=0x000000010015cd0c
+ (void)episodeMigrationForVersion0to1:(id)arg1;	// IMP=0x000000010015cc80
+ (void)episodeMigrationForVersion29to30:(id)arg1;	// IMP=0x000000010015cb9c
+ (void)runMigrationOnEpisodesByPodcastForVersion:(long long)arg1;	// IMP=0x000000010015c454
+ (void)migrateSettingDefaultsForVersion10to11;	// IMP=0x000000010015c2f4
+ (void)migrateSettingDefaultsForVersion9to10;	// IMP=0x000000010015c244
+ (void)migrateSettingDefaultsForVersion6to7;	// IMP=0x000000010015c134
+ (void)migrateSettingDefaultsForVersion30to31;	// IMP=0x000000010015bfdc
+ (void)migrateSettingsForVersion:(unsigned long long)arg1;	// IMP=0x000000010015bf60
+ (_Bool)isDefaultSettingsForPlaylist:(id)arg1 title:(id)arg2 episodesToShow:(long long)arg3 showPlayedEpisodes:(_Bool)arg4 includeAllPodcasts:(_Bool)arg5;	// IMP=0x000000010015be24
+ (void)deleteOrUpdatePlaylist:(id)arg1 ifIsDefault:(_Bool)arg2;	// IMP=0x000000010015bd90
+ (void)migrateDefaultPlaylistsForVersion18to19;	// IMP=0x000000010015b8f4
+ (void)migratePlaylistDefaultsForVersion7to8;	// IMP=0x000000010015b6a4
+ (void)migratePlaylistsForVersion:(long long)arg1;	// IMP=0x000000010015b64c
+ (_Bool)runDataMigration;	// IMP=0x000000010015b3c8

@end

