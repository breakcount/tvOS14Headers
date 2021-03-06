//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVTableViewController.h"

#import "SATVIPEntryViewControllerDelegate-Protocol.h"
#import "SATVNetworkConfigurationWizardDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TVSEthernetInterface, UIButton;
@protocol SATVNetworkConfigurationDelegate;

@interface SATVNetworkConfigurationViewController : SATVTableViewController <UITableViewDataSource, UITableViewDelegate, SATVNetworkConfigurationWizardDelegate, SATVIPEntryViewControllerDelegate>
{
    id <SATVNetworkConfigurationDelegate> _configurationDelegate;	// 8 = 0x8
    TVSEthernetInterface *_activeInterface;	// 16 = 0x10
    UIButton *_doneButton;	// 24 = 0x18
    CDUnknownBlockType _ipEntryCompletionBlock;	// 32 = 0x20
    long long _currentlyEditedConfigurationOption;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000111cc
@property(nonatomic) long long currentlyEditedConfigurationOption; // @synthesize currentlyEditedConfigurationOption=_currentlyEditedConfigurationOption;
@property(copy, nonatomic) CDUnknownBlockType ipEntryCompletionBlock; // @synthesize ipEntryCompletionBlock=_ipEntryCompletionBlock;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) TVSEthernetInterface *activeInterface; // @synthesize activeInterface=_activeInterface;
@property(nonatomic) __weak id <SATVNetworkConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
- (void)_doneButtonSelected:(id)arg1;	// IMP=0x00000001000110d4
- (void)_handleInactiveInterfaceIfNeeded;	// IMP=0x0000000100011040
- (long long)_cellAccessoryTypeForConfigurationOption:(long long)arg1;	// IMP=0x0000000100011034
- (_Bool)_isCellEnabledForConfigurationOption:(long long)arg1;	// IMP=0x0000000100010f64
- (id)_titleForActiveInterface;	// IMP=0x0000000100010e6c
- (id)_ipValueForConfigurationOption:(long long)arg1;	// IMP=0x0000000100010d80
- (void)_setIPValue:(id)arg1 forNetworkConfigurationOption:(long long)arg2;	// IMP=0x0000000100010bf0
- (id)_detailTextForConfigurationOption:(long long)arg1;	// IMP=0x0000000100010964
- (id)_titleForConfigurationOption:(long long)arg1;	// IMP=0x0000000100010634
- (id)_keyPathForConfigurationOption:(long long)arg1;	// IMP=0x00000001000105c4
- (void)_teardownObserversForInterface:(id)arg1;	// IMP=0x0000000100010508
- (void)_setupObserversForInterface:(id)arg1;	// IMP=0x0000000100010444
- (void)_updateTableCellForKeyPath:(id)arg1;	// IMP=0x00000001000102c8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001025c
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x0000000100010160
- (void)didCancelNetworkConfigurationWizard:(id)arg1;	// IMP=0x00000001000100dc
- (void)interfaceDidBecomeInactiveForConfigurationWizard:(id)arg1;	// IMP=0x00000001000100d0
- (void)didCompleteNetworkConfigurationWizard:(id)arg1;	// IMP=0x000000010000ff3c
- (void)didRequestEntryForOption:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fce4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000fcd8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000fa08
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010000fa00
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000f9f8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000f7f0
- (void)_didSelectMenu;	// IMP=0x000000010000f7b0
- (id)preferredFocusEnvironments;	// IMP=0x000000010000f704
- (void)viewDidLayoutSubviews;	// IMP=0x000000010000f508
- (void)loadView;	// IMP=0x000000010000f03c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000efbc
- (void)dealloc;	// IMP=0x000000010000ef48
- (id)init;	// IMP=0x000000010000ee2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

