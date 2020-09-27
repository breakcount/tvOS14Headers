/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/ASAuthorizationCredential.h>

@class NSString, NSArray, NSData, NSPersonNameComponents;

@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential> {

	NSString* _user;
	NSArray* _authorizedScopes;
	NSString* _state;
	NSData* _authorizationCode;
	NSData* _identityToken;
	NSString* _email;
	NSPersonNameComponents* _fullName;
	long long _realUserStatus;
	NSData* _accessToken;
	NSData* _refreshToken;

}

@property (nonatomic,copy) NSData * accessToken;                             //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSData * refreshToken;                            //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy) NSData * identityToken;                           //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy) NSData * authorizationCode;                       //@synthesize authorizationCode=_authorizationCode - In the implementation block
@property (nonatomic,copy) NSString * state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * fullName;                //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) long long realUserStatus;                       //@synthesize realUserStatus=_realUserStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * user;                         //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authorizedScopes;              //@synthesize authorizedScopes=_authorizedScopes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)user;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSData *)identityToken;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setFullName:(NSPersonNameComponents *)arg1 ;
-(NSPersonNameComponents *)fullName;
-(void)setIdentityToken:(NSData *)arg1 ;
-(NSArray *)authorizedScopes;
-(NSData *)authorizationCode;
-(void)setAccessToken:(NSData *)arg1 ;
-(NSData *)accessToken;
-(NSData *)refreshToken;
-(void)setRefreshToken:(NSData *)arg1 ;
-(id)initWithUser:(id)arg1 authorizedScopes:(id)arg2 ;
-(void)setAuthorizationCode:(NSData *)arg1 ;
-(void)setRealUserStatus:(long long)arg1 ;
-(long long)realUserStatus;
@end

