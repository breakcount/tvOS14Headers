//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyFlow;

@interface SATVPrivacyViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyFlow *_privacyFlow;	// 16 = 0x10
}

+ (id)new;	// IMP=0x0000000100031d20
- (void).cxx_destruct;	// IMP=0x000000010003231c
@property(readonly, nonatomic) OBPrivacyFlow *privacyFlow; // @synthesize privacyFlow=_privacyFlow;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_acknowledge;	// IMP=0x0000000100032274
- (void)consentViewControllerDidSelectFooter:(id)arg1;	// IMP=0x00000001000321f0
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000321ec
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x00000001000321e0
- (id)footerButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100032160
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100032158
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000320d8
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100032058
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100032040
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100031fcc
- (void)viewDidLoad;	// IMP=0x0000000100031eb4
- (id)initWithPrivacyBundleIdentifier:(id)arg1;	// IMP=0x0000000100031dec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100031db4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100031d7c
- (id)init;	// IMP=0x0000000100031d44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

