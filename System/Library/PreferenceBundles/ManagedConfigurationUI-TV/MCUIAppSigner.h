//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCUIAppSigner : NSObject
{
    _Bool _appsRequireTrust;	// 8 = 0x8
    _Bool _appsRequireVerification;	// 9 = 0x9
    _Bool _hasFreeDeveloperProvisioningProfile;	// 10 = 0xa
    _Bool _hasUniversalProvisioningProfile;	// 11 = 0xb
    _Bool _appsRequireVerificationSoon;	// 12 = 0xc
    NSString *_displayName;	// 16 = 0x10
    NSString *_identity;	// 24 = 0x18
    NSArray *_applications;	// 32 = 0x20
    NSArray *_profiles;	// 40 = 0x28
    long long _numberOfAppsRequiringVerification;	// 48 = 0x30
    long long _numberOfAppsRequiringVerificationSoon;	// 56 = 0x38
}

+ (id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id *)arg1;	// IMP=0x000000000000f84c
+ (void)_addProfile:(id)arg1 toSignerIdentity:(id)arg2 inDictionary:(id)arg3;	// IMP=0x000000000000f704
+ (id)enterpriseAppSignersWithOutDeveloperAppSigners:(id *)arg1;	// IMP=0x000000000000ea14
- (void).cxx_destruct;	// IMP=0x000000000001007c
@property(nonatomic) long long numberOfAppsRequiringVerificationSoon; // @synthesize numberOfAppsRequiringVerificationSoon=_numberOfAppsRequiringVerificationSoon;
@property(nonatomic) _Bool appsRequireVerificationSoon; // @synthesize appsRequireVerificationSoon=_appsRequireVerificationSoon;
@property(nonatomic) _Bool hasUniversalProvisioningProfile; // @synthesize hasUniversalProvisioningProfile=_hasUniversalProvisioningProfile;
@property(nonatomic) _Bool hasFreeDeveloperProvisioningProfile; // @synthesize hasFreeDeveloperProvisioningProfile=_hasFreeDeveloperProvisioningProfile;
@property(nonatomic) long long numberOfAppsRequiringVerification; // @synthesize numberOfAppsRequiringVerification=_numberOfAppsRequiringVerification;
@property(nonatomic) _Bool appsRequireVerification; // @synthesize appsRequireVerification=_appsRequireVerification;
@property(nonatomic) _Bool appsRequireTrust; // @synthesize appsRequireTrust=_appsRequireTrust;
@property(retain, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(retain, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (_Bool)isTrusted;	// IMP=0x000000000000e678
- (void)removeApplications:(id)arg1;	// IMP=0x000000000000e520
- (void)removeApplication:(id)arg1;	// IMP=0x000000000000e3c8
- (void)addApplication:(id)arg1;	// IMP=0x000000000000e270
- (_Bool)_isTrustRequiredForBundleIDs:(id)arg1 outNotVerifiedAppCount:(long long *)arg2 outExpiringSoonAppCount:(long long *)arg3;	// IMP=0x000000000000df24
- (void)refreshApplications;	// IMP=0x000000000000de00
- (id)_displayNameFromIdentity:(id)arg1 hasFreeDev:(_Bool)arg2 hasUPP:(_Bool)arg3;	// IMP=0x000000000000dab4
- (id)initWithIdentity:(id)arg1 applications:(id)arg2 profiles:(id)arg3 hasUPP:(_Bool)arg4 hasFreeDeveloper:(_Bool)arg5;	// IMP=0x000000000000d834
- (void)mcuitv_trustActionGroupVerifyAppsAndTrustSigner:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021da4
- (void)mcuitv_removeAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000211d8
- (_Bool)mcuitv_isEnterpriseAppTrustAllowed;	// IMP=0x0000000000021154
- (_Bool)mcuitv_isAppRemovalAllowed;	// IMP=0x00000000000210d0
- (id)mcuitv_sharedGroup;	// IMP=0x0000000000021010

@end

