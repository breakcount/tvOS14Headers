//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class BTStateWatcher, IDSAccount, IDSService, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CBIDSManager : NSObject <IDSServiceDelegate>
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _processingIDSPush;	// 9 = 0x9
    long long _totalCloudDeviceCount;	// 16 = 0x10
    NSMutableDictionary *_CPAddressMapping;	// 24 = 0x18
    BTStateWatcher *_buddyStateWatcher;	// 32 = 0x20
    BTStateWatcher *_firstUnlockStateWatcher;	// 40 = 0x28
    IDSAccount *_account;	// 48 = 0x30
    IDSService *_service;	// 56 = 0x38
    NSString *_cloudIdentifier;	// 64 = 0x40
    NSString *_publicAddress;	// 72 = 0x48
    NSString *_localDeviceName;	// 80 = 0x50
    NSArray *_requestedKeyTypes;	// 88 = 0x58
    NSMutableArray *_cloudDevices;	// 96 = 0x60
    NSArray *_associatedDevices;	// 104 = 0x68
    NSMutableSet *_unpairedIDSCloudIdentifiers;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_cloudPairingQueue;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x0000000100006b94
- (void).cxx_destruct;	// IMP=0x00000001000144c0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cloudPairingQueue; // @synthesize cloudPairingQueue=_cloudPairingQueue;
@property _Bool processingIDSPush; // @synthesize processingIDSPush=_processingIDSPush;
@property(retain) NSMutableSet *unpairedIDSCloudIdentifiers; // @synthesize unpairedIDSCloudIdentifiers=_unpairedIDSCloudIdentifiers;
@property(retain) NSArray *associatedDevices; // @synthesize associatedDevices=_associatedDevices;
@property(retain) NSMutableArray *cloudDevices; // @synthesize cloudDevices=_cloudDevices;
@property(retain, nonatomic) NSArray *requestedKeyTypes; // @synthesize requestedKeyTypes=_requestedKeyTypes;
@property(retain, nonatomic) NSString *localDeviceName; // @synthesize localDeviceName=_localDeviceName;
@property(retain) NSString *publicAddress; // @synthesize publicAddress=_publicAddress;
@property(retain, nonatomic) NSString *cloudIdentifier; // @synthesize cloudIdentifier=_cloudIdentifier;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) IDSAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) BTStateWatcher *firstUnlockStateWatcher; // @synthesize firstUnlockStateWatcher=_firstUnlockStateWatcher;
@property(retain, nonatomic) BTStateWatcher *buddyStateWatcher; // @synthesize buddyStateWatcher=_buddyStateWatcher;
@property(retain) NSMutableDictionary *CPAddressMapping; // @synthesize CPAddressMapping=_CPAddressMapping;
@property long long totalCloudDeviceCount; // @synthesize totalCloudDeviceCount=_totalCloudDeviceCount;
@property _Bool isReady; // @synthesize isReady=_isReady;
- (void)fetchCloudPairingIdentifierForPeripheral:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000141c4
- (id)_fetchCloudPairingIdentifierForPeripheral:(id)arg1;	// IMP=0x0000000100013e38
- (id)publicAddressForIDSDevice:(id)arg1;	// IMP=0x0000000100013d64
- (void)storePublicAddressMapping:(id)arg1 message:(id)arg2;	// IMP=0x00000001000139b8
- (void)allDevicesJazzKon;	// IMP=0x00000001000132bc
- (_Bool)checkManateeZoneUpgrade;	// IMP=0x0000000100012d44
- (void)printDebug;	// IMP=0x0000000100012618
- (_Bool)validateKeys:(id)arg1 requestedTypes:(id)arg2 from:(id)arg3;	// IMP=0x0000000100011dac
- (_Bool)validateMessage:(id)arg1 from:(id)arg2;	// IMP=0x0000000100011854
- (unsigned long long)timeStamp;	// IMP=0x0000000100011850
- (void)sendCloudKitPush;	// IMP=0x00000001000113ac
- (void)handleUnpairCommand:(id)arg1 from:(id)arg2;	// IMP=0x0000000100010c5c
- (void)sendErrorMessageToDevice:(id)arg1 reason:(id)arg2;	// IMP=0x0000000100010a9c
- (void)sendCloudPairingMessage:(id)arg1 toDevice:(id)arg2 version:(id)arg3;	// IMP=0x00000001000105d8
- (void)sendCloudPairingMessage:(id)arg1 toDevice:(id)arg2;	// IMP=0x000000010001020c
- (void)sendRePairRequest:(id)arg1;	// IMP=0x000000010000fdf8
- (void)sendIDSMessage:(id)arg1 forDevice:(id)arg2 withRole:(unsigned long long)arg3;	// IMP=0x000000010000fabc
- (void)initiatePairing:(id)arg1;	// IMP=0x000000010000edac
- (void)handlePairingFailure:(id)arg1 from:(id)arg2;	// IMP=0x000000010000ed20
- (void)handleKeyDistribution:(id)arg1 from:(id)arg2;	// IMP=0x000000010000e848
- (void)handlePairingResponse:(id)arg1 from:(id)arg2;	// IMP=0x000000010000e1e8
- (void)handlePairingRequest:(id)arg1 from:(id)arg2;	// IMP=0x000000010000dc30
- (void)handleRepairRequest:(id)arg1 from:(id)arg2;	// IMP=0x000000010000db1c
- (void)handleSecurityRequest:(id)arg1 from:(id)arg2;	// IMP=0x000000010000d8d4
- (void)handleResponderPairingKeys:(id)arg1 from:(id)arg2 forProtocolID:(id)arg3;	// IMP=0x000000010000d6f4
- (unsigned long long)roleWithDevice:(id)arg1;	// IMP=0x000000010000d540
- (void)cloudPairingCompletedWithResponse:(id)arg1 localKeys:(id)arg2 from:(id)arg3 forProtocolID:(id)arg4;	// IMP=0x000000010000cdd8
- (void)generateKeyDictForTypes:(id)arg1 keyLength:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c958
- (void)handleInitiatorPairingKeys:(id)arg1 from:(id)arg2 forProtocolID:(id)arg3;	// IMP=0x000000010000bc6c
- (void)handleCloudPairingMessage:(id)arg1 from:(id)arg2;	// IMP=0x000000010000b518
- (id)deviceForIDSDevice:(id)arg1 createNew:(_Bool)arg2;	// IMP=0x000000010000b1e0
- (id)filteredDevicesForIDSDevices:(id)arg1;	// IMP=0x000000010000a9e4
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;	// IMP=0x000000010000a678
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000a558
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010000a078
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0000000100009f64
- (unsigned long long)keyLength;	// IMP=0x0000000100009f5c
- (void)updateActiveAccount:(id)arg1;	// IMP=0x00000001000099f8
- (void)updateCloudPairings:(id)arg1 newDevices:(id)arg2;	// IMP=0x0000000100008f84
- (void)xpcUpdateCloudPairings:(id)arg1;	// IMP=0x0000000100008c94
- (void)fetchPublicAddressWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008844
- (void)validateCloudPairing:(id)arg1;	// IMP=0x0000000100008060
- (void)retryIDSSetup;	// IMP=0x0000000100007f30
- (void)initializeIDS;	// IMP=0x000000010000731c
- (void)checkFirstUnlockForIDS;	// IMP=0x0000000100006f34
- (id)init;	// IMP=0x0000000100006c00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
