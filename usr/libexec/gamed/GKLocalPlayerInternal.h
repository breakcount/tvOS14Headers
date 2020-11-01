//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFriendPlayerInternal.h"

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
    NSString *_accountName;	// 232 = 0xe8
    NSArray *_emailAddresses;	// 240 = 0xf0
    NSString *_facebookUserID;	// 248 = 0xf8
    NSNumber *_iCloudUserID;	// 256 = 0x100
    unsigned short _numberOfRequests;	// 264 = 0x108
    unsigned short _numberOfTurns;	// 266 = 0x10a
    unsigned short _numberOfChallenges;	// 268 = 0x10c
    unsigned long long _loginStatus;	// 272 = 0x110
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001001126e8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100112660
+ (id)propertiesToFetch;	// IMP=0x0000000100124124
+ (id)archivedProfileForEnvironment:(long long)arg1;	// IMP=0x000000010013bcd0
+ (void)archiveProfile:(id)arg1 environment:(long long)arg2;	// IMP=0x000000010013bc00
+ (id)_profileArchiveURLForEnvironment:(long long)arg1;	// IMP=0x000000010013bbac
@property unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
- (void)setNumberOfChallenges:(unsigned short)arg1;	// IMP=0x0000000100112e78
- (unsigned short)numberOfChallenges;	// IMP=0x0000000100112e68
- (void)setNumberOfTurns:(unsigned short)arg1;	// IMP=0x0000000100112e58
- (unsigned short)numberOfTurns;	// IMP=0x0000000100112e48
- (void)setNumberOfRequests:(unsigned short)arg1;	// IMP=0x0000000100112e38
- (unsigned short)numberOfRequests;	// IMP=0x0000000100112e28
- (id)iCloudUserID;	// IMP=0x0000000100112e18
- (void)setFacebookUserID:(id)arg1;	// IMP=0x0000000100112e0c
- (id)facebookUserID;	// IMP=0x0000000100112dfc
- (void)setEmailAddresses:(id)arg1;	// IMP=0x0000000100112df0
- (id)emailAddresses;	// IMP=0x0000000100112de0
- (void)setAccountName:(id)arg1;	// IMP=0x0000000100112dd4
- (id)accountName;	// IMP=0x0000000100112dc4
- (int)defaultFamiliarity;	// IMP=0x0000000100112dbc
- (void)setICloudUserID:(id)arg1;	// IMP=0x0000000100112d54
- (_Bool)isFriend;	// IMP=0x0000000100112d4c
- (_Bool)isLocalPlayer;	// IMP=0x0000000100112d44
- (void)setPhotoPending:(_Bool)arg1;	// IMP=0x0000000100112d1c
- (_Bool)isPhotoPending;	// IMP=0x0000000100112d04
- (void)setFindable:(_Bool)arg1;	// IMP=0x0000000100112cdc
- (_Bool)isFindable;	// IMP=0x0000000100112cc4
- (void)setUnderage:(_Bool)arg1;	// IMP=0x0000000100112c9c
- (_Bool)isUnderage;	// IMP=0x0000000100112c40
- (void)setDefaultPrivacyVisibility:(_Bool)arg1;	// IMP=0x0000000100112c18
- (_Bool)isDefaultPrivacyVisibility;	// IMP=0x0000000100112c00
- (void)setDefaultNickname:(_Bool)arg1;	// IMP=0x0000000100112bd8
- (_Bool)isDefaultNickname;	// IMP=0x0000000100112bc0
- (void)setPurpleBuddyAccount:(_Bool)arg1;	// IMP=0x0000000100112b98
- (_Bool)isPurpleBuddyAccount;	// IMP=0x0000000100112b80
- (id)minimalInternal;	// IMP=0x000000010011299c
- (void)dealloc;	// IMP=0x0000000100112668
- (void)updateWithProperties:(id)arg1;	// IMP=0x000000010012441c
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100123d78

@end
