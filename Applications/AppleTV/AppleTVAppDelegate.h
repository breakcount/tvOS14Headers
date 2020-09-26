//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "TVApplicationControllerPrivateDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "VUIApplicationDelegate-Protocol.h"

@class ATAOpenURLController, ATAParsedOpenURL, ATATabBarController, BKSProcessAssertion, NSArray, NSDictionary, NSString, TVApplicationController, TVSUser, UIWindow, VUIBootURLController, VUINavigateToUpNextHandler, VUIStateMachine;

@interface AppleTVAppDelegate : UIResponder <TVApplicationControllerPrivateDelegate, UIGestureRecognizerDelegate, VUIApplicationDelegate>
{
    _Bool _enablePortraitLock;	// 8 = 0x8
    _Bool _overrideOrientation;	// 9 = 0x9
    _Bool _debugGestureSetupDone;	// 10 = 0xa
    _Bool _appWasForegrounded;	// 11 = 0xb
    UIWindow *_window;	// 16 = 0x10
    TVApplicationController *_appController;	// 24 = 0x18
    BKSProcessAssertion *_launchAssertion;	// 32 = 0x20
    NSDictionary *_launchOptions;	// 40 = 0x28
    ATAParsedOpenURL *_deferredParsedOpenURL;	// 48 = 0x30
    ATAOpenURLController *_openURLController;	// 56 = 0x38
    VUIBootURLController *_bootURLController;	// 64 = 0x40
    ATATabBarController *_tabBarController;	// 72 = 0x48
    NSArray *_tabBarItems;	// 80 = 0x50
    VUIStateMachine *_stateMachine;	// 88 = 0x58
    VUINavigateToUpNextHandler *_navigateToUpNextHandler;	// 96 = 0x60
    TVSUser *_currentActiveUser;	// 104 = 0x68
}

+ (_Bool)_isDeeplinkTVButton:(id)arg1;	// IMP=0x000000010000a86c
- (void).cxx_destruct;	// IMP=0x000000010000ab68
@property(retain, nonatomic) TVSUser *currentActiveUser; // @synthesize currentActiveUser=_currentActiveUser;
@property(retain, nonatomic) VUINavigateToUpNextHandler *navigateToUpNextHandler; // @synthesize navigateToUpNextHandler=_navigateToUpNextHandler;
@property(nonatomic) _Bool appWasForegrounded; // @synthesize appWasForegrounded=_appWasForegrounded;
@property(nonatomic) _Bool debugGestureSetupDone; // @synthesize debugGestureSetupDone=_debugGestureSetupDone;
@property(nonatomic) _Bool overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property(retain, nonatomic) VUIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(retain, nonatomic) ATATabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) VUIBootURLController *bootURLController; // @synthesize bootURLController=_bootURLController;
@property(retain, nonatomic) ATAOpenURLController *openURLController; // @synthesize openURLController=_openURLController;
@property(retain, nonatomic) ATAParsedOpenURL *deferredParsedOpenURL; // @synthesize deferredParsedOpenURL=_deferredParsedOpenURL;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) BKSProcessAssertion *launchAssertion; // @synthesize launchAssertion=_launchAssertion;
@property(retain, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_hideLoadingView;	// IMP=0x000000010000a810
- (void)_showLoadingView;	// IMP=0x000000010000a7ac
- (void)_refreshTabBarItems;	// IMP=0x000000010000a660
- (void)_accountsChanged:(id)arg1;	// IMP=0x000000010000a618
- (void)_presentErrorDialogWithNetworkAvailable:(_Bool)arg1;	// IMP=0x000000010000a330
- (void)_handleDeferredParsedOpenURLIfNeeded;	// IMP=0x000000010000a2b8
- (void)_resetDeferredParsedOpenURL;	// IMP=0x000000010000a2a8
- (void)_handleParsedOpenURL:(id)arg1;	// IMP=0x0000000100009db8
- (void)_releaseLaunchAssertion;	// IMP=0x0000000100009d60
- (void)_acquireLaunchAssertion;	// IMP=0x0000000100009ce0
- (void)_userSwitchAppReload;	// IMP=0x0000000100009aa0
- (void)_hideUserSwitchSpinner;	// IMP=0x0000000100009a58
- (void)_showUserSwitchSpinnerUserSwitchState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000997c
- (void)_handleTVAccountsChanged;	// IMP=0x00000001000094ec
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000093b8
- (void)_stopApplicationController;	// IMP=0x0000000100009378
- (void)_startApplicationControllerWithBootURL:(id)arg1;	// IMP=0x0000000100008ef8
- (void)_fetchApplicationControllerBootURL;	// IMP=0x0000000100008a84
- (void)_fetchFullFeatureFlag:(id)arg1;	// IMP=0x0000000100008784
- (void)_resetJavascriptState;	// IMP=0x0000000100008734
- (void)_showJavascriptUnavailableUIWithNetworkAvailable:(_Bool)arg1;	// IMP=0x00000001000085a8
- (void)_updateTabControllerWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2;	// IMP=0x000000010000826c
- (void)_finishJavascriptSetupWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2;	// IMP=0x0000000100008128
- (void)_startJavascriptSetup;	// IMP=0x00000001000080e4
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001000080dc
- (void)_handleDebugUIGesture:(id)arg1;	// IMP=0x0000000100008020
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;	// IMP=0x0000000100007ed0
- (void)_initializePlayer;	// IMP=0x0000000100007da8
- (_Bool)_isActiveMediaLibraryTheDeviceMediaLibrary;	// IMP=0x0000000100007d18
- (void)_initializeMediaLibrary;	// IMP=0x0000000100007acc
- (void)_updateDeviceMediaLibraryFromCloud;	// IMP=0x0000000100007a60
- (void)_syncBookmarkServiceIfRequired;	// IMP=0x00000001000079ec
- (void)_initializeBookmarkService;	// IMP=0x0000000100007994
- (void)_registerStateMachineHandlers;	// IMP=0x0000000100005388
- (void)_configureStateMachine;	// IMP=0x00000001000052f0
- (void)_javascriptSetTabBarItems:(id)arg1;	// IMP=0x0000000100005130
- (id)rootViewControllerForAppController:(id)arg1;	// IMP=0x0000000100004fec
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100004e4c
- (void)appController:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x0000000100004d54
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100004c5c
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100004b64
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;	// IMP=0x0000000100004b5c
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100004abc
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100004a70
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001000048a4
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100004848
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010000482c
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100004684
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100004220
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100004124
- (void)applicationDidInitialize:(_Bool)arg1;	// IMP=0x0000000100004118
- (_Bool)isDeviceAsleepAndSleptManually:(_Bool *)arg1;	// IMP=0x0000000100003ef8
- (void)updateIdleModeVisualEffectsStatus:(_Bool)arg1;	// IMP=0x0000000100003e1c
- (void)enablePortraitLock:(_Bool)arg1;	// IMP=0x0000000100003db4
- (void)dealloc;	// IMP=0x0000000100003d1c
- (id)init;	// IMP=0x0000000100003bd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
