/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AAUIServerUIHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject {

	AAUIServerUIHookHandler* _serverHookHandler;
	ACAccount* _account;

}
-(id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2 ;
-(id)initWithRemoteUIController:(id)arg1 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachAllHandlers;
-(void)attachRecoveryKeyHandler:(/*^block*/id)arg1 ;
-(void)attachPasscodeHandler:(/*^block*/id)arg1 ;
-(void)attachRepairHandler:(/*^block*/id)arg1 ;
-(void)attachAuthHandler:(/*^block*/id)arg1 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 ;
-(void)setPresentingController:(id)arg1 ;
@end

