//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVSettingsNetworkConfigurationViewController.h"

@interface TVSettingsNetworkWiFiConfigurationViewController : TVSettingsNetworkConfigurationViewController
{
    _Bool _forgettingNetwork;	// 8 = 0x8
}

@property(nonatomic) _Bool forgettingNetwork; // @synthesize forgettingNetwork=_forgettingNetwork;
- (void)_popToMainNetworkController;	// IMP=0x000000010003cf88
- (void)_updateForgetNetworkItem:(id)arg1 value:(id)arg2;	// IMP=0x000000010003ce7c
- (void)_forgetNetwork:(id)arg1;	// IMP=0x000000010003cde8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003cc84
- (id)interface;	// IMP=0x000000010003cc70
- (id)loadSettingGroups;	// IMP=0x000000010003c8d8
- (void)dealloc;	// IMP=0x000000010003c858
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010003c7c8

@end
