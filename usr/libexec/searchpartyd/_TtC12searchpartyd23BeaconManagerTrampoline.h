//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPOwnerSessionXPCProtocol-Protocol.h"

@class MISSING_TYPE;

@interface _TtC12searchpartyd23BeaconManagerTrampoline : NSObject <SPOwnerSessionXPCProtocol>
{
    MISSING_TYPE *implementation;	// 8 = 0x8
    MISSING_TYPE *beaconStore;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100179b38
- (id)init;	// IMP=0x0000000100179adc
- (void)alwaysBeaconStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100179ac0
- (void)setAlwaysBeaconState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001798c8
- (void)currentBeaconingKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100179698
- (void)getLocalPairingDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100179628
- (void)getMacBeaconConfigWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010017961c
- (void)setServiceState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100179538
- (void)beaconingKeysForUUID:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001793ec
- (void)beaconingKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001793d0
- (void)unacceptedBeaconsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010017923c
- (void)allBeaconsOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017919c
- (void)allBeaconsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100178f90
- (void)notificationBeaconForSubscriptionId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100178cd4
- (void)beaconForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100178cb0
- (void)beaconingStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100178c94
- (void)removeLocalAccountDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001789fc
- (void)primaryAccountModified;	// IMP=0x00000001001789b4
- (void)executeCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d9604
- (void)removeBeacon:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d95f8
- (void)forceUpdateKeyAlignmentRecordForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d94fc
- (void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d93dc
- (void)forceDistributeKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d92fc
- (void)rawSearchResultsForIdentifier:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d9160
- (void)latestLocationsForIdentifiers:(id)arg1 fetchLimit:(id)arg2 sources:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d8fa0
- (void)waitForBeaconStoreAvailableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d8d9c
- (void)beaconStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d8ccc

@end

