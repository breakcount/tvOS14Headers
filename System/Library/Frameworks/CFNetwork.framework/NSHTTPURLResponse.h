/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLResponse.h>

@class NSHTTPURLResponseInternal, NSDictionary;

@interface NSHTTPURLResponse : NSURLResponse {

	NSHTTPURLResponseInternal* _httpInternal;

}

@property (readonly) long long statusCode; 
@property (copy,readonly) NSDictionary * allHeaderFields; 
+(BOOL)supportsSecureCoding;
+(id)localizedStringForStatusCode:(long long)arg1 ;
+(BOOL)isErrorStatusCode:(long long)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(long long)statusCode;
-(NSDictionary *)allHeaderFields;
-(id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4 ;
-(id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4 ;
-(id)_allHTTPHeaderFieldsAsArrays;
-(id)_peerCertificateChain;
@end

