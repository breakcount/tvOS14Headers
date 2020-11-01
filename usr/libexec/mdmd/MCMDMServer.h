//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"
#import "MCJobQueueObserver-Protocol.h"
#import "MCMDMServerProtocol-Protocol.h"
#import "MCMDMXPCProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class APSConnection, MCJobQueue, MCTimerContext, NSArray, NSData, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MCMDMServer : NSObject <MCJobQueueObserver, APSConnectionDelegate, NSXPCListenerDelegate, MCMDMXPCProtocol, MCMDMServerProtocol>
{
    _Bool _memberQueueIsMDMConfigurationValid;	// 8 = 0x8
    _Bool _memberQueuePinningRevocationCheckRequired;	// 9 = 0x9
    _Bool _memberQueueUseDevelopmentAPNS;	// 10 = 0xa
    _Bool _memberQueueSignMessage;	// 11 = 0xb
    _Bool _memberQueuePollRequested;	// 12 = 0xc
    _Bool _memberQueueUserSwitchAlreadyInitiated;	// 13 = 0xd
    _Bool _memberQueueUseEnrollmentID;	// 14 = 0xe
    _Bool _executionQueueIsCheckinInProgress;	// 15 = 0xf
    int _memberQueueAccessRights;	// 16 = 0x10
    int _memberQueuePowerAssertionAssertedNotificationToken;	// 20 = 0x14
    int _memberQueuePowerAssertionDeassertedNotificationToken;	// 24 = 0x18
    int _eventQueueBusyCount;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_memberQueue;	// 32 = 0x20
    APSConnection *_memberQueueDevAPSConnection;	// 40 = 0x28
    APSConnection *_memberQueueProdAPSConnection;	// 48 = 0x30
    NSString *_memberQueueManagingProfileIdentifier;	// 56 = 0x38
    struct __SecIdentity *_memberQueueIdentity;	// 64 = 0x40
    NSArray *_memberQueueServerPinnedSecCertificateRefs;	// 72 = 0x48
    NSArray *_memberQueueCheckInPinnedSecCertificateRefs;	// 80 = 0x50
    NSString *_memberQueueTopic;	// 88 = 0x58
    NSURL *_memberQueueServerURL;	// 96 = 0x60
    NSURL *_memberQueueCheckInURL;	// 104 = 0x68
    NSDictionary *_memberQueueOrganizationInfo;	// 112 = 0x70
    NSDictionary *_memberQueueMDMOptions;	// 120 = 0x78
    NSString *_memberQueuePushMagic;	// 128 = 0x80
    NSData *_memberQueuePushToken;	// 136 = 0x88
    MCTimerContext *_memberQueueTimerContext;	// 144 = 0x90
    NSString *_memberQueueCommandUUID;	// 152 = 0x98
    NSString *_memberQueueEnrollmentID;	// 160 = 0xa0
    MCJobQueue *_jobQueue;	// 168 = 0xa8
    CDUnknownBlockType _executionQueuePushTokenWaitContinuationBlock;	// 176 = 0xb0
}

+ (id)sharedServer;	// IMP=0x0000000100006a98
- (void).cxx_destruct;	// IMP=0x0000000100013e60
@property(nonatomic) int eventQueueBusyCount; // @synthesize eventQueueBusyCount=_eventQueueBusyCount;
@property(nonatomic) _Bool executionQueueIsCheckinInProgress; // @synthesize executionQueueIsCheckinInProgress=_executionQueueIsCheckinInProgress;
@property(copy, nonatomic) CDUnknownBlockType executionQueuePushTokenWaitContinuationBlock; // @synthesize executionQueuePushTokenWaitContinuationBlock=_executionQueuePushTokenWaitContinuationBlock;
@property(retain, nonatomic) MCJobQueue *jobQueue; // @synthesize jobQueue=_jobQueue;
@property(retain, nonatomic) NSString *memberQueueEnrollmentID; // @synthesize memberQueueEnrollmentID=_memberQueueEnrollmentID;
@property(nonatomic) _Bool memberQueueUseEnrollmentID; // @synthesize memberQueueUseEnrollmentID=_memberQueueUseEnrollmentID;
@property(nonatomic) _Bool memberQueueUserSwitchAlreadyInitiated; // @synthesize memberQueueUserSwitchAlreadyInitiated=_memberQueueUserSwitchAlreadyInitiated;
@property(retain, nonatomic) NSString *memberQueueCommandUUID; // @synthesize memberQueueCommandUUID=_memberQueueCommandUUID;
@property(nonatomic) int memberQueuePowerAssertionDeassertedNotificationToken; // @synthesize memberQueuePowerAssertionDeassertedNotificationToken=_memberQueuePowerAssertionDeassertedNotificationToken;
@property(nonatomic) int memberQueuePowerAssertionAssertedNotificationToken; // @synthesize memberQueuePowerAssertionAssertedNotificationToken=_memberQueuePowerAssertionAssertedNotificationToken;
@property(retain, nonatomic) MCTimerContext *memberQueueTimerContext; // @synthesize memberQueueTimerContext=_memberQueueTimerContext;
@property(nonatomic) _Bool memberQueuePollRequested; // @synthesize memberQueuePollRequested=_memberQueuePollRequested;
@property(retain, nonatomic) NSData *memberQueuePushToken; // @synthesize memberQueuePushToken=_memberQueuePushToken;
@property(nonatomic) _Bool memberQueueSignMessage; // @synthesize memberQueueSignMessage=_memberQueueSignMessage;
@property(retain, nonatomic) NSString *memberQueuePushMagic; // @synthesize memberQueuePushMagic=_memberQueuePushMagic;
@property(nonatomic) _Bool memberQueueUseDevelopmentAPNS; // @synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS;
@property(nonatomic) int memberQueueAccessRights; // @synthesize memberQueueAccessRights=_memberQueueAccessRights;
@property(retain, nonatomic) NSDictionary *memberQueueMDMOptions; // @synthesize memberQueueMDMOptions=_memberQueueMDMOptions;
@property(retain, nonatomic) NSDictionary *memberQueueOrganizationInfo; // @synthesize memberQueueOrganizationInfo=_memberQueueOrganizationInfo;
@property(retain, nonatomic) NSURL *memberQueueCheckInURL; // @synthesize memberQueueCheckInURL=_memberQueueCheckInURL;
@property(retain, nonatomic) NSURL *memberQueueServerURL; // @synthesize memberQueueServerURL=_memberQueueServerURL;
@property(retain, nonatomic) NSString *memberQueueTopic; // @synthesize memberQueueTopic=_memberQueueTopic;
@property(nonatomic) _Bool memberQueuePinningRevocationCheckRequired; // @synthesize memberQueuePinningRevocationCheckRequired=_memberQueuePinningRevocationCheckRequired;
@property(retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs; // @synthesize memberQueueCheckInPinnedSecCertificateRefs=_memberQueueCheckInPinnedSecCertificateRefs;
@property(retain, nonatomic) NSArray *memberQueueServerPinnedSecCertificateRefs; // @synthesize memberQueueServerPinnedSecCertificateRefs=_memberQueueServerPinnedSecCertificateRefs;
@property(nonatomic) struct __SecIdentity *memberQueueIdentity; // @synthesize memberQueueIdentity=_memberQueueIdentity;
@property(retain, nonatomic) NSString *memberQueueManagingProfileIdentifier; // @synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier;
@property(nonatomic) _Bool memberQueueIsMDMConfigurationValid; // @synthesize memberQueueIsMDMConfigurationValid=_memberQueueIsMDMConfigurationValid;
@property(retain, nonatomic) APSConnection *memberQueueProdAPSConnection; // @synthesize memberQueueProdAPSConnection=_memberQueueProdAPSConnection;
@property(retain, nonatomic) APSConnection *memberQueueDevAPSConnection; // @synthesize memberQueueDevAPSConnection=_memberQueueDevAPSConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void)writeDictToMDMConfigurationFile:(id)arg1;	// IMP=0x0000000100013b9c
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013b1c
- (void)willSwitchUser;	// IMP=0x0000000100013944
- (void)processDeviceRequest:(id)arg1 encodeResponse:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013588
@property(readonly, copy, nonatomic) NSString *serverName;
@property(readonly, copy, nonatomic) NSString *organizationName;
- (void)uprootMDMWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012cc4
- (void)migrateMDMWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012c18
- (void)retryNotNowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012890
- (void)simulatePushWithAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012570
- (void)simulatePushIfNetworkTetheredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012398
- (void)simulatePushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000122f4
- (void)performOutstandingActivities;	// IMP=0x0000000100012014
- (void)scheduleTokenUpdateIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011dd8
- (void)scheduleTokenUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011b30
- (void)notifyNewConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011984
- (void)buddyDidFinish;	// IMP=0x0000000100011790
- (void)_keybagStateDidChange;	// IMP=0x0000000100011500
- (_Bool)deviceIsLocked;	// IMP=0x00000001000114d4
- (void)_networkReachabilityDidChange;	// IMP=0x000000010001129c
@property(nonatomic) _Bool userSwitchAlreadyInitiated;
- (void)setMemberQueueTokenUpdateRequestCount:(int)arg1;	// IMP=0x0000000100010f40
- (void)memberQueueDecrementTokenUpdateRequestCount;	// IMP=0x0000000100010ef8
- (void)memberQueueIncrementTokenUpdateRequestCount;	// IMP=0x0000000100010eac
- (int)memberQueueTokenUpdateCount;	// IMP=0x0000000100010e00
- (void)setTokenUpdateRequestCountToZero;	// IMP=0x0000000100010d70
- (int)tokenUpdateCount;	// IMP=0x0000000100010c64
@property(retain, nonatomic) NSDictionary *memberQueueCachedResponse;
- (void)setCachedResponse:(id)arg1;	// IMP=0x0000000100010a28
- (id)cachedResponse;	// IMP=0x0000000100010860
- (_Bool)memberQueueHasOutstandingActivity;	// IMP=0x00000001000107e4
- (_Bool)hasOutstandingActivity;	// IMP=0x00000001000106e0
- (void)executionQueueHandleRequest:(id)arg1 withMDMParserOfClass:(Class)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ff6c
- (id)responseFromBasicResponse:(id)arg1;	// IMP=0x000000010000fa5c
- (void)executionQueuePollServerForCommandWithAssertion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ec64
- (void)schedulePollingServerForCommandWithAssertion:(id)arg1;	// IMP=0x000000010000ea8c
- (id)sendResponseSynchronously:(id)arg1 outStatusCode:(long long *)arg2 outError:(id *)arg3;	// IMP=0x000000010000e760
- (void)sendResponse:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e174
- (id)_responseDataFromResponseDictionary:(id)arg1;	// IMP=0x000000010000e154
- (id)_idleResponse;	// IMP=0x000000010000e00c
- (void)executionQueueTellServerAboutDeviceTokenWithAssertion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cbf4
- (id)unauthorizedByServerError;	// IMP=0x000000010000cb5c
- (void)executionQueueRemoveMDMProfileWithAssertion:(id)arg1;	// IMP=0x000000010000c808
- (void)pushTokenCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c0bc
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010000b578
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000010000acec
- (void)executionQueueCheckForOutstandingActivityIsReachabilityEvent:(_Bool)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a9d4
- (void)_executionQueueCheckForOutstandingActivityIsReachabilityEvent:(_Bool)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a760
- (_Bool)startOutError:(id *)arg1;	// IMP=0x000000010000a288
- (_Bool)readConfigurationOutError:(id *)arg1;	// IMP=0x00000001000082e8
- (void)memberQueueForgetCurrentConfiguration;	// IMP=0x00000001000080e4
@property(readonly, nonatomic, getter=isTokenUpdateScheduled) _Bool tokenUpdateScheduled;
@property(nonatomic) _Bool memberQueueLastResponseWasNotNow;
- (void)setLastResponseWasNotNow:(_Bool)arg1;	// IMP=0x0000000100007eb4
@property(readonly, nonatomic) _Bool lastResponseWasNotNow;
- (void)setMemberQueuePushMagicMismatchDateMarker:(id)arg1;	// IMP=0x0000000100007c54
- (id)memberQueuePushMagicMismatchDateMarker;	// IMP=0x0000000100007bc8
- (void)setMemberQueueLastPushTokenHash:(id)arg1;	// IMP=0x0000000100007a98
- (id)memberQueueLastPushTokenHash;	// IMP=0x0000000100007a0c
@property(copy, nonatomic) NSDictionary *MDMOptions;
@property(copy, nonatomic) NSDictionary *organizationInfo;
- (void)setServerURL:(id)arg1;	// IMP=0x0000000100006df4
- (id)serverURL;	// IMP=0x0000000100006c40
- (void)dealloc;	// IMP=0x0000000100006bdc
- (id)init;	// IMP=0x0000000100006b04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
