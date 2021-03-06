//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CKRecord, GKCloudPlayer, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface GKCloudGameSession : NSObject <NSSecureCoding>
{
    CKRecord *_record;	// 8 = 0x8
    NSDictionary *_playersByIdentifier;	// 16 = 0x10
    GKCloudPlayer *_owner;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
}

+ (void)badgeCountForContainerName:(id)arg1 useCacheDirectly:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100103a24
+ (void)updateBadgeCountsForContainerName:(id)arg1 useCacheDirectly:(_Bool)arg2;	// IMP=0x00000001001036c8
+ (void)updateBadgeCountsForContainerName:(id)arg1;	// IMP=0x00000001001036b8
+ (void)deleteInviteRecordWithRecordID:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x00000001001034ac
+ (void)searchAndSaveIdentityForRecord:(id)arg1 database:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001034a8
+ (void)saveInviteRecord:(id)arg1 database:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100102bd0
+ (void)getAssociatedAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100102bcc
+ (id)msgServiceQueue;	// IMP=0x0000000100102b5c
+ (void)generateAndStoreInviteBulletinForRecord:(id)arg1 database:(id)arg2;	// IMP=0x00000001001022f8
+ (id)packFakeTurnBasedBulletinWithZoneData:(id)arg1;	// IMP=0x0000000100101e20
+ (id)packFakeRealTimeBulletinWithZoneData:(id)arg1;	// IMP=0x0000000100101340
+ (void)reportPlayerStateChangesToClients:(id)arg1 forUpdatedSession:(id)arg2 oldSession:(id)arg3;	// IMP=0x00000001001000ec
+ (void)openStoreForBundleID:(id)arg1;	// IMP=0x00000001000feb24
+ (void)launchOrOpenAppStoreForBundleID:(id)arg1;	// IMP=0x00000001000feacc
+ (void)acceptShareMetadata:(id)arg1 retryCount:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fe554
+ (void)showAcceptAlertWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fe394
+ (void)handleLegacyShareMetadata:(id)arg1 needsAccept:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fdaac
+ (void)handleSessionShareMetadata:(id)arg1 needsAccept:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fd248
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fcb0c
+ (void)acceptShareURL:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc8a8
+ (void)saveInformationForPrimaryUserForSessionWithShareMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fbf80
+ (void)fetchShareMetadataForURL:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fbacc
+ (void)fetchShareRecordsWithRecordIDs:(id)arg1 inDatabase:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fb9a8
+ (id)cloudKitOperationConfigurationForSocialGamingSessionsContainer;	// IMP=0x00000001000fa7bc
+ (id)cloudKitOperationConfigurationForContainer:(id)arg1;	// IMP=0x00000001000fa72c
+ (void)subscribeToAllDBwithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fa204
+ (void)getZoneNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f9c14
+ (void)createZoneWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f9a04
+ (void)bundleIDsForContainerName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f87e8
+ (void)removeSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f7f84
+ (void)createSessionWithContainerName:(id)arg1 title:(id)arg2 maxConnectedPlayers:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f7344
+ (_Bool)isCloudDriveEnabledForBundleID:(id)arg1;	// IMP=0x00000001000f70a8
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x00000001000f7058
+ (id)databaseForSession:(id)arg1;	// IMP=0x00000001000f7004
+ (id)sharedDatabase;	// IMP=0x00000001000f6fa0
+ (id)privateDatabase;	// IMP=0x00000001000f6f3c
+ (_Bool)isOwnZoneID:(id)arg1;	// IMP=0x00000001000f6e0c
+ (_Bool)isOwnRecordID:(id)arg1;	// IMP=0x00000001000f6db0
+ (id)recordIDForSessionIdentifier:(id)arg1;	// IMP=0x00000001000f6b6c
+ (id)sessionIdentifierForRecordID:(id)arg1;	// IMP=0x00000001000f696c
+ (id)allowedCharacterSet;	// IMP=0x00000001000f6898
+ (void)getFriendPlayersWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f6274
+ (void)updateFriendRecordIfNeeded;	// IMP=0x00000001000f5bc8
+ (void)updateFriendsWithRecord:(id)arg1;	// IMP=0x00000001000f57f8
+ (void)updateCacheForFriendZoneID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f51f8
+ (void)updatePlayersForSessions:(id)arg1 sharesByRecordID:(id)arg2 inDatabase:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f4218
+ (void)primaryPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f414c
+ (id)playerIdentifierForUserRecordName:(id)arg1;	// IMP=0x00000001000f4088
+ (id)localPlayerAlias;	// IMP=0x00000001000f3de8
+ (void)determinePlayerChangesIn:(id)arg1 newSession:(id)arg2 notifyClients:(id)arg3;	// IMP=0x00000001000f37b0
+ (void)reportChangesForSessions:(id)arg1 shareChangedSessions:(id)arg2 removedSessions:(id)arg3 zoneID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000f2afc
+ (id)allChangedSessionsFromRecordChangedSessions:(id)arg1 shareChangedSessions:(id)arg2;	// IMP=0x00000001000f2760
+ (void)updateCacheForDatabase:(id)arg1 zoneIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f0efc
+ (void)updateCacheForDatabaseScope:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000efb8c
+ (void)updateCacheForZoneID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ef7a4
+ (void)updateSessionCacheDatabasesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ef3ec
+ (void)updateSessionCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000eef70
+ (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000eef04
+ (void)fetchUserRecordIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000eee8c
+ (id)friendEmailsByID;	// IMP=0x00000001000eee38
+ (void)sessionForShareMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000eed84
+ (void)sessionsForContainerName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ee9b8
+ (void)sessionForIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ee5f8
+ (id)cacheQueue;	// IMP=0x00000001000ee588
+ (id)sessionCache;	// IMP=0x00000001000ee51c
+ (id)AES128Operation:(unsigned int)arg1 key:(id)arg2 data:(id)arg3;	// IMP=0x00000001000ee3b4
+ (id)AES128DecryptedVersionOfData:(id)arg1 withKey:(id)arg2;	// IMP=0x00000001000ee34c
+ (id)AES128EncryptedVersionOfData:(id)arg1 withKey:(id)arg2;	// IMP=0x00000001000ee2e4
+ (id)playerIdentifierForObfuscatedIdentifier:(id)arg1 containerName:(id)arg2;	// IMP=0x00000001000ee1e8
+ (id)obfuscatedIdentifierForPlayerIdentifier:(id)arg1 containerName:(id)arg2;	// IMP=0x00000001000ee0f0
+ (id)mutablePlistFromPlayerStatesData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ed3ac
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000ec7bc
- (void).cxx_destruct;	// IMP=0x0000000100104ad4
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) GKCloudPlayer *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSDictionary *playersByIdentifier; // @synthesize playersByIdentifier=_playersByIdentifier;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void)setBadged:(_Bool)arg1 forPlayerIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100104204
- (void)saveConnectionState:(long long)arg1 forPlayerWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100100a90
- (void)tempEmailFixForPlayerID:(id)arg1;	// IMP=0x00000001001008fc
@property(readonly, nonatomic) NSArray *connectedPlayerIDs;
- (void)removePlayers:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ff5ec
- (void)deleteShareWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ff228
- (void)fetchShareRecordWithRecordID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb790
- (void)saveShare:(id)arg1 isNewShare:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fb364
- (void)setupShareWithRecordID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb098
- (void)getShareURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fa8a8
- (void)saveWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f96e4
- (void)saveData:(id)arg1 changeTag:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f8e10
@property(readonly, nonatomic) NSString *containerName;
- (id)playersForGKGameSession;	// IMP=0x00000001000f4ebc
- (id)players;	// IMP=0x00000001000f4e68
- (void)setPlayers:(id)arg1;	// IMP=0x00000001000f4cb4
- (void)updatePlayersWithIdentities:(id)arg1;	// IMP=0x00000001000f4a18
- (id)createGKGameSession;	// IMP=0x00000001000eda78
@property(retain, nonatomic) NSMutableDictionary *nicknamesByIdentifier; // @dynamic nicknamesByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *emailsByCKID;
@property(readonly, nonatomic) NSDictionary *playersByEmail;
- (id)playerStates;	// IMP=0x00000001000ed400
- (void)setPlayerStates:(id)arg1;	// IMP=0x00000001000ed338
@property(readonly, nonatomic) NSString *serverChangeTag;
@property(readonly, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(retain, nonatomic) NSData *data;
@property(nonatomic) long long maxConnectedPlayers;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)isOwnedByUser;	// IMP=0x00000001000eccc8
- (id)description;	// IMP=0x00000001000ecb80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000eca8c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000ec7c4
- (id)initWithRecord:(id)arg1;	// IMP=0x00000001000ec748
- (id)initWithContainerName:(id)arg1;	// IMP=0x00000001000ec68c

@end

