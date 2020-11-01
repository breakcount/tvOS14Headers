//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, NSURL;

@interface MIBundle : NSObject
{
    unsigned char _bundleType;	// 8 = 0x8
    _Bool _isPlaceholder;	// 9 = 0x9
    _Bool _isPlaceholderStatusValid;	// 10 = 0xa
    NSDictionary *_infoPlistSubset;	// 16 = 0x10
    NSURL *_bundleParentDirectoryURL;	// 24 = 0x18
    NSString *_parentBundleID;	// 32 = 0x20
    NSString *_bundleName;	// 40 = 0x28
    NSString *_bundleParentSubdirectory;	// 48 = 0x30
    MIBundle *_parentBundle;	// 56 = 0x38
    NSArray *_pluginKitBundles;	// 64 = 0x40
    NSArray *_frameworkBundles;	// 72 = 0x48
    NSArray *_xpcServiceBundles;	// 80 = 0x50
}

+ (id)bundleForURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002ad30
+ (_Bool)bundleIsBlacklisted:(id)arg1;	// IMP=0x000000010002a364
+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00000001000288dc
+ (id)_URLOfFirstBundleInDirectory:(id)arg1 withExtension:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100026fec
- (void).cxx_destruct;	// IMP=0x000000010002c73c
@property(nonatomic) _Bool isPlaceholderStatusValid; // @synthesize isPlaceholderStatusValid=_isPlaceholderStatusValid;
@property(retain, nonatomic) NSArray *xpcServiceBundles; // @synthesize xpcServiceBundles=_xpcServiceBundles;
@property(retain, nonatomic) NSArray *frameworkBundles; // @synthesize frameworkBundles=_frameworkBundles;
@property(retain, nonatomic) NSArray *pluginKitBundles; // @synthesize pluginKitBundles=_pluginKitBundles;
@property(readonly, nonatomic) __weak MIBundle *parentBundle; // @synthesize parentBundle=_parentBundle;
@property(readonly, copy, nonatomic) NSString *bundleParentSubdirectory; // @synthesize bundleParentSubdirectory=_bundleParentSubdirectory;
@property(readonly, copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, copy, nonatomic) NSString *parentBundleID; // @synthesize parentBundleID=_parentBundleID;
- (_Bool)sdkBuildVersionIsAtLeast:(id)arg1;	// IMP=0x000000010002c628
@property(readonly, copy, nonatomic) NSString *sdkBuildVersion;
- (_Bool)validateAppMetadataWithError:(id *)arg1;	// IMP=0x000000010002c318
@property(readonly, nonatomic) NSSet *siriIntents;
- (id)description;	// IMP=0x000000010002bfa4
- (_Bool)thinningMatchesCurrentDeviceWithError:(id *)arg1;	// IMP=0x000000010002bb80
@property(readonly, copy, nonatomic) NSArray *supportedDevices;
- (_Bool)isApplicableToCurrentDeviceCapabilitiesWithError:(id *)arg1;	// IMP=0x000000010002b81c
- (_Bool)isApplicableToOSVersionEarlierThan:(id)arg1;	// IMP=0x000000010002b790
- (_Bool)isApplicableToOSVersion:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002b62c
- (_Bool)isApplicableToCurrentOSVersionWithError:(id *)arg1;	// IMP=0x000000010002b548
- (_Bool)isApplicableToCurrentDeviceFamilyWithError:(id *)arg1;	// IMP=0x000000010002b238
- (_Bool)isCompatibleWithDeviceFamily:(int)arg1;	// IMP=0x000000010002b0d8
@property(readonly, nonatomic) _Bool isLaunchProhibited;
@property(readonly, nonatomic) _Bool isWatchApp;
@property(readonly, copy, nonatomic) NSArray *deviceFamilies;
@property(readonly, copy, nonatomic) NSString *minimumOSVersion;
@property(readonly, nonatomic) _Bool needsDataContainer;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(retain, nonatomic) NSURL *bundleParentDirectoryURL; // @synthesize bundleParentDirectoryURL=_bundleParentDirectoryURL;
- (id)xpcServiceBundlesWithError:(id *)arg1;	// IMP=0x000000010002a6b0
- (id)frameworkBundlesWithError:(id *)arg1;	// IMP=0x000000010002a4b8
- (_Bool)validatePluginMetadataWithError:(id *)arg1;	// IMP=0x0000000100029584
- (id)pluginKitBundlesWithError:(id *)arg1;	// IMP=0x0000000100029570
- (id)pluginKitBundlesSkippingPlatformValidation:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x0000000100028e0c
- (_Bool)setIsPlaceholderWithError:(id *)arg1;	// IMP=0x0000000100028828
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, copy, nonatomic) NSString *bundleTypeDescription;
@property(readonly, nonatomic) _Bool isStaticContent;
@property(readonly, nonatomic) unsigned char bundleType; // @synthesize bundleType=_bundleType;
@property(readonly, nonatomic) _Bool isRemovableSystemApp;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSDictionary *infoPlistSubset; // @synthesize infoPlistSubset=_infoPlistSubset;
- (id)_infoPlistKeysToLoad;	// IMP=0x0000000100027388
- (id)initWithBundleInDirectory:(id)arg1 withExtension:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000272bc
- (id)initWithBundleURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100026f38
- (id)initWithParentBundle:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100026de4
- (id)initWithBundleParentURL:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100026cd4
- (_Bool)_validateWithError:(id *)arg1;	// IMP=0x00000001000269b0
- (id)_extraInfoPlistLogging;	// IMP=0x0000000100026208

@end
