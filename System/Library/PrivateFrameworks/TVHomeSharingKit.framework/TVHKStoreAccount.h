/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVHKStoreAccount : NSObject {

	NSString* _accountName;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;                 //@synthesize password=_password - In the implementation block
+(id)new;
-(id)init;
-(NSString *)password;
-(NSString *)accountName;
-(id)initWithAccountName:(id)arg1 andPassword:(id)arg2 ;
-(void)homeSharingGroupIDWithCompletion:(/*^block*/id)arg1 ;
@end
