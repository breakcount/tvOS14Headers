//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface NEHelperHotspotConfigurationTask : NSObject
{
    _Bool _joinOnce;	// 8 = 0x8
    NSString *_taskIdentifier;	// 16 = 0x10
    NSObject<OS_xpc_object> *_requestMessage;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
}

+ (id)copyBundleIDList;	// IMP=0x0000000100001f24
+ (void)removeBundleIDFromPreferences:(id)arg1;	// IMP=0x0000000100001d80
+ (void)addBundleIDToPreferences:(id)arg1;	// IMP=0x0000000100001bcc
+ (id)copyPendingConfigurationTaskWithID:(id)arg1;	// IMP=0x0000000100001b54
+ (void)addPendingConfigurationTaskWithID:(id)arg1 requestMessage:(id)arg2 bundleID:(id)arg3 joinOnce:(_Bool)arg4;	// IMP=0x0000000100001a94
- (void).cxx_destruct;	// IMP=0x000000010000203c
@property(readonly) _Bool joinOnce; // @synthesize joinOnce=_joinOnce;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSObject<OS_xpc_object> *requestMessage; // @synthesize requestMessage=_requestMessage;
@property(readonly) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (id)initTaskWithID:(id)arg1 requestMessage:(id)arg2 bundleID:(id)arg3 joinOnce:(_Bool)arg4;	// IMP=0x00000001000019bc

@end

