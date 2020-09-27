/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSSystemPolicyForAppDelegate;
#import <Preferences/Preferences-Structs.h>
@class PSPhotosPolicyController, PSContactsPolicyController, PSAccountEnumerator, NEConfiguration, NSString;

@interface PSSystemPolicyForApp : NSObject {

	unsigned long long _policyOptions;
	BOOL _forcePolicyOptions;
	PSPhotosPolicyController* _photosPrivacyController;
	PSContactsPolicyController* _contactsPrivacyController;
	PSAccountEnumerator* _accountEnumerator;
	NEConfiguration* _pathControllerConfiguration;
	id<PSSystemPolicyForAppDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic,__weak) id<PSSystemPolicyForAppDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(id<PSSystemPolicyForAppDelegate>)delegate;
-(void)setDelegate:(id<PSSystemPolicyForAppDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)specifiers;
-(id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(id)privacySpecifiers;
-(id)assistantAndSearchSpecifiers;
-(id)notificationSpecifier;
-(id)privacySpecifierForService:(CFStringRef)arg1 ;
-(id)backgroundAppRefreshSpecifier;
-(id)wirelessDataSpecifierWithAppName:(id)arg1 ;
-(id)documentsSpecifier;
-(id)exposureSpecifiers;
-(id)trackingSpecifiers;
-(id)preferredLanguageSpecifier;
-(id)accountsSpecifier;
-(void)_handleAddAccountButtonAction:(id)arg1 ;
-(BOOL)_accountModificationDisabledByRestrictions;
-(id)dataUsageWorkspaceInfo;
-(BOOL)isCellularBundleID:(id)arg1 ;
-(BOOL)_supportsBackgroundAppRefresh;
-(void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isBackgroundRefreshEnabled:(id)arg1 ;
-(BOOL)_isBackgroundAppRefreshAllowed;
-(BOOL)getMulticastAllowed:(BOOL*)arg1 ;
-(void)loadNetworkConfigurationsForceRefresh:(BOOL)arg1 ;
-(id)pathRuleForBundleID:(id)arg1 create:(BOOL)arg2 ;
-(void)saveNetworkConfiguration;
-(void)setupNetworkConfiguration;
-(void)setLocalNetworkEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isLocalNetworkEnabled:(id)arg1 ;
-(id)locationStatus:(id)arg1 ;
-(BOOL)_isLocationServicesRestricted;
-(id)authLevelStringForStatus:(unsigned long long)arg1 ;
-(id)locationServicesSpecifier;
-(id)photosServicesSpecifier;
-(id)networkServicesSpecifier;
-(id)_privacyAccessForService:(CFStringRef)arg1 ;
-(void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)privacyAccessForSpecifier:(id)arg1 ;
-(CFBundleRef)copyTCCBundleForService:(CFStringRef)arg1 ;
-(id)preferredLanguage:(id)arg1 ;
-(BOOL)_isWirelessDataRestricted;
-(id)contactsServicesSpecifier;
-(void)headerLinkWasTapped;
-(id)defaultAppSpecifierWithAppRecordsMatchingBlock:(/*^block*/id)arg1 getter:(SEL)arg2 setter:(SEL)arg3 title:(id)arg4 ;
@end

