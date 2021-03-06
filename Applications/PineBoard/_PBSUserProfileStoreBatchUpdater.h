//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSUserProfileStoreBatchUpdater-Protocol.h"

@class NSDictionary, NSString, PBUserProfileStore;

@interface _PBSUserProfileStoreBatchUpdater : NSObject <PBSUserProfileStoreBatchUpdater>
{
    PBUserProfileStore *_userProfileStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100094990
@property(nonatomic) __weak PBUserProfileStore *userProfileStore; // @synthesize userProfileStore=_userProfileStore;
- (id)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100094854
- (id)updateUserProfileWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000010009477c
- (id)createUserProfileWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000946d8
- (_Bool)addUserProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100094638
- (void)updateUserProfileWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100094574
- (void)removeUserProfileWithIdentifier:(id)arg1;	// IMP=0x00000001000944b8
- (void)addUserProfile:(id)arg1;	// IMP=0x0000000100094430
@property(readonly, nonatomic) NSString *selectedUserProfileIdentifier;
@property(readonly, nonatomic) NSString *primaryUserProfileIdentifier;
@property(readonly, nonatomic) NSDictionary *userProfiles;

@end

