//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RecommendationPreferences, WiFiStallDetect;

@interface DPSQuickRecoveryRecommendationEngine : NSObject
{
    int screenStateToken;	// 8 = 0x8
    _Bool screenON;	// 12 = 0xc
    WiFiStallDetect *model;	// 16 = 0x10
    RecommendationPreferences *_preferences;	// 24 = 0x18
    NSMutableDictionary *_dpsQuickRecoveryWDBudgetDict;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002cbcc
@property(retain, nonatomic) NSMutableDictionary *dpsQuickRecoveryWDBudgetDict; // @synthesize dpsQuickRecoveryWDBudgetDict=_dpsQuickRecoveryWDBudgetDict;
@property(retain, nonatomic) RecommendationPreferences *preferences; // @synthesize preferences=_preferences;
- (unsigned long long)recommendReset:(id)arg1 currentSample:(id)arg2 acList:(id)arg3 qDpsStat:(id)arg4 chipNumber:(id)arg5 dpsSnapshot:(id)arg6;	// IMP=0x000000010002c214
- (_Bool)checkParameterThresholds:(id)arg1 currentSample:(id)arg2 qDpsStat:(id)arg3 chipNumber:(id)arg4 dpsSnapshot:(id)arg5;	// IMP=0x000000010002be94
- (_Bool)isHighAWDLActivity:(id)arg1;	// IMP=0x000000010002bae4
- (_Bool)isTriggerDisconnect:(id)arg1 currentSample:(id)arg2;	// IMP=0x000000010002aa98
- (unsigned int)computeBin:(id)arg1 previousSample:(id)arg2 currentSample:(id)arg3;	// IMP=0x000000010002a6a8
- (_Bool)checkDpsStatus:(id)arg1 currentSample:(id)arg2 qDpsStat:(id)arg3;	// IMP=0x000000010002a148
- (id)computeFeatures:(id)arg1 currentSample:(id)arg2 acList:(id)arg3;	// IMP=0x0000000100027500
- (_Bool)isResetAllowed;	// IMP=0x0000000100027224
- (void)updateScreenState;	// IMP=0x0000000100027114
- (_Bool)isForegroundTrafficPresent;	// IMP=0x0000000100026cec
- (void)addNumSuppressedScreenOffQuickRecoveryWD;	// IMP=0x0000000100026b20
- (void)addNumSuppressedScreenOnQuickRecoveryWD;	// IMP=0x0000000100026954
- (void)addNumRecommendedScreenOffQuickRecoveryWD;	// IMP=0x0000000100026788
- (void)addNumRecommendedScreenOnQuickRecoveryWD;	// IMP=0x00000001000265bc
- (id)init;	// IMP=0x00000001000261f0

@end
