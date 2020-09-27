/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {

	NSURLCredentialInternal* _internal;

}

@property (readonly) unsigned long long persistence; 
+(BOOL)supportsSecureCoding;
+(id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
+(id)credentialWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
+(id)credentialForTrust:(SecTrustRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)user;
-(id)password;
-(id)_initWithCFURLCredential:(CFURLCredentialRef)arg1 ;
-(const CFURLCredentialRef)_cfurlcredential;
-(id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
-(const CFURLCredentialRef)_CFURLCredential;
-(BOOL)hasPassword;
-(unsigned long long)persistence;
-(SecIdentityRef)identity;
-(id)certificates;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(BOOL)_hasSWCACreatorAttribute;
-(void)_removeSWCACreatorAttribute;
@end
