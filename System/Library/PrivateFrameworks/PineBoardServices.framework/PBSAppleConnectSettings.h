/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PBSAppleConnectSettings : NSObject {

	BOOL _enabled;
	NSString* _accountID;
	NSString* _password;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSString * accountID;                         //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * password;                          //@synthesize password=_password - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)password;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)accountID;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(void)_cacheCredentials;
-(void)_saveCredentials;
-(id)tokenWithError:(id*)arg1 ;
@end
