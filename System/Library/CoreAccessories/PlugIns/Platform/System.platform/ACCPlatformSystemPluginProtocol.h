/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/System.platform/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCPlatformSystemPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(void)stopObservingApplicationState;
-(id)applicationInfoForPID:(int)arg1;
-(BOOL)isDeviceLocked;
-(BOOL)unlockedSinceBoot;
-(id)applicationInfoForBundleID:(id)arg1;
-(void)toggleProcessAssertionForBundleID:(id)arg1;
-(void)launchApplication:(id)arg1;
-(BOOL)isAppVisibleInCurrentMode:(id)arg1;
-(id)applicationsInstalledWithExternalAccessoryProtocol:(id)arg1;
-(BOOL)launchURL:(id)arg1;
-(BOOL)isAppInstalledWithBundleID:(id)arg1;
-(id)appNameForBundleID:(id)arg1;
-(void)startObservingApplicationState;
-(BOOL)isApplicationInForeground:(id)arg1;
-(id)foregroundAppBundleIDs;
-(void)cancelProcessAssertionForBundleID:(id)arg1;
-(void)launchBundleIDToBackground:(id)arg1;
-(BOOL)supportsExternalAccessoryBackgroundMode:(id)arg1;
-(BOOL)isDeviceLockSettingEnabled;
-(long long)timeSinceBootInSecs;
-(long long)secondsSinceLastLockModeEvent:(int)arg1;
-(BOOL)isLockScreenUIDisplayed;
-(BOOL)createFolder:(const char*)arg1 mode:(unsigned short)arg2;
-(id)mediaLibraryUIDString:(BOOL)arg1;

@end

