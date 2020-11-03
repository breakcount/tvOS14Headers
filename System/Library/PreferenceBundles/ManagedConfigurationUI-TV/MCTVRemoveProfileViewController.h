//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCTVInstallProfileViewController.h"

@class UIAlertController, UITextField;

__attribute__((visibility("hidden")))
@interface MCTVRemoveProfileViewController : MCTVInstallProfileViewController
{
    UITextField *_passwordField;	// 8 = 0x8
    UIAlertController *_activeAlertController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c8e0
@property(retain, nonatomic) UIAlertController *activeAlertController; // @synthesize activeAlertController=_activeAlertController;
@property(retain, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordField;
- (id)_mdmProfileRemovalAlertBody;	// IMP=0x000000000001c194
- (void)_cancelActiveAlertController:(_Bool)arg1;	// IMP=0x000000000001c100
- (void)performRemoveAfterFinalVerification;	// IMP=0x000000000001be10
- (void)_profileRemovalDidFinish;	// IMP=0x000000000001bc64
- (void)_showWrongRemovalPasswordAlert;	// IMP=0x000000000001b748
- (void)_resetDevice;	// IMP=0x000000000001b60c
- (void)_leaveRemoteManagementAndErase;	// IMP=0x000000000001aee8
- (void)_showEraseDeviceAlert;	// IMP=0x000000000001a6a4
- (void)_removeProfileAction;	// IMP=0x0000000000019574
- (void)_showReEnrollFailureAlert;	// IMP=0x00000000000190cc
- (void)_updateProfileAction;	// IMP=0x0000000000019034
- (void)_profileListChanged:(id)arg1;	// IMP=0x0000000000018c6c
- (_Bool)_isDeviceProvisionallyEnrolled;	// IMP=0x0000000000018bf8
- (_Bool)isUnremovableProfile:(id)arg1;	// IMP=0x0000000000018ac4
- (_Bool)isMDMProfile:(id)arg1;	// IMP=0x0000000000018a14
- (id)loadSettingGroups;	// IMP=0x0000000000018080
- (id)title;	// IMP=0x0000000000017fcc
- (void)dealloc;	// IMP=0x0000000000017f24
- (id)initWithProfile:(id)arg1 mode:(int)arg2;	// IMP=0x0000000000017dd4
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000017d34

@end

