/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>
#import <UIKitCore/_UIDisplayInfoProviding.h>
#import <UIKit/UIApplicationSceneSettings.h>
@class NSString, NSNumber, BSCornerRadiusConfiguration;


@protocol UIApplicationSceneSettings <NSObject>
@property (nonatomic,readonly) NSString * persistenceIdentifier; 
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned long long deactivationReasons; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,readonly) BOOL forcedStatusBarForegroundTransparent; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL canShowAlerts; 
@property (nonatomic,readonly) BOOL idleModeEnabled; 
@property (nonatomic,readonly) BOOL statusBarDisabled; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) long long statusBarParts; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) double statusBarHeight; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (nonatomic,readonly) long long deviceOrientation; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) BSCornerRadiusConfiguration * cornerRadiusConfiguration; 
@property (nonatomic,readonly) unsigned hostContextIdentifierForSnapshotting; 
@property (nonatomic,readonly) unsigned long long scenePresenterRenderIdentifierForSnapshotting; 
@property (nonatomic,readonly) long long accessibilityContrast; 
@required
-(long long)deviceOrientation;
-(NSString *)persistenceIdentifier;
-(double)statusBarHeight;
-(long long)userInterfaceStyle;
-(BOOL)deviceOrientationEventsEnabled;
-(long long)accessibilityContrast;
-(unsigned long long)deactivationReasons;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1;
-(BOOL)underLock;
-(int)statusBarStyleOverridesToSuppress;
-(NSNumber *)forcedStatusBarStyle;
-(BOOL)forcedStatusBarForegroundTransparent;
-(BOOL)canShowAlerts;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(UIEdgeInsets)peripheryInsets;
-(long long)statusBarParts;
-(CGRect)statusBarAvoidanceFrame;
-(double)systemMinimumMargin;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(unsigned long long)artworkSubtype;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(unsigned)hostContextIdentifierForSnapshotting;
-(unsigned long long)scenePresenterRenderIdentifierForSnapshotting;

@end


@class FBSDisplayConfiguration, NSString, NSNumber, BSCornerRadiusConfiguration;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayInfoProviding, UIApplicationSceneSettings>

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * persistenceIdentifier; 
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned long long deactivationReasons; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,readonly) BOOL forcedStatusBarForegroundTransparent; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL canShowAlerts; 
@property (nonatomic,readonly) BOOL idleModeEnabled; 
@property (nonatomic,readonly) BOOL statusBarDisabled; 
@property (nonatomic,readonly) long long statusBarParts; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) double statusBarHeight; 
@property (nonatomic,readonly) long long deviceOrientation; 
@property (nonatomic,readonly) BSCornerRadiusConfiguration * cornerRadiusConfiguration; 
@property (nonatomic,readonly) unsigned hostContextIdentifierForSnapshotting; 
@property (nonatomic,readonly) unsigned long long scenePresenterRenderIdentifierForSnapshotting; 
@property (nonatomic,readonly) long long accessibilityContrast; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)deviceOrientation;
-(NSString *)persistenceIdentifier;
-(double)statusBarHeight;
-(long long)userInterfaceStyle;
-(BOOL)isUISubclass;
-(BOOL)deviceOrientationEventsEnabled;
-(long long)accessibilityContrast;
-(unsigned long long)deactivationReasons;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1 ;
-(BOOL)underLock;
-(int)statusBarStyleOverridesToSuppress;
-(NSNumber *)forcedStatusBarStyle;
-(BOOL)forcedStatusBarForegroundTransparent;
-(BOOL)canShowAlerts;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(UIEdgeInsets)peripheryInsets;
-(long long)statusBarParts;
-(CGRect)statusBarAvoidanceFrame;
-(double)systemMinimumMargin;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(unsigned long long)artworkSubtype;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(unsigned)hostContextIdentifierForSnapshotting;
-(unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
@end

