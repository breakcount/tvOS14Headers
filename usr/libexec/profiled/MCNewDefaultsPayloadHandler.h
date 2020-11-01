//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSMutableSet;

@interface MCNewDefaultsPayloadHandler : MCNewPayloadHandler
{
    NSMutableSet *_changedDomains;	// 32 = 0x20
}

+ (void)removeDefaults:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000100052a18
+ (void)removeDefaults:(id)arg1 forManagedDomain:(id)arg2;	// IMP=0x0000000100052868
+ (_Bool)addDefaults:(id)arg1 toManagedDomain:(id)arg2;	// IMP=0x0000000100052780
+ (_Bool)setDefaults:(id)arg1 forManagedDomain:(id)arg2;	// IMP=0x0000000100052624
+ (id)defaultsForManagedDomain:(id)arg1;	// IMP=0x0000000100052548
+ (id)_managedSettingsFolder;	// IMP=0x0000000100052544
- (void).cxx_destruct;	// IMP=0x000000010005341c
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x0000000100053410
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x0000000100053404
- (void)_sendCFPreferenceNotification;	// IMP=0x0000000100053394
- (void)migrateDefaults;	// IMP=0x00000001000531bc
- (void)unsetAside;	// IMP=0x00000001000531b0
- (void)setAside;	// IMP=0x00000001000531a4
- (void)remove;	// IMP=0x0000000100053130
- (void)_remove;	// IMP=0x0000000100052ea0
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100052db8
- (_Bool)_install;	// IMP=0x0000000100052aa4
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x00000001000524ac

@end
