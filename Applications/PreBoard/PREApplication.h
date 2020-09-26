//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISystemShellApplication.h>

@class PREIdleSleepManager;

@interface PREApplication : UISystemShellApplication
{
    PREIdleSleepManager *_idleSleepManager;	// 8 = 0x8
}

+ (double)systemIdleSleepInterval;	// IMP=0x000000010000a294
+ (_Bool)registerAsSystemApp;	// IMP=0x000000010000a274
+ (_Bool)shouldCheckInWithBackboard;	// IMP=0x000000010000a254
+ (id)_newApplicationInitializationContext;	// IMP=0x0000000100009e58
+ (id)sharedApplication;	// IMP=0x0000000100009bf8
- (void).cxx_destruct;	// IMP=0x000000010000a42c
@property(retain, nonatomic) PREIdleSleepManager *idleSleepManager; // @synthesize idleSleepManager=_idleSleepManager;
- (void)applicationDidOrderOutContext:(id)arg1 screen:(id)arg2;	// IMP=0x000000010000a340
- (void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 screen:(id)arg3;	// IMP=0x000000010000a2b4
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x000000010000a160
- (_Bool)_isSpringBoard;	// IMP=0x000000010000a140
- (_Bool)disablesFrontBoardImplicitWindowScenes;	// IMP=0x000000010000a120
- (void)_createStatusBarWithRequestedStyle:(long long)arg1 orientation:(long long)arg2 hidden:(_Bool)arg3;	// IMP=0x000000010000a0fc
- (id)init;	// IMP=0x0000000100009c34

@end
