//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuddyLanguageChangeObserverDelegate-Protocol.h"

@class BuddyLanguageChangeObserver, NSString, SATVFlowManager, SATVWindow, TVSKNavigationController, UIView;

@interface TVSetupController : NSObject <BuddyLanguageChangeObserverDelegate>
{
    SATVWindow *_window;	// 8 = 0x8
    UIView *_windowView;	// 16 = 0x10
    unsigned long long _earliestCompletionTime;	// 24 = 0x18
    TVSKNavigationController *_nav;	// 32 = 0x20
    _Bool _buddyDone;	// 40 = 0x28
    NSString *_languageAtStartup;	// 48 = 0x30
    NSString *_localeIdentifierAtStartup;	// 56 = 0x38
    BuddyLanguageChangeObserver *_languageObserver;	// 64 = 0x40
    SATVFlowManager *_flowManager;	// 72 = 0x48
}

+ (id)sharedSetupController;	// IMP=0x0000000100016770
- (void).cxx_destruct;	// IMP=0x0000000100017bb0
- (void)_localeChanged;	// IMP=0x0000000100017b68
- (_Bool)deviceHasWiFi;	// IMP=0x0000000100017aa4
- (void)_refreshLanguage;	// IMP=0x00000001000179f0
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3;	// IMP=0x00000001000178e0
- (void)exitBuddy;	// IMP=0x00000001000178dc
- (void)didEnterBackground;	// IMP=0x0000000100017834
- (void)respring;	// IMP=0x00000001000177f4
- (void)suspendApp;	// IMP=0x00000001000175e0
- (void)resign;	// IMP=0x0000000100017598
- (void)resume;	// IMP=0x0000000100017594
- (void)run;	// IMP=0x0000000100017024
- (void)_createNav;	// IMP=0x0000000100016d60
- (id)navigationController;	// IMP=0x0000000100016d58
- (void)_finishBuddy;	// IMP=0x0000000100016b58
- (void)_finishBuddyWhenReady;	// IMP=0x0000000100016ae8
- (void)setBuddyComplete;	// IMP=0x0000000100016810
- (void)dealloc;	// IMP=0x00000001000167b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
