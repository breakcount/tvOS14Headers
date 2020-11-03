//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TSKViewControllerExternalObserving-Protocol.h"
#import "TVHAccountSetupViewControllerDelegate-Protocol.h"

@class NSString;

@interface TVHAccountSettingsViewController : TSKViewController <TVHAccountSetupViewControllerDelegate, TSKViewControllerExternalObserving>
{
    _Bool _authenticationInProgress;	// 8 = 0x8
    id _externalValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003900
@property(nonatomic, getter=isAuthenticationInProgress) _Bool authenticationInProgress; // @synthesize authenticationInProgress=_authenticationInProgress;
@property(retain, nonatomic) id externalValue; // @synthesize externalValue=_externalValue;
- (void)accountSetupViewControllerDidCancel:(id)arg1;	// IMP=0x0000000000003844
- (void)accountSetupViewController:(id)arg1 didSucceedWithAccountName:(id)arg2;	// IMP=0x0000000000003794
- (void)_showConfirmDisableDialog;	// IMP=0x0000000000003460
- (void)_showSuccessDialogWithAccountName:(id)arg1;	// IMP=0x0000000000003210
- (void)_updateDisableItem:(id)arg1;	// IMP=0x0000000000003074
- (void)_updateEnableItem:(id)arg1;	// IMP=0x0000000000002ecc
- (void)_disableHomeSharing;	// IMP=0x0000000000002ec0
- (void)_enableHomeSharing;	// IMP=0x0000000000002e24
- (void)_updateExternalValue;	// IMP=0x0000000000002d5c
- (void)_stopObservingMediaServerDiscoverySettings;	// IMP=0x0000000000002cfc
- (void)_startObservingMediaServerDiscoverySettings;	// IMP=0x0000000000002c98
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000002bd0
- (id)loadSettingGroups;	// IMP=0x000000000000278c
- (void)dealloc;	// IMP=0x0000000000002740
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000026e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

