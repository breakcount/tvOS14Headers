//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVSUITextEntryControllerDelegate-Protocol.h"

@class MCUIFieldCollection, NSArray, NSString, TVSUITextEntryController, TVSUITextEntryHeaderView;
@protocol MCTVInstallProfileQuestionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCTVInstallProfileQuestionViewController : UIViewController <TVSUITextEntryControllerDelegate>
{
    _Bool _allowsEmptyInput;	// 8 = 0x8
    _Bool _waitingForPasscodePreflight;	// 9 = 0x9
    NSArray *_userInput;	// 16 = 0x10
    id <MCTVInstallProfileQuestionViewControllerDelegate> _delegate;	// 24 = 0x18
    MCUIFieldCollection *_fieldCollection;	// 32 = 0x20
    TVSUITextEntryController *_textEntryController;	// 40 = 0x28
    TVSUITextEntryHeaderView *_headerView;	// 48 = 0x30
    NSString *_previousResponseValue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000039108
@property(readonly, copy, nonatomic) NSString *previousResponseValue; // @synthesize previousResponseValue=_previousResponseValue;
@property(readonly, nonatomic) _Bool waitingForPasscodePreflight; // @synthesize waitingForPasscodePreflight=_waitingForPasscodePreflight;
@property(readonly, nonatomic) _Bool allowsEmptyInput; // @synthesize allowsEmptyInput=_allowsEmptyInput;
@property(readonly, nonatomic) TVSUITextEntryHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) TVSUITextEntryController *textEntryController; // @synthesize textEntryController=_textEntryController;
@property(readonly, nonatomic) MCUIFieldCollection *fieldCollection; // @synthesize fieldCollection=_fieldCollection;
@property(nonatomic) __weak id <MCTVInstallProfileQuestionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *userInput; // @synthesize userInput=_userInput;
- (id)listTitleTextColor;	// IMP=0x0000000000038db8
- (id)_messageStringAttributes;	// IMP=0x0000000000038c78
- (id)_titleStringAttributes;	// IMP=0x0000000000038b38
- (void)_configureSubmitButton;	// IMP=0x000000000003874c
- (void)_configureTextField;	// IMP=0x000000000003846c
- (void)_configureTitleView;	// IMP=0x0000000000038110
- (void)_showErrorAlertWithError:(id)arg1;	// IMP=0x0000000000037308
- (void)_retryCurrentPasswordFieldWithError:(id)arg1;	// IMP=0x00000000000371d4
- (void)_processResponseAndContinue;	// IMP=0x0000000000036da8
- (void)_didFinishPreflightWithError:(id)arg1;	// IMP=0x0000000000036c4c
- (void)_didFinishPasscodePreflightWithError:(id)arg1;	// IMP=0x0000000000036b00
- (void)_preflightCurrentPayload;	// IMP=0x0000000000036a20
- (void)_continueOrFinish;	// IMP=0x000000000003697c
- (void)_updateUIForCurrentField;	// IMP=0x0000000000036920
- (void)_cancelPayload;	// IMP=0x00000000000368ec
- (void)_skipPayload;	// IMP=0x00000000000368b8
- (void)_retryPayload;	// IMP=0x000000000003685c
- (void)_cancelInput;	// IMP=0x0000000000036820
- (void)_finishInput;	// IMP=0x000000000003679c
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1;	// IMP=0x000000000003670c
- (void)_textFieldTextDidChange:(id)arg1;	// IMP=0x0000000000036538
- (void)_menuPressed;	// IMP=0x0000000000036504
- (void)_donePressed:(id)arg1;	// IMP=0x00000000000364a4
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x0000000000036438
- (void)didFinishPreflightWithError:(id)arg1;	// IMP=0x0000000000036384
- (void)stopWaitingForMoreInput;	// IMP=0x0000000000036370
- (void)waitForMoreInput;	// IMP=0x000000000003635c
- (void)updateWithUserInput:(id)arg1;	// IMP=0x00000000000362b0
- (id)preferredFocusEnvironments;	// IMP=0x0000000000036268
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000036158
- (void)viewDidLoad;	// IMP=0x0000000000035d18
- (id)initWithUserInput:(id)arg1;	// IMP=0x0000000000035bec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

