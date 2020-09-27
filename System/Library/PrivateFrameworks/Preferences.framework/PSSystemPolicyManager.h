/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSSystemPolicyManager : NSObject
+(id)thirdPartyApplications;
+(id)specifiersForThirdPartyApps:(id)arg1 ;
+(id)thirdPartyApplicationsIncludingAppClips:(BOOL)arg1 ;
+(id)_thirdPartyApplicationProxies;
+(id)_thirdPartyApplicationProxyForBundleID:(id)arg1 ;
+(void)_populateBBSectionIDs;
+(BOOL)_shouldIncludeProxy:(id)arg1 ;
+(BOOL)_systemSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_privacySettingsNeededForProxy:(id)arg1 ;
+(BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_cellularDataSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_notificationSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_documentSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_defaultAppSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_languageSettingNeededForBundleID:(id)arg1 ;
+(id)_dataUsageWorkspaceInfo;
+(id)thirdPartyApplicationForBundleID:(id)arg1 ;
+(id)thirdPartyApplicationProxies;
+(BOOL)hasAnyAppClip;
+(id)thirdPartyApplicationProxyForBundleID:(id)arg1 ;
@end

