//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface QoSMarkingController : NSObject
{
    NSArray *_interfaces;	// 8 = 0x8
    NSMutableDictionary *_policySessions;	// 16 = 0x10
    NSMutableDictionary *_requested;	// 24 = 0x18
    NSMutableDictionary *_enabled;	// 32 = 0x20
    NSMutableDictionary *_enabledAV;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x00000001000587dc
- (void).cxx_destruct;	// IMP=0x00000001000590fc
@property(retain, nonatomic) NSMutableDictionary *enabledAV; // @synthesize enabledAV=_enabledAV;
@property(retain, nonatomic) NSMutableDictionary *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSMutableDictionary *requested; // @synthesize requested=_requested;
@property(retain, nonatomic) NSMutableDictionary *policySessions; // @synthesize policySessions=_policySessions;
@property(retain, nonatomic) NSArray *interfaces; // @synthesize interfaces=_interfaces;
- (void)setPolicy:(id)arg1 forInterface:(id)arg2;	// IMP=0x0000000100058d68
- (void)updatePolicy:(id)arg1 forInterface:(id)arg2;	// IMP=0x00000001000578a4
- (id)init;	// IMP=0x0000000100057780
- (void)addWhitelistedAppIdentifierPolicy:(id)arg1 forApp:(id)arg2 order:(unsigned int)arg3;	// IMP=0x0000000100056f74
- (id)copyUUIDsForBundleID:(id)arg1;	// IMP=0x0000000100056ec0
- (id)copyUUIDsForUUIDMapping:(id)arg1;	// IMP=0x0000000100056c48
- (void)addWhitelistedPathPolicy:(id)arg1 forPath:(id)arg2 order:(unsigned int)arg3;	// IMP=0x00000001000564e4
- (id)copyUUIDsForExecutable:(const char *)arg1;	// IMP=0x0000000100056150
- (id)copyUUIDsForFatBinary:(int)arg1;	// IMP=0x0000000100055ad4
- (id)copyUUIDForSingleArch:(int)arg1;	// IMP=0x00000001000556ac
- (id)qosMarkingWhitelistedAppIdentifiers:(id)arg1;	// IMP=0x00000001000553c8
- (_Bool)qosMarkingIsAppleAudioVideoCallsEnabled:(id)arg1;	// IMP=0x0000000100055370
- (_Bool)qosMarkingIsEnabled:(id)arg1;	// IMP=0x0000000100055318
- (_Bool)qosMarkingPolicyEnabled:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100055170
- (id)createPolicySession;	// IMP=0x0000000100055120

@end

