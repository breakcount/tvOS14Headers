/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationLimitedUIProvider.h>
#import <libobjc.A.dylib/AKAuthenticationContext.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, AKAnisetteServiceProtocol;
@class NSString, NSDictionary, AKDevice, NSNumber, NSObject, NSUUID, AKAnisetteData, NSArray, NSData, NSSet;

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, AKAuthenticationContext, NSSecureCoding> {

	NSString* _generatedCode;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSString* _deviceClass;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	CFUserNotificationRef _activeSecondFactoryEntryPrompt;
	/*^block*/id _secondFactoryEntryCompletion;
	NSObject*<OS_dispatch_queue> _secondFactorQueue;
	AKDevice* _proxiedDevice;
	AKDevice* _companionDevice;
	NSString* _interpolatedReason;
	unsigned long long _attemptIndex;
	BOOL _performUIOutOfProcess;
	BOOL _keepAlive;
	BOOL _isProxyingForApp;
	BOOL _shouldSendIdentityTokenForRemoteUI;
	BOOL _shouldSendGrandSlamTokensForRemoteUI;
	BOOL _isPasswordEditable;
	BOOL _shouldSkipInitialReachabilityCheck;
	BOOL _shouldPreventInteractiveAuth;
	BOOL _shouldForceInteractiveAuth;
	BOOL _isUsernameEditable;
	BOOL _shouldAllowAppleIDCreation;
	BOOL _needsCredentialRecovery;
	BOOL _needsNewAppleID;
	BOOL _needsPasswordChange;
	BOOL _isTriggeredByNotification;
	BOOL _isEphemeral;
	BOOL _shouldOfferSecurityUpgrade;
	BOOL _needsRepair;
	BOOL _hideAlternativeButton;
	BOOL _hideCancelButton;
	BOOL _hideReasonString;
	BOOL _clientShouldHandleAlternativeButtonAction;
	BOOL _alwaysShowUsernameField;
	BOOL _shouldPromptForPasswordOnly;
	BOOL _shouldUpdatePersistentServiceTokens;
	BOOL _shouldRequestRecoveryPET;
	BOOL _shouldRequestShortLivedToken;
	BOOL _shouldRequestConfigurationInfo;
	BOOL _supportsPiggybacking;
	BOOL _anticipateEscrowAttempt;
	BOOL _isFirstTimeLogin;
	BOOL _shouldSkipSettingsLaunchAlert;
	BOOL _needsNewChildAccount;
	BOOL _needsSecurityUpgradeUI;
	NSString* _proxiedAppBundleID;
	NSUUID* _identifier;
	NSString* _identityToken;
	NSString* _passwordPromptTitle;
	NSString* _proxiedAppName;
	NSString* _password;
	unsigned long long _capabilityForUIDisplay;
	NSString* _shortLivedToken;
	NSString* _message;
	AKAnisetteData* _companionDeviceAnisetteData;
	AKAnisetteData* _proxiedDeviceAnisetteData;
	NSString* _appProvidedContext;
	NSString* _masterKey;
	long long _authenticationMode;
	NSString* _username;
	long long _serviceType;
	NSString* _reason;
	NSString* _defaultButtonString;
	long long _maximumLoginAttempts;
	NSArray* _serviceIdentifiers;
	NSString* _DSID;
	NSString* _altDSID;
	NSDictionary* _httpHeadersForRemoteUI;
	id _clientInfo;
	NSDictionary* _appProvidedData;
	NSString* _title;
	NSString* _helpAnchor;
	NSString* _helpBook;
	long long _authenticationPromptStyle;
	NSString* _cancelButtonString;
	NSString* _alternativeButtonString;
	NSString* _windowTitle;
	NSString* _privacyBundleIdentifier;
	NSData* _displayImageData;
	unsigned long long _authenticationType;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;
	NSNumber* _isAppleIDLoginEnabled;
	NSNumber* _hasEmptyPassword;
	NSSet* _desiredInternalTokens;
	NSString* _securityUpgradeContext;
	NSString* _cellularDataAttributionAppBundleID;
	NSString* _displayString;
	NSString* _displayTitle;

}

@property (nonatomic,copy) NSString * generatedCode; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSString * deviceClass; 
@property (nonatomic,copy) NSString * deviceColor; 
@property (nonatomic,copy) NSString * deviceEnclosureColor; 
@property (nonatomic,readonly) NSUUID * _identifier;                                                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long _capabilityForUIDisplay;                                                                     //@synthesize capabilityForUIDisplay=_capabilityForUIDisplay - In the implementation block
@property (assign,nonatomic) BOOL _shouldSendIdentityTokenForRemoteUI;                                                                         //@synthesize shouldSendIdentityTokenForRemoteUI=_shouldSendIdentityTokenForRemoteUI - In the implementation block
@property (assign,nonatomic) BOOL _shouldSendGrandSlamTokensForRemoteUI;                                                                       //@synthesize shouldSendGrandSlamTokensForRemoteUI=_shouldSendGrandSlamTokensForRemoteUI - In the implementation block
@property (nonatomic,readonly) BOOL _requiresPasswordInput; 
@property (nonatomic,readonly) NSString * _interpolatedReason; 
@property (nonatomic,readonly) NSString * _interpolatedReasonWithBlame; 
@property (assign,nonatomic) BOOL _shouldSkipInitialReachabilityCheck;                                                                         //@synthesize shouldSkipInitialReachabilityCheck=_shouldSkipInitialReachabilityCheck - In the implementation block
@property (assign,nonatomic) unsigned long long _attemptIndex;                                                                                 //@synthesize attemptIndex=_attemptIndex - In the implementation block
@property (getter=isContextEligibleForSilentAuthCoercion,nonatomic,readonly) BOOL contextEligibleForSilentAuthCoercion; 
@property (getter=isContextEligibleForSilentAuth,nonatomic,readonly) BOOL contextEligibleForSilentAuth; 
@property (getter=isContextEligibleForBiometricOrPasscodeAuth,nonatomic,readonly) BOOL contextEligibleForBiometricOrPasscodeAuth; 
@property (assign,nonatomic) BOOL _performUIOutOfProcess;                                                                                      //@synthesize performUIOutOfProcess=_performUIOutOfProcess - In the implementation block
@property (assign,nonatomic) BOOL _keepAlive;                                                                                                  //@synthesize keepAlive=_keepAlive - In the implementation block
@property (retain) NSData * displayImageData;                                                                                                  //@synthesize displayImageData=_displayImageData - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationType;                                                                            //@synthesize authenticationType=_authenticationType - In the implementation block
@property (assign,nonatomic) BOOL shouldPromptForPasswordOnly;                                                                                 //@synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdatePersistentServiceTokens;                                                                         //@synthesize shouldUpdatePersistentServiceTokens=_shouldUpdatePersistentServiceTokens - In the implementation block
@property (assign,setter=_setProxyingForApp:,nonatomic) BOOL _isProxyingForApp;                                                                //@synthesize isProxyingForApp=_isProxyingForApp - In the implementation block
@property (setter=_setProxiedAppBundleID:,nonatomic,copy) NSString * _proxiedAppBundleID;                                                      //@synthesize proxiedAppBundleID=_proxiedAppBundleID - In the implementation block
@property (nonatomic,copy) NSString * _passwordPromptTitle;                                                                                    //@synthesize passwordPromptTitle=_passwordPromptTitle - In the implementation block
@property (setter=_setPassword:,nonatomic,copy) NSString * _password;                                                                          //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL _isPasswordEditable;                                                                                         //@synthesize isPasswordEditable=_isPasswordEditable - In the implementation block
@property (setter=_setShortLivedToken:,nonatomic,copy) NSString * _shortLivedToken;                                                            //@synthesize shortLivedToken=_shortLivedToken - In the implementation block
@property (setter=_setIdentityToken:,nonatomic,copy) NSString * _identityToken;                                                                //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;                                                               //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
@property (setter=setAppleIDLoginEnabled:,nonatomic,copy) NSNumber * isAppleIDLoginEnabled;                                                    //@synthesize isAppleIDLoginEnabled=_isAppleIDLoginEnabled - In the implementation block
@property (setter=setHasEmptyPassword:,nonatomic,copy) NSNumber * hasEmptyPassword;                                                            //@synthesize hasEmptyPassword=_hasEmptyPassword - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestRecoveryPET;                                                                                    //@synthesize shouldRequestRecoveryPET=_shouldRequestRecoveryPET - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestShortLivedToken;                                                                                //@synthesize shouldRequestShortLivedToken=_shouldRequestShortLivedToken - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestConfigurationInfo;                                                                              //@synthesize shouldRequestConfigurationInfo=_shouldRequestConfigurationInfo - In the implementation block
@property (assign,nonatomic) BOOL supportsPiggybacking;                                                                                        //@synthesize supportsPiggybacking=_supportsPiggybacking - In the implementation block
@property (assign,nonatomic) BOOL anticipateEscrowAttempt;                                                                                     //@synthesize anticipateEscrowAttempt=_anticipateEscrowAttempt - In the implementation block
@property (nonatomic,copy) NSSet * desiredInternalTokens;                                                                                      //@synthesize desiredInternalTokens=_desiredInternalTokens - In the implementation block
@property (assign,setter=setFirstTimeLogin:,nonatomic) BOOL isFirstTimeLogin;                                                                  //@synthesize isFirstTimeLogin=_isFirstTimeLogin - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipSettingsLaunchAlert;                                                                               //@synthesize shouldSkipSettingsLaunchAlert=_shouldSkipSettingsLaunchAlert - In the implementation block
@property (nonatomic,copy) NSString * securityUpgradeContext;                                                                                  //@synthesize securityUpgradeContext=_securityUpgradeContext - In the implementation block
@property (setter=_setMessage:,nonatomic,copy) NSString * _message;                                                                            //@synthesize message=_message - In the implementation block
@property (setter=_setMasterKey:,nonatomic,copy) NSString * _masterKey;                                                                        //@synthesize masterKey=_masterKey - In the implementation block
@property (nonatomic,retain) AKAnisetteData * proxiedDeviceAnisetteData;                                                                       //@synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData - In the implementation block
@property (nonatomic,retain) AKAnisetteData * companionDeviceAnisetteData;                                                                     //@synthesize companionDeviceAnisetteData=_companionDeviceAnisetteData - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventInteractiveAuth;                                                                                //@synthesize shouldPreventInteractiveAuth=_shouldPreventInteractiveAuth - In the implementation block
@property (assign,nonatomic) BOOL shouldForceInteractiveAuth;                                                                                  //@synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth - In the implementation block
@property (assign,nonatomic) BOOL needsNewChildAccount;                                                                                        //@synthesize needsNewChildAccount=_needsNewChildAccount - In the implementation block
@property (assign,nonatomic) BOOL needsSecurityUpgradeUI;                                                                                      //@synthesize needsSecurityUpgradeUI=_needsSecurityUpgradeUI - In the implementation block
@property (nonatomic,copy) NSString * cellularDataAttributionAppBundleID;                                                                      //@synthesize cellularDataAttributionAppBundleID=_cellularDataAttributionAppBundleID - In the implementation block
@property (nonatomic,copy) NSString * displayString;                                                                                           //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                                                                                            //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,copy) NSString * username;                                                                                                //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL isUsernameEditable;                                                                                          //@synthesize isUsernameEditable=_isUsernameEditable - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAppleIDCreation;                                                                                  //@synthesize shouldAllowAppleIDCreation=_shouldAllowAppleIDCreation - In the implementation block
@property (assign,nonatomic) BOOL needsCredentialRecovery;                                                                                     //@synthesize needsCredentialRecovery=_needsCredentialRecovery - In the implementation block
@property (assign,nonatomic) BOOL needsNewAppleID;                                                                                             //@synthesize needsNewAppleID=_needsNewAppleID - In the implementation block
@property (assign,nonatomic) BOOL needsPasswordChange;                                                                                         //@synthesize needsPasswordChange=_needsPasswordChange - In the implementation block
@property (assign,setter=setTriggeredByNotification:,nonatomic) BOOL isTriggeredByNotification;                                                //@synthesize isTriggeredByNotification=_isTriggeredByNotification - In the implementation block
@property (assign,nonatomic) long long serviceType;                                                                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                                                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonString;                                                                                     //@synthesize defaultButtonString=_defaultButtonString - In the implementation block
@property (assign,nonatomic) long long maximumLoginAttempts;                                                                                   //@synthesize maximumLoginAttempts=_maximumLoginAttempts - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSArray * serviceIdentifiers;                                                                                       //@synthesize serviceIdentifiers=_serviceIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL isEphemeral;                                                                                                 //@synthesize isEphemeral=_isEphemeral - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                                                                                    //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                                                                 //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeadersForRemoteUI;                                                                              //@synthesize httpHeadersForRemoteUI=_httpHeadersForRemoteUI - In the implementation block
@property (nonatomic,retain) id clientInfo;                                                                                                    //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * appProvidedData;                                                                                     //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSecurityUpgrade;                                                                                  //@synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade - In the implementation block
@property (assign,nonatomic) BOOL needsRepair;                                                                                                 //@synthesize needsRepair=_needsRepair - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * helpAnchor;                                                                                              //@synthesize helpAnchor=_helpAnchor - In the implementation block
@property (nonatomic,copy) NSString * helpBook;                                                                                                //@synthesize helpBook=_helpBook - In the implementation block
@property (assign,nonatomic) long long authenticationPromptStyle;                                                                              //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (retain) NSString * cancelButtonString;                                                                                              //@synthesize cancelButtonString=_cancelButtonString - In the implementation block
@property (retain) NSString * alternativeButtonString;                                                                                         //@synthesize alternativeButtonString=_alternativeButtonString - In the implementation block
@property (assign) BOOL hideAlternativeButton;                                                                                                 //@synthesize hideAlternativeButton=_hideAlternativeButton - In the implementation block
@property (assign) BOOL hideCancelButton;                                                                                                      //@synthesize hideCancelButton=_hideCancelButton - In the implementation block
@property (assign) BOOL hideReasonString;                                                                                                      //@synthesize hideReasonString=_hideReasonString - In the implementation block
@property (assign,nonatomic) BOOL clientShouldHandleAlternativeButtonAction;                                                                   //@synthesize clientShouldHandleAlternativeButtonAction=_clientShouldHandleAlternativeButtonAction - In the implementation block
@property (retain) NSString * windowTitle;                                                                                                     //@synthesize windowTitle=_windowTitle - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowUsernameField;                                                                                     //@synthesize alwaysShowUsernameField=_alwaysShowUsernameField - In the implementation block
@property (copy) NSString * privacyBundleIdentifier;                                                                                           //@synthesize privacyBundleIdentifier=_privacyBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setProxiedAppName:,nonatomic,copy) NSString * _proxiedAppName;                                                              //@synthesize proxiedAppName=_proxiedAppName - In the implementation block
@property (nonatomic,copy) NSString * appProvidedContext;                                                                                      //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (nonatomic,copy) AKDevice * proxiedDevice;                                                                                           //@synthesize proxiedDevice=_proxiedDevice - In the implementation block
@property (nonatomic,copy) AKDevice * companionDevice;                                                                                         //@synthesize companionDevice=_companionDevice - In the implementation block
@property (assign,nonatomic) long long authenticationMode;                                                                                     //@synthesize authenticationMode=_authenticationMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSUUID *)_identifier;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(NSString *)username;
-(NSString *)_password;
-(NSString *)helpAnchor;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)deviceClass;
-(NSString *)_message;
-(id)initWithContext:(id)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)_identityToken;
-(NSString *)serviceIdentifier;
-(void)setAuthenticationType:(unsigned long long)arg1 ;
-(unsigned long long)authenticationType;
-(void)setUsername:(NSString *)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)_masterKey;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayTitle;
-(id)clientInfo;
-(NSString *)_proxiedAppBundleID;
-(id)_sanitizedCopy;
-(BOOL)isContextEligibleForSilentAuth;
-(unsigned long long)_capabilityForUIDisplay;
-(void)setIsUsernameEditable:(BOOL)arg1 ;
-(void)_setProxyingForApp:(BOOL)arg1 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)_updateWithValuesFromContext:(id)arg1 ;
-(NSString *)DSID;
-(AKDevice *)proxiedDevice;
-(BOOL)needsNewAppleID;
-(BOOL)needsNewChildAccount;
-(NSString *)appProvidedContext;
-(BOOL)needsSecurityUpgradeUI;
-(BOOL)isEphemeral;
-(NSNumber *)isAppleIDLoginEnabled;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(NSString *)_proxiedAppName;
-(NSNumber *)hasEmptyPassword;
-(NSString *)securityUpgradeContext;
-(void)setSecurityUpgradeContext:(NSString *)arg1 ;
-(BOOL)anticipateEscrowAttempt;
-(BOOL)shouldOfferSecurityUpgrade;
-(void)setShouldOfferSecurityUpgrade:(BOOL)arg1 ;
-(AKAnisetteData *)proxiedDeviceAnisetteData;
-(void)setProxiedDeviceAnisetteData:(AKAnisetteData *)arg1 ;
-(void)setProxiedDevice:(AKDevice *)arg1 ;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(void)setClientInfo:(id)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(BOOL)isUsernameEditable;
-(id)authKitAccount:(id*)arg1 ;
-(id)authKitAccountForSilentServiceToken:(id*)arg1 ;
-(NSDictionary *)appProvidedData;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(void)setShouldSkipSettingsLaunchAlert:(BOOL)arg1 ;
-(void)_setMessage:(id)arg1 ;
-(void)setGeneratedCode:(NSString *)arg1 ;
-(NSString *)_interpolatedReason;
-(void)setSupportsPiggybacking:(BOOL)arg1 ;
-(AKDevice *)companionDevice;
-(BOOL)_shouldSkipInitialReachabilityCheck;
-(BOOL)shouldPromptForPasswordOnly;
-(id)_appendBlameIfRequiredTo:(id)arg1 ;
-(NSArray *)serviceIdentifiers;
-(void)setServiceIdentifiers:(NSArray *)arg1 ;
-(NSString *)_interpolatedReasonWithBlame;
-(id)_secondFactorQueue;
-(void)_startListeningForSecondFactorCodeEntryNotification;
-(void)_stopListeningForSecondFactorCodeEntryNotification;
-(void)_setProxiedAppName:(id)arg1 ;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(long long)authenticationMode;
-(void)setAuthenticationMode:(long long)arg1 ;
-(BOOL)_localUserHasEmptyPassword;
-(BOOL)isContextEligibleForSilentAuthCoercion;
-(BOOL)isContextEligibleForBiometricOrPasscodeAuth;
-(void)setShouldPreventInteractiveAuth:(BOOL)arg1 ;
-(BOOL)shouldPreventInteractiveAuth;
-(void)setShouldForceInteractiveAuth:(BOOL)arg1 ;
-(BOOL)shouldForceInteractiveAuth;
-(BOOL)_requiresPasswordInput;
-(void)_handleSecondFactorCodeEntry;
-(BOOL)_isProxyingForApp;
-(void)_setProxiedAppBundleID:(id)arg1 ;
-(void)_setIdentityToken:(id)arg1 ;
-(BOOL)_shouldSendIdentityTokenForRemoteUI;
-(void)set_shouldSendIdentityTokenForRemoteUI:(BOOL)arg1 ;
-(BOOL)_shouldSendGrandSlamTokensForRemoteUI;
-(void)set_shouldSendGrandSlamTokensForRemoteUI:(BOOL)arg1 ;
-(NSString *)_passwordPromptTitle;
-(void)set_passwordPromptTitle:(NSString *)arg1 ;
-(void)_setPassword:(id)arg1 ;
-(BOOL)_isPasswordEditable;
-(void)set_isPasswordEditable:(BOOL)arg1 ;
-(NSString *)_shortLivedToken;
-(void)_setShortLivedToken:(id)arg1 ;
-(void)set_shouldSkipInitialReachabilityCheck:(BOOL)arg1 ;
-(unsigned long long)_attemptIndex;
-(void)set_attemptIndex:(unsigned long long)arg1 ;
-(AKAnisetteData *)companionDeviceAnisetteData;
-(void)setCompanionDeviceAnisetteData:(AKAnisetteData *)arg1 ;
-(void)_setMasterKey:(id)arg1 ;
-(BOOL)_performUIOutOfProcess;
-(void)set_performUIOutOfProcess:(BOOL)arg1 ;
-(BOOL)_keepAlive;
-(void)set_keepAlive:(BOOL)arg1 ;
-(BOOL)shouldAllowAppleIDCreation;
-(void)setShouldAllowAppleIDCreation:(BOOL)arg1 ;
-(BOOL)needsCredentialRecovery;
-(void)setNeedsCredentialRecovery:(BOOL)arg1 ;
-(void)setNeedsNewAppleID:(BOOL)arg1 ;
-(BOOL)needsPasswordChange;
-(void)setNeedsPasswordChange:(BOOL)arg1 ;
-(BOOL)isTriggeredByNotification;
-(void)setTriggeredByNotification:(BOOL)arg1 ;
-(NSString *)defaultButtonString;
-(void)setDefaultButtonString:(NSString *)arg1 ;
-(long long)maximumLoginAttempts;
-(void)setMaximumLoginAttempts:(long long)arg1 ;
-(void)setIsEphemeral:(BOOL)arg1 ;
-(NSDictionary *)httpHeadersForRemoteUI;
-(void)setHttpHeadersForRemoteUI:(NSDictionary *)arg1 ;
-(BOOL)needsRepair;
-(void)setNeedsRepair:(BOOL)arg1 ;
-(void)setHelpAnchor:(NSString *)arg1 ;
-(NSString *)helpBook;
-(void)setHelpBook:(NSString *)arg1 ;
-(long long)authenticationPromptStyle;
-(void)setAuthenticationPromptStyle:(long long)arg1 ;
-(NSString *)cancelButtonString;
-(void)setCancelButtonString:(NSString *)arg1 ;
-(NSString *)alternativeButtonString;
-(void)setAlternativeButtonString:(NSString *)arg1 ;
-(BOOL)hideAlternativeButton;
-(void)setHideAlternativeButton:(BOOL)arg1 ;
-(BOOL)hideCancelButton;
-(void)setHideCancelButton:(BOOL)arg1 ;
-(BOOL)hideReasonString;
-(void)setHideReasonString:(BOOL)arg1 ;
-(BOOL)clientShouldHandleAlternativeButtonAction;
-(void)setClientShouldHandleAlternativeButtonAction:(BOOL)arg1 ;
-(NSString *)windowTitle;
-(void)setWindowTitle:(NSString *)arg1 ;
-(BOOL)alwaysShowUsernameField;
-(void)setAlwaysShowUsernameField:(BOOL)arg1 ;
-(NSString *)privacyBundleIdentifier;
-(void)setPrivacyBundleIdentifier:(NSString *)arg1 ;
-(NSData *)displayImageData;
-(void)setDisplayImageData:(NSData *)arg1 ;
-(void)setShouldPromptForPasswordOnly:(BOOL)arg1 ;
-(BOOL)shouldUpdatePersistentServiceTokens;
-(void)setShouldUpdatePersistentServiceTokens:(BOOL)arg1 ;
-(void)setAppleIDLoginEnabled:(id)arg1 ;
-(void)setHasEmptyPassword:(NSNumber *)arg1 ;
-(BOOL)shouldRequestRecoveryPET;
-(void)setShouldRequestRecoveryPET:(BOOL)arg1 ;
-(BOOL)shouldRequestShortLivedToken;
-(void)setShouldRequestShortLivedToken:(BOOL)arg1 ;
-(BOOL)shouldRequestConfigurationInfo;
-(void)setShouldRequestConfigurationInfo:(BOOL)arg1 ;
-(BOOL)supportsPiggybacking;
-(void)setAnticipateEscrowAttempt:(BOOL)arg1 ;
-(NSSet *)desiredInternalTokens;
-(void)setDesiredInternalTokens:(NSSet *)arg1 ;
-(BOOL)isFirstTimeLogin;
-(void)setFirstTimeLogin:(BOOL)arg1 ;
-(BOOL)shouldSkipSettingsLaunchAlert;
-(void)setNeedsNewChildAccount:(BOOL)arg1 ;
-(void)setNeedsSecurityUpgradeUI:(BOOL)arg1 ;
-(NSString *)cellularDataAttributionAppBundleID;
-(void)setCellularDataAttributionAppBundleID:(NSString *)arg1 ;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(NSString *)generatedCode;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(NSString *)deviceEnclosureColor;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
@end

