/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface AASignInOperationHelper : NSObject {

	ACAccountStore* _accountStore;

}
-(id)init;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signInAccount:(id)arg1 enablingDataclasses:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_refreshEnabledDataclassesForAccount:(id)arg1 ;
@end
