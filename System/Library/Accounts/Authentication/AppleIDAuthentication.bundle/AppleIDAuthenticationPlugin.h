/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthentication.bundle/AppleIDAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDAuthentication/AppleIDAuthentication-Structs.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>
#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSMutableSet, AKAppleIDAuthenticationController, AAFollowUpController, NSString;

@interface AppleIDAuthenticationPlugin : NSObject <AKAppleIDAuthenticationDelegate, ACDAccountAuthenticationPlugin> {

	NSMutableSet* _accountsAwaitingRemotePasswordEntry;
	AKAppleIDAuthenticationController* _authController;
	AAFollowUpController* _followUpController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_grayModeWhitelist;
-(id)init;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_authController;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)discoverPropertiesForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_clientHasEntitlement:(id)arg1 ;
-(id)_findAndRemoveOldiCloudTokenForAccount:(id)arg1 ;
-(id)_findAndRemoveOldFMIPTokenForAccount:(id)arg1 ;
-(id)_accountTypeIDsThatReplacedAppleIDAccountType;
-(BOOL)_isAccountInGrayMode:(id)arg1 ;
-(void)_migrateiCloudTokenIfNeededForAccount:(id)arg1 credential:(id)arg2 ;
-(void)_migrateFMIPTokenIfNeededForAccount:(id)arg1 credential:(id)arg2 ;
-(void)_migrateAppleIDTokensIfNeededForAccount:(id)arg1 credential:(id*)arg2 store:(id)arg3 ;
-(void)_loginWithAccount:(id)arg1 store:(id)arg2 companionDevice:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_fetchTokenForAccount:(id)arg1 accountStore:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_tryPasswordLoginWithAccount:(id)arg1 store:(id)arg2 services:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_beginPETBasedLoginWithAccount:(id)arg1 PET:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_silentlyAuthenticateAppleID:(id)arg1 altDSID:(id)arg2 companionDevice:(id)arg3 services:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_convertPasswordToPETForAppleID:(id)arg1 altDSID:(id)arg2 password:(id)arg3 services:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_parametersForProxiedAuthentication;
-(id)_loginDelegatesParameters;
-(void)_handleDelegatesResponseForAccount:(id)arg1 store:(id)arg2 response:(id)arg3 error:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_handleRenewFailure:(id)arg1 forAccount:(id)arg2 accountStore:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 errorMessage:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_getPasswordFromCompanionForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_authenticateAccount:(id)arg1 inStore:(id)arg2 options:(id)arg3 errorMessage:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_frontmostApplicationId;
-(void)_presentGrayModeAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_isAccountReallyInGreyMode:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleCallbackFromGrayModeAlert:(CFUserNotificationRef)arg1 withResponse:(unsigned long long)arg2 ;
-(void)_showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(id)_userInfoForRenewCredentialsFollowUpWithAccountStore:(id)arg1 proxiedDevice:(id)arg2 ;
-(void)_handleAuthenticationResults:(id)arg1 error:(id)arg2 forAccount:(id)arg3 inStore:(id)arg4 resetAuthenticatedOnAlertFailure:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_updateDSID:(id)arg1 withRawPassword:(id)arg2 suggestedAccount:(id)arg3 store:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_parametersForIDSAlertFromLoginResponse:(id)arg1 ;
-(void)_invokeDelegatesWithAuthenticationResponse:(id)arg1 password:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

