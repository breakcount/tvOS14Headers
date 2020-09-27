/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFHTTPResponseInternal, HMFHTTPRequest, NSDictionary, NSData;

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying> {

	HMFHTTPResponseInternal* _internal;
	HMFHTTPRequest* _request;

}

@property (nonatomic,readonly) HMFHTTPResponseInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) long long statusCode; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(HMFHTTPRequest *)request;
-(long long)statusCode;
-(NSData *)body;
-(HMFHTTPResponseInternal *)internal;
-(NSDictionary *)headerFields;
-(id)attributeDescriptions;
-(id)initWithRequest:(id)arg1 internalResponse:(id)arg2 ;
@end

