//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVSettingsTCCFacade.h"

@class ADTrackingTransparency;

@interface TVSettingsCrossAppTrackingFacade : TVSettingsTCCFacade
{
    _Bool _crossAppTrackingAllowedSwitchEnabled;	// 8 = 0x8
    _Bool _crossAppTrackingAllowed;	// 9 = 0x9
    _Bool _observingTCCInfos;	// 10 = 0xa
    ADTrackingTransparency *_adTrackingTransparency;	// 16 = 0x10
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000001000862c4
+ (id)sharedInstance;	// IMP=0x0000000100085c40
- (void).cxx_destruct;	// IMP=0x0000000100086b68
@property(nonatomic, getter=isObservingTCCInfos) _Bool observingTCCInfos; // @synthesize observingTCCInfos=_observingTCCInfos;
@property(readonly, nonatomic) ADTrackingTransparency *adTrackingTransparency; // @synthesize adTrackingTransparency=_adTrackingTransparency;
@property(nonatomic) _Bool crossAppTrackingAllowed; // @synthesize crossAppTrackingAllowed=_crossAppTrackingAllowed;
@property(nonatomic) _Bool crossAppTrackingAllowedSwitchEnabled; // @synthesize crossAppTrackingAllowedSwitchEnabled=_crossAppTrackingAllowedSwitchEnabled;
- (void)_updatePropertyForKey:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 notify:(_Bool)arg3;	// IMP=0x0000000100086a5c
- (void)_updateCrossAppTrackingStateAndNotify:(_Bool)arg1;	// IMP=0x00000001000868f8
- (void)_updateCrossAppTrackingState;	// IMP=0x00000001000868e8
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x0000000100086810
- (void)_resetAdvertisingIdentifierIfNeeded;	// IMP=0x0000000100086740
- (void)_stopObservingTCCInfos;	// IMP=0x00000001000865d8
- (void)_startObservingTCCInfos;	// IMP=0x000000010008646c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000863b4
- (void)setInfoArray:(id)arg1;	// IMP=0x0000000100086214
- (void)resetAdvertisingIdentifier;	// IMP=0x00000001000860f4
- (void)disallowAccessForAllApps;	// IMP=0x0000000100085f98
@property(readonly, nonatomic) unsigned long long numberOfAppsAllowingCrossAppTracking;
- (void)dealloc;	// IMP=0x0000000100085dd8
- (id)initWithServiceName:(id)arg1;	// IMP=0x0000000100085cf8

@end
