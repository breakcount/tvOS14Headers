//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSMPFullLegacyIdentity, NRAnalyticsKeyManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NRDIDSKeyManager : NSObject
{
    _Bool _isQueryingIDS;	// 8 = 0x8
    _Bool _shouldQueryAgain;	// 9 = 0x9
    _Bool _isRegisteredForDataProtectionClassUpdates;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    IDSMPFullLegacyIdentity *_localIDSClassDIdentity;	// 24 = 0x18
    IDSMPFullLegacyIdentity *_localIDSClassCIdentity;	// 32 = 0x20
    IDSMPFullLegacyIdentity *_localIDSClassAIdentity;	// 40 = 0x28
    NSMutableDictionary *_deviceRecords;	// 48 = 0x30
    NRAnalyticsKeyManager *_keyManagerAnalytics;	// 56 = 0x38
}

+ (id)copySharedIDSKeyManager;	// IMP=0x000000010008f910
- (void).cxx_destruct;	// IMP=0x000000010008e6e0
@property(retain, nonatomic) NRAnalyticsKeyManager *keyManagerAnalytics; // @synthesize keyManagerAnalytics=_keyManagerAnalytics;
@property(retain, nonatomic) NSMutableDictionary *deviceRecords; // @synthesize deviceRecords=_deviceRecords;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *localIDSClassAIdentity; // @synthesize localIDSClassAIdentity=_localIDSClassAIdentity;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *localIDSClassCIdentity; // @synthesize localIDSClassCIdentity=_localIDSClassCIdentity;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *localIDSClassDIdentity; // @synthesize localIDSClassDIdentity=_localIDSClassDIdentity;
@property(nonatomic) _Bool isRegisteredForDataProtectionClassUpdates; // @synthesize isRegisteredForDataProtectionClassUpdates=_isRegisteredForDataProtectionClassUpdates;
@property(nonatomic) _Bool shouldQueryAgain; // @synthesize shouldQueryAgain=_shouldQueryAgain;
@property(nonatomic) _Bool isQueryingIDS; // @synthesize isQueryingIDS=_isQueryingIDS;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reportEvent:(int)arg1;	// IMP=0x000000010008e628
- (void)reportEvent:(int)arg1 detailsFormat:(id)arg2;	// IMP=0x000000010008e594
- (void)reportEvent:(int)arg1 details:(id)arg2;	// IMP=0x000000010008e580
- (void)decryptRemoteClassAKeysEncryptedWithIDS:(id)arg1 bluetoothUUID:(id)arg2 decryptCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010008e3d4
- (void)decryptRemoteClassCKeysEncryptedWithIDS:(id)arg1 bluetoothUUID:(id)arg2 decryptCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010008e228
- (void)decryptRemoteClassDKeysEncryptedWithIDS:(id)arg1 bluetoothUUID:(id)arg2 decryptCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010008e07c
- (void)queryIDSKeysForBluetoothUUID:(id)arg1 minDataProtectionClass:(unsigned char)arg2 localPublicClassDKeys:(id)arg3 localPublicClassCKeys:(id)arg4 localPublicClassAKeys:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010008de68
- (id)copyRemotePublicSigningKeyFromIDSIdentity:(id)arg1;	// IMP=0x000000010008dca4
- (id)copyLocalPrivateSigningKeyFromIDSIdentity:(id)arg1;	// IMP=0x000000010008dae0
- (void)internalQueryIDSKeysForBluetoothUUID:(id)arg1 minDataProtectionClass:(unsigned char)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010008d660
- (void)checkOutstandingQueriesForceQueryIDS:(_Bool)arg1;	// IMP=0x000000010008cd50
- (void)checkOutstandingQueries;	// IMP=0x000000010008cd40
- (void)unregisterForDataProtectionClassUpdates;	// IMP=0x000000010008ccc0
- (void)registerForDataProtectionClassUpdates;	// IMP=0x000000010008cc08
- (void)queryIDSForKeysForce:(_Bool)arg1;	// IMP=0x000000010008ca5c
- (void)ingestIDSPairedDevicesRecords:(id)arg1;	// IMP=0x000000010008c3fc
- (void)ingestIDSLocalDeviceRecord:(id)arg1;	// IMP=0x000000010008c07c
- (id)initInternal;	// IMP=0x000000010008be6c

@end

