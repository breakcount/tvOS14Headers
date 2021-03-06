/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKAuthenticatorDelegate <NSObject>
@optional
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(SCD_Struct_PK2)arg2;
-(void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
-(void)authenticatorDidEncounterBiometricLockout:(id)arg1;
-(void)authenticatorDidActivateTouchID:(id)arg1;
-(void)authenticatorDidDeactivateTouchID:(id)arg1 status:(long long)arg2;
-(id)passcodeViewController;
-(void)dismissPasscodeViewController;
-(id)passphraseViewController;
-(void)dismissPassphraseViewController;

@end

