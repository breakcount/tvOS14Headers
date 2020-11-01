//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKActivity, GKClientProxy, GKPlayerCredential, GKStoreBag;

@interface GKDataTransport : NSObject
{
    GKStoreBag *_storeBag;	// 8 = 0x8
    GKClientProxy *_clientProxy;	// 16 = 0x10
    GKPlayerCredential *_credential;	// 24 = 0x18
    GKActivity *_activity;	// 32 = 0x20
}

+ (id)transportWithBag:(id)arg1 clientProxy:(id)arg2 credential:(id)arg3;	// IMP=0x000000010003c964
@property(retain, nonatomic) GKActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
@property(retain, nonatomic) GKStoreBag *storeBag; // @synthesize storeBag=_storeBag;
- (id)language;	// IMP=0x000000010003d2a4
- (void)postRequest:(id)arg1 forBagKey:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d080
- (void)postRequest:(id)arg1 forBagKey:(id)arg2 response:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d068
- (void)postRequest:(id)arg1 method:(id)arg2 forBagKey:(id)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x000000010003cc70
- (id)errorForBagError:(id)arg1 serverError:(id)arg2;	// IMP=0x000000010003cba4
- (void)dealloc;	// IMP=0x000000010003cb44
- (id)initWithBag:(id)arg1 clientProxy:(id)arg2 credential:(id)arg3;	// IMP=0x000000010003c9b4

@end
