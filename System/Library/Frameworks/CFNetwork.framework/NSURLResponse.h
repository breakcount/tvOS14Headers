/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLResponseInternal, NSDictionary, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;
	URLResponse* __cf_resp_data;

}

@property (assign) URLResponse* _cf_resp_data;                         //@synthesize _cf_resp_data=__cf_resp_data - In the implementation block
@property (readonly) long long statusCode; 
@property (copy,readonly) NSDictionary * allHeaderFields; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_responseWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(URLResponse*)_inner;
-(id)_initWithInternal:(id)arg1 ;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(long long)expectedContentLength;
-(NSString *)suggestedFilename;
-(long long)statusCode;
-(NSDictionary *)allHeaderFields;
-(URLResponse*)_cf_resp_data;
-(void)set_cf_resp_data:(URLResponse*)arg1 ;
-(id)_peerCertificateChain;
-(CFURLResponseRef)_CFURLResponse;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(void)_setMIMEType:(id)arg1 ;
-(id)_lastModifiedDate;
-(BOOL)_mustRevalidate;
-(double)_freshnessLifetime;
-(double)_calculatedExpiration;
@end
