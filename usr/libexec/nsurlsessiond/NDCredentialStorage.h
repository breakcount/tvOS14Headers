//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLCredentialStorage.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol NDCredentialStorageDelegate, OS_dispatch_queue;

@interface NDCredentialStorage : NSURLCredentialStorage
{
    NSMutableDictionary *_cachedCredentials;	// 16 = 0x10
    NSMutableDictionary *_cachedDefaultCredentialUsers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <NDCredentialStorageDelegate> _delegate;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010003edac
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property __weak id <NDCredentialStorageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reset;	// IMP=0x000000010003ecfc
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x000000010003eba0
- (id)defaultCredentialForProtectionSpace:(id)arg1;	// IMP=0x000000010003e9a4
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x000000010003e848
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x000000010003e6ec
- (id)allCredentials;	// IMP=0x000000010003e54c
- (id)credentialsForProtectionSpace:(id)arg1;	// IMP=0x000000010003e350
- (void)populateWithInitialCredentials;	// IMP=0x000000010003e27c
- (id)initWithDelegate:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010003e0cc

@end
