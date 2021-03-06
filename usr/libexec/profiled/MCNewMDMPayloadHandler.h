//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSMutableDictionary, NSString;

@interface MCNewMDMPayloadHandler : MCNewPayloadHandler
{
    NSMutableDictionary *_setAsideDictionary;	// 32 = 0x20
    NSString *_setAsideEscrowSecret;	// 40 = 0x28
    _Bool _setAside;	// 48 = 0x30
}

+ (id)_exchangeSyncUUIDString;	// IMP=0x000000010003aed8
- (void).cxx_destruct;	// IMP=0x000000010003da30
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010003d9e8
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010003d968
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x000000010003d35c
- (void)unsetAside;	// IMP=0x000000010003d1d8
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x000000010003cfd4
- (void)setAside;	// IMP=0x000000010003cd2c
- (void)_releaseDependency;	// IMP=0x000000010003ca58
- (void)_retainDependency;	// IMP=0x000000010003c7c4
- (id)persistentRefsForUUIDs:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010003c5f4
- (id)persistentRefForUUID:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010003c488
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010003b1bc
- (id)_cannotCheckInErrorWithName:(id)arg1;	// IMP=0x000000010003b124

@end

