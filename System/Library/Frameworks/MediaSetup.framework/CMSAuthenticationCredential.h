/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSetup/MediaSetup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface CMSAuthenticationCredential : NSObject <NSSecureCoding, NSCopying> {

	NSString* _authHeader;
	NSString* _authToken;
	NSString* _tokenType;
	NSDate* _authTokenExpiration;
	NSString* _scope;
	NSString* _refreshToken;

}

@property (readonly) NSString * authToken;                      //@synthesize authToken=_authToken - In the implementation block
@property (readonly) NSString * tokenType;                      //@synthesize tokenType=_tokenType - In the implementation block
@property (readonly) NSDate * authTokenExpiration;              //@synthesize authTokenExpiration=_authTokenExpiration - In the implementation block
@property (readonly) NSString * scope;                          //@synthesize scope=_scope - In the implementation block
@property (readonly) NSString * refreshToken;                   //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSString * authHeader; 
+(BOOL)supportsSecureCoding;
+(id)authCredentialWithToken:(id)arg1 tokenType:(id)arg2 expirationDate:(id)arg3 scope:(id)arg4 refreshToken:(id)arg5 ;
+(id)authCredentialFromMSAuthData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)scope;
-(NSString *)authToken;
-(NSString *)tokenType;
-(NSString *)refreshToken;
-(id)initWithToken:(id)arg1 tokenType:(id)arg2 expirationDate:(id)arg3 scope:(id)arg4 refreshToken:(id)arg5 ;
-(NSString *)authHeader;
-(NSDate *)authTokenExpiration;
@end

