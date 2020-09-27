/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAppleIDAuthenticationClientProtocol <AKAnisetteProvisioningClientProtocol>
@required
-(void)presentKeepUsingUIForContext:(id)arg1 appleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissKeepUsingUIForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)presentBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentLoginAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5;
-(void)presentSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentSecondFactorAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5;
-(void)presentServerProvidedUIForContext:(id)arg1 withConfiguration:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissServerProvidedUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissNativeRecoveryUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentBiometricOrPasscodeValidationForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)launchOutOfProcessAuthentication:(id)arg1 surrogateID:(id)arg2 withErrorHandler:(/*^block*/id)arg3;
-(void)shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContextID:(id)arg3 completion:(/*^block*/id)arg4;

@end

