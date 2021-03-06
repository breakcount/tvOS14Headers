/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding> {

	long long _loginCancelledCount;
	NSString* _accountName;
	long long _serverEnvironment;

}

@property (assign,nonatomic) long long loginCancelledCount;              //@synthesize loginCancelledCount=_loginCancelledCount - In the implementation block
@property (nonatomic,retain) NSString * accountName;                     //@synthesize accountName=_accountName - In the implementation block
@property (assign,nonatomic) long long serverEnvironment;                //@synthesize serverEnvironment=_serverEnvironment - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)migratePreSundanceAccountInformation;
+(void)migratePreBlacktailAccountInformation;
+(id)authMachineForEnvironment:(long long)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(long long)serverEnvironment;
-(void)setLoginCancelledCount:(long long)arg1 ;
-(long long)loginCancelledCount;
-(void)setServerEnvironment:(long long)arg1 ;
@end

