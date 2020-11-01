//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSDate, NSMutableArray, NSMutableDictionary, NSString, SDAppleIDDatabaseManager, SDAppleIDIdentityRequest, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAppleIDAgent : NSObject <APSConnectionDelegate>
{
    _Bool _agentEnabled;	// 8 = 0x8
    NSMutableDictionary *_agentMetaInfo;	// 16 = 0x10
    NSString *_appleID;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    SDAppleIDDatabaseManager *_dbManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSMutableArray *_findPersonRequests;	// 56 = 0x38
    SDAppleIDIdentityRequest *_identityRequest;	// 64 = 0x40
    SDAppleIDServerTask *_infoRequest;	// 72 = 0x48
    _Bool _linkIdentityEnabled;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_periodicVerifyTimer;	// 88 = 0x58
    APSConnection *_pushConnection;	// 96 = 0x60
    NSString *_pushEnvironment;	// 104 = 0x68
    SDAppleIDServerTask *_task;	// 112 = 0x70
    SDAppleIDIdentityRequest *_testIdentityRequest;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_throttledRetryTimer;	// 128 = 0x80
    _Bool _updatePush;	// 136 = 0x88
    _Bool _updatePeriodicVerifyTimer;	// 137 = 0x89
}

+ (id)sharedAgent;	// IMP=0x00000001001519d0
- (void).cxx_destruct;	// IMP=0x000000010015219c
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000100152028
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100151f2c
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100151df4
- (void)handleUILockStatusChangedNotification;	// IMP=0x0000000100151d9c
- (void)handleKeyBagFirstUnlockNotification;	// IMP=0x0000000100151d44
- (void)handleAppleIDSignedOutNotification;	// IMP=0x0000000100151cec
- (void)handleAppleIDSignedInNotification;	// IMP=0x0000000100151c94
- (void)handleAppleIDChangedNotification;	// IMP=0x0000000100151c3c
- (id)validationRecordInfoForAppleID:(id)arg1;	// IMP=0x0000000100151afc
- (id)statusInfo;	// IMP=0x0000000100151a90
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100151880
- (void)prefsChanged;	// IMP=0x0000000100151828
- (void)personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100151770
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010015171c
- (id)myAccount;	// IMP=0x0000000100151698
- (void)invalidate;	// IMP=0x0000000100151640
- (id)detailedDescription;	// IMP=0x00000001001515d4
- (void)queryVerifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100151280
- (struct __SecIdentity *)copyIdentityForAppleID:(id)arg1;	// IMP=0x0000000100151198
- (id)verifiedIdentityForCertificateChain:(id)arg1 emailOrPhone:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100150c78
- (id)verifiedIdentityForEmailOrPhone:(id)arg1;	// IMP=0x00000001001509c0
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010015096c
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100150790
- (void)activate;	// IMP=0x0000000100150738
- (id)accountStatusForAppleID:(id)arg1;	// IMP=0x0000000100150684
- (id)accountForAppleID:(id)arg1;	// IMP=0x000000010015058c
- (_Bool)_wasOldAgentIdentityQueried;	// IMP=0x0000000100150558
- (_Bool)_wasIdentityLinkedOnce;	// IMP=0x0000000100150524
- (void)_verifyStateWithDelay:(double)arg1;	// IMP=0x0000000100150448
- (void)_verifyState;	// IMP=0x000000010014f304
- (void)_updateMyInfo;	// IMP=0x000000010014f260
- (void)_updateAppleID;	// IMP=0x000000010014f148
- (void)_update;	// IMP=0x000000010014f0d4
- (id)_statusInfo;	// IMP=0x000000010014ef9c
- (void)_setMetaInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010014ef38
- (void)_setCurrentAppleIDContactInfo:(id)arg1 validationRecord:(id)arg2;	// IMP=0x000000010014eee4
- (void)_setCurrentAppleIDIdentity:(id)arg1;	// IMP=0x000000010014eecc
- (void)_requestIdentityForAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000010014e88c
- (void)_requestInfoForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014e290
- (void)_removeObservers;	// IMP=0x000000010014e240
- (void)_prefsChanged;	// IMP=0x000000010014defc
- (void)_personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014d7f8
- (void)_performServerTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014ca24
- (void)_performOtherTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014c0d0
- (int)_performKeychainCount;	// IMP=0x000000010014bdb8
- (int)_performKeyVerificationForIdentity:(id)arg1;	// IMP=0x000000010014ba40
- (id)_metaInfoValueForKey:(id)arg1;	// IMP=0x000000010014ba30
- (unsigned long long)_keychainCleanupTag;	// IMP=0x000000010014ba08
- (void)_handleThrottledRetryTimerFired;	// IMP=0x000000010014b980
- (void)_handlePeriodicVerifyTimerFired;	// IMP=0x000000010014b8a4
- (void)_handleReceivedIdentity:(id)arg1 forAppleID:(id)arg2 identityRequest:(id)arg3 withError:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010014b528
- (void)_handleReceivedCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x000000010014b490
- (void)_handleUntrustedAppleIDCertificateChainForIdentity:(id)arg1;	// IMP=0x000000010014b2f4
- (void)_handleUILockStatusChange;	// IMP=0x000000010014b190
- (void)_handleUILockStatusChangedNotification;	// IMP=0x000000010014b118
- (void)_handleServerTaskCompletionWithError:(id)arg1;	// IMP=0x000000010014af40
- (void)_handleKeyVerificationFailure;	// IMP=0x000000010014ae98
- (void)_handleKeyBagFirstUnlockNotification;	// IMP=0x000000010014ae20
- (void)_handleInfoResponse:(id)arg1 forAppleID:(id)arg2 infoRequest:(id)arg3 certificateSerialNumber:(id)arg4 withError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010014a084
- (void)_handleFindPersonResponse:(id)arg1 forRequest:(id)arg2 emailOrPhone:(id)arg3 withError:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100149b6c
- (void)_handleCertificateStatusUpdate:(long long)arg1 forAppleID:(id)arg2;	// IMP=0x00000001001497d4
- (void)_handleAppleIDSignedOutNotification;	// IMP=0x00000001001496bc
- (void)_handleAppleIDSignedInNotification;	// IMP=0x00000001001495d0
- (void)_handleAppleIDChangedNotification;	// IMP=0x0000000100149554
- (void)_handleAccountIdentifierValidationRecordMismatch;	// IMP=0x0000000100149498
- (void)_ensureThrottledRetryTimerStopped;	// IMP=0x0000000100149410
- (void)_ensureThrottledRetryTimerStartedWithSuggestedDelay:(unsigned long long)arg1;	// IMP=0x0000000100149100
- (void)_ensurePeriodicVerifyTimerStopped;	// IMP=0x0000000100149078
- (void)_ensurePeriodicVerifyTimerStarted;	// IMP=0x0000000100148eb4
- (void)_ensurePushStopped;	// IMP=0x0000000100148e10
- (int)_ensureEduModeDevicesAreCleanedUp;	// IMP=0x0000000100148b88
- (void)_checkIfAppleIDCertificateChainIsValidForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100148930
- (id)_detailedDescription;	// IMP=0x0000000100147614
- (void)_ensurePushStarted;	// IMP=0x00000001001473d0
- (struct __SecIdentity *)_copyIdentityForAppleID:(id)arg1;	// IMP=0x0000000100147380
- (void)_clearAccount;	// IMP=0x00000001001472f4
- (void)_cleanUpAccount:(id)arg1;	// IMP=0x0000000100147108
- (void)_invalidate;	// IMP=0x0000000100146e94
- (void)_addObservers;	// IMP=0x0000000100146d80
- (void)_activate;	// IMP=0x0000000100146cc8
- (long long)_accountState;	// IMP=0x000000010014668c
- (id)_accountForAppleID:(id)arg1;	// IMP=0x000000010014667c
- (_Bool)eduModeEnabled;	// IMP=0x0000000100146674
- (void)dealloc;	// IMP=0x000000010014662c
- (id)init;	// IMP=0x000000010014655c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
