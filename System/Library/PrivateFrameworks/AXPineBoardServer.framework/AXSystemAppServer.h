/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXPineBoardServer.framework/AXPineBoardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSystemAppServer <NSObject>
@optional
-(BOOL)isPasscodeLockVisible;
-(BOOL)isScreenshotWindowVisible;

@required
+(id)server;
-(int)pid;
-(long long)activeInterfaceOrientation;
-(BOOL)isMediaPlaying;
-(BOOL)isControlCenterVisible;
-(void)rebootDevice;
-(BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)arg1;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)dismissSiri;
-(BOOL)isSiriVisible;
-(BOOL)isSiriTalkingOrListening;
-(BOOL)isReceivingAirPlay;
-(void)wakeUpDeviceIfNecessary;
-(BOOL)isSystemSleeping;
-(void)pid:(/*^block*/id)arg1;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1;
-(BOOL)isDockVisible;
-(BOOL)isNotificationCenterVisible;
-(BOOL)isNotificationVisible;

@end

