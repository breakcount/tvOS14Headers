//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPSubDaemonable-Protocol.h"

@class CUCoalescer, CUSystemMonitor, NSArray, NSMutableArray, NSString, RPIdentity;
@protocol OS_dispatch_queue;

@interface RPIdentityDaemon : NSObject <RPSubDaemonable>
{
    int _homeViewChangeToken;	// 8 = 0x8
    CUCoalescer *_identitiesChangedCoalescer;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    unsigned long long _keychainRefetchTicks;	// 32 = 0x20
    NSArray *_pairedDeviceIdentities;	// 40 = 0x28
    int _pairedDevicesNotifier;	// 48 = 0x30
    _Bool _prefFamilyResolve;	// 52 = 0x34
    _Bool _prefFriendResolve;	// 53 = 0x35
    _Bool _prefOwnerResolve;	// 54 = 0x36
    _Bool _prefPairedResolve;	// 55 = 0x37
    _Bool _prefSharedHomeResolve;	// 56 = 0x38
    NSArray *_sameAccountDeviceIdentities;	// 64 = 0x40
    RPIdentity *_selfIdentityCache;	// 72 = 0x48
    NSMutableArray *_sharedHomeDeviceIdentities;	// 80 = 0x50
    NSMutableArray *_sharedHomeExtraDeviceIdentities;	// 88 = 0x58
    CUSystemMonitor *_systemMonitor;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 104 = 0x68
    RPIdentity *_homeKitIdentity;	// 112 = 0x70
}

+ (id)sharedIdentityDaemon;	// IMP=0x000000010003020c
- (void).cxx_destruct;	// IMP=0x0000000100037f08
@property(retain, nonatomic) RPIdentity *homeKitIdentity; // @synthesize homeKitIdentity=_homeKitIdentity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (unsigned int)_updateSelfIdentityPublic:(id)arg1 privateIdentity:(id)arg2;	// IMP=0x0000000100037858
- (unsigned int)_updateSelfIdentityPrivate:(id)arg1 create:(_Bool)arg2;	// IMP=0x0000000100037420
- (void)_saveSelfIdentityPublicWithPrivateIdentity:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000100036dec
- (void)_saveSelfIdentityPrivate:(id)arg1;	// IMP=0x0000000100036b6c
- (void)_loadSelfIdentity:(_Bool)arg1;	// IMP=0x0000000100036704
- (void)_updateSameAccountIdentities;	// IMP=0x0000000100035fe8
- (void)_updatePairedDeviceIdentities;	// IMP=0x0000000100035a8c
- (void)_triggerKeychainRefetch;	// IMP=0x0000000100035850
- (void)_postIdentitiesChangedNotification;	// IMP=0x0000000100035730
- (void)_ensureStopped;	// IMP=0x0000000100035634
- (void)_ensureStarted;	// IMP=0x00000001000352f0
- (_Bool)saveIdentityWithIDSDeviceID:(id)arg1 message:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100034fc0
- (_Bool)saveIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100034c8c
- (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100034934
- (void)addSharedHomeIdentityWithRPMessage:(id)arg1;	// IMP=0x0000000100034464
- (void)addSelfIdentityInfoToMessage:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x0000000100034168
- (id)identityOfSelfAndReturnError:(id *)arg1;	// IMP=0x0000000100034028
- (id)_identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x00000001000335e0
- (id)identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x0000000100033540
- (unsigned int)resolveIdentityTypesForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3;	// IMP=0x000000010003317c
- (id)resolveIdentityForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0000000100032c70
- (id)resolveIdentityForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x00000001000322a0
- (id)resolveIdentitiesForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x00000001000321d8
- (void)resolvableAccessoriesUpdated:(id)arg1;	// IMP=0x0000000100031a44
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0000000100031a04
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000319fc
- (void)_update;	// IMP=0x00000001000319f0
- (void)regenerateSelfIdentity:(id)arg1;	// IMP=0x000000010003194c
- (void)prefsChanged;	// IMP=0x00000001000315b0
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0000000100031334
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x00000001000311b8
- (void)_invalidated;	// IMP=0x0000000100031128
- (void)_invalidate;	// IMP=0x0000000100031068
- (void)invalidate;	// IMP=0x0000000100031000
- (void)_activate;	// IMP=0x0000000100030ea8
- (void)activate;	// IMP=0x0000000100030e40
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x00000001000302ec
- (id)init;	// IMP=0x0000000100030278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

