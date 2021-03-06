//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSiCloudAccountManagerDelegate-Protocol.h"

@class NSString, TVSPreferences, TVSiCloudAccountManager;

@interface TVSettingsHomeScreenSyncFacade : NSObject <TVSiCloudAccountManagerDelegate>
{
    id _headboardPrefsObserverToken;	// 8 = 0x8
    _Bool _homeScreenSyncEnabled;	// 16 = 0x10
    TVSPreferences *_headBoardPreferences;	// 24 = 0x18
    TVSiCloudAccountManager *_iCloudAccountManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100063f9c
- (void).cxx_destruct;	// IMP=0x00000001000646e8
@property(retain, nonatomic) TVSiCloudAccountManager *iCloudAccountManager; // @synthesize iCloudAccountManager=_iCloudAccountManager;
@property(retain, nonatomic) TVSPreferences *headBoardPreferences; // @synthesize headBoardPreferences=_headBoardPreferences;
@property(nonatomic) _Bool homeScreenSyncEnabled; // @synthesize homeScreenSyncEnabled=_homeScreenSyncEnabled;
- (void)_clearLastKnownDeviceSyncState;	// IMP=0x0000000100064668
- (void)iCloudAccountManager:(id)arg1 didModifyActiveAccount:(id)arg2;	// IMP=0x0000000100064544
- (void)clearAccountPrefsForAutoAppDownloads;	// IMP=0x0000000100064528
- (_Bool)isAutoAppDownloadsEnabledForAccountIdentifier:(id)arg1;	// IMP=0x0000000100064420
- (void)setAutoAppDownloadsEnabled:(_Bool)arg1 accountIdentifier:(id)arg2;	// IMP=0x00000001000642dc
- (id)init;	// IMP=0x0000000100064008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

