/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <FrontBoardServices/FBSMutableSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>

@class NSDictionary, NSString, FBSDisplayMode, FBSDisplayConfigurationRequest, NSArray, NSData;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings> {

	BOOL _statusBarForegroundTransparent;
	long long _sceneActivationBias;

}

@property (assign,nonatomic) long long statusBarStyle; 
@property (assign,nonatomic) long long statusBarModernStyle; 
@property (nonatomic,copy) NSDictionary * statusBarPartStyles; 
@property (assign,nonatomic) BOOL statusBarHidden; 
@property (assign,nonatomic) double statusBarAlpha; 
@property (assign,getter=isStatusBarForegroundTransparent,nonatomic) BOOL statusBarForegroundTransparent;              //@synthesize statusBarForegroundTransparent=_statusBarForegroundTransparent - In the implementation block
@property (assign,nonatomic) unsigned statusBarContextID; 
@property (assign,nonatomic) long long defaultStatusBarStyle; 
@property (assign,nonatomic) BOOL defaultStatusBarHidden; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,copy) NSString * defaultPNGName; 
@property (assign,nonatomic) double defaultPNGExpirationTime; 
@property (assign,nonatomic) long long compatibilityMode; 
@property (assign,nonatomic) BOOL deviceOrientationEventsEnabled; 
@property (assign,nonatomic) BOOL interfaceOrientationChangesDisabled; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (assign,nonatomic) BOOL idleTimerDisabled; 
@property (assign,nonatomic) unsigned long long proximityDetectionModes; 
@property (assign,nonatomic) double controlCenterAmbiguousActivationMargin; 
@property (assign,nonatomic) long long controlCenterRevealMode; 
@property (assign,nonatomic) long long notificationCenterRevealMode; 
@property (assign,nonatomic) UIEdgeInsets primaryWindowOverlayInsets; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,nonatomic) BOOL idleModeVisualEffectsEnabled; 
@property (assign,nonatomic) long long whitePointAdaptivityStyle; 
@property (nonatomic,copy) FBSDisplayMode * requestedDisplayMode; 
@property (nonatomic,copy) FBSDisplayConfigurationRequest * displayConfigurationRequest; 
@property (assign,getter=isReachabilitySupported,nonatomic) BOOL reachabilitySupported; 
@property (assign,nonatomic) BOOL wantsExclusiveForeground; 
@property (assign,nonatomic) unsigned long long visibleMiniAlertCount; 
@property (nonatomic,retain) NSArray * audioCategoriesDisablingVolumeHUD; 
@property (assign,nonatomic) double brightnessLevel; 
@property (assign,nonatomic) BOOL disablesMirroring; 
@property (nonatomic,copy) NSString * canvasTitle; 
@property (nonatomic,retain) NSData * activationConditionsData; 
@property (assign,nonatomic) long long sceneActivationBias;                                                            //@synthesize sceneActivationBias=_sceneActivationBias - In the implementation block
@property (assign,nonatomic) CGRect screenFocusedFrame; 
@property (nonatomic,retain) NSArray * multitaskingDragExclusionRects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)userInterfaceStyle;
-(double)brightnessLevel;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(void)setDisplayConfigurationRequest:(FBSDisplayConfigurationRequest *)arg1 ;
-(long long)statusBarStyle;
-(BOOL)isUISubclass;
-(BOOL)deviceOrientationEventsEnabled;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(NSArray *)audioCategoriesDisablingVolumeHUD;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(void)setCompatibilityMode:(long long)arg1 ;
-(long long)compatibilityMode;
-(BOOL)idleModeVisualEffectsEnabled;
-(void)setIdleModeVisualEffectsEnabled:(BOOL)arg1 ;
-(NSData *)activationConditionsData;
-(void)setCanvasTitle:(NSString *)arg1 ;
-(void)setSceneActivationBias:(long long)arg1 ;
-(void)setActivationConditionsData:(NSData *)arg1 ;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)setDefaultStatusBarStyle:(long long)arg1 ;
-(void)setDefaultStatusBarHidden:(BOOL)arg1 ;
-(void)setDefaultPNGName:(NSString *)arg1 ;
-(void)setDefaultPNGExpirationTime:(double)arg1 ;
-(BOOL)isStatusBarForegroundTransparent;
-(void)setStatusBarForegroundTransparent:(BOOL)arg1 ;
-(BOOL)statusBarHidden;
-(double)statusBarAlpha;
-(void)setStatusBarModernStyle:(long long)arg1 ;
-(void)setStatusBarPartStyles:(NSDictionary *)arg1 ;
-(void)setStatusBarAlpha:(double)arg1 ;
-(void)setStatusBarContextID:(unsigned)arg1 ;
-(NSDictionary *)statusBarPartStyles;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)setMultitaskingDragExclusionRects:(NSArray *)arg1 ;
-(long long)whitePointAdaptivityStyle;
-(NSArray *)multitaskingDragExclusionRects;
-(NSString *)defaultPNGName;
-(CGRect)screenFocusedFrame;
-(void)setScreenFocusedFrame:(CGRect)arg1 ;
-(long long)statusBarModernStyle;
-(unsigned)statusBarContextID;
-(long long)defaultStatusBarStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(BOOL)interfaceOrientationChangesDisabled;
-(BOOL)idleTimerDisabled;
-(unsigned long long)proximityDetectionModes;
-(double)controlCenterAmbiguousActivationMargin;
-(long long)controlCenterRevealMode;
-(long long)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(FBSDisplayMode *)requestedDisplayMode;
-(FBSDisplayConfigurationRequest *)displayConfigurationRequest;
-(BOOL)isReachabilitySupported;
-(BOOL)wantsExclusiveForeground;
-(unsigned long long)visibleMiniAlertCount;
-(BOOL)disablesMirroring;
-(NSString *)canvasTitle;
-(long long)sceneActivationBias;
-(void)setInterfaceOrientationChangesDisabled:(BOOL)arg1 ;
-(void)setProximityDetectionModes:(unsigned long long)arg1 ;
-(void)setControlCenterAmbiguousActivationMargin:(double)arg1 ;
-(void)setControlCenterRevealMode:(long long)arg1 ;
-(void)setNotificationCenterRevealMode:(long long)arg1 ;
-(void)setPrimaryWindowOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)setRequestedDisplayMode:(FBSDisplayMode *)arg1 ;
-(void)setReachabilitySupported:(BOOL)arg1 ;
-(void)setWantsExclusiveForeground:(BOOL)arg1 ;
-(void)setVisibleMiniAlertCount:(unsigned long long)arg1 ;
-(void)setAudioCategoriesDisablingVolumeHUD:(NSArray *)arg1 ;
-(void)setBrightnessLevel:(double)arg1 ;
-(void)setDisablesMirroring:(BOOL)arg1 ;
@end

