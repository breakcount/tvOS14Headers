/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet;

@interface DAAccountChangeInfo : NSObject <NSSecureCoding> {

	unsigned long long _changeType;
	NSString* _accountIdentifier;
	NSString* _accountTypeIdentifier;
	NSDictionary* _oldAccountProperties;
	NSString* _username;
	NSString* _password;
	NSString* _oldUsername;
	NSString* _oldPassword;
	NSSet* _modifiedDataClasses;
	NSString* _clientName;

}

@property (nonatomic,readonly) unsigned long long changeType;                         //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountTypeIdentifier;                 //@synthesize accountTypeIdentifier=_accountTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * oldAccountProperties;              //@synthesize oldAccountProperties=_oldAccountProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;                              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy,readonly) NSString * oldUsername;                           //@synthesize oldUsername=_oldUsername - In the implementation block
@property (nonatomic,copy,readonly) NSString * oldPassword;                           //@synthesize oldPassword=_oldPassword - In the implementation block
@property (nonatomic,copy,readonly) NSSet * modifiedDataClasses;                      //@synthesize modifiedDataClasses=_modifiedDataClasses - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                            //@synthesize clientName=_clientName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_stringForChangeType:(unsigned long long)arg1 ;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(unsigned long long)changeType;
-(NSString *)accountIdentifier;
-(NSString *)clientName;
-(id)initWithChangeType:(unsigned long long)arg1 accountIdentifier:(id)arg2 accountTypeIdentifier:(id)arg3 oldAccountProperties:(id)arg4 username:(id)arg5 password:(id)arg6 oldUsername:(id)arg7 oldPassword:(id)arg8 modifiedDataClasses:(id)arg9 clientName:(id)arg10 ;
-(NSString *)accountTypeIdentifier;
-(NSDictionary *)oldAccountProperties;
-(NSString *)oldUsername;
-(NSString *)oldPassword;
-(NSSet *)modifiedDataClasses;
@end

