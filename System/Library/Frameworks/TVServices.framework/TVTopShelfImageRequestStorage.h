/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TVTopShelfImageRequestStorage : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _requests;

}

@property (nonatomic,readonly) NSMutableDictionary * requests;              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSMutableDictionary *)requests;
-(id)_initWithRequests:(id)arg1 ;
-(void)setImageRequest:(id)arg1 forTraits:(unsigned long long)arg2 ;
-(id)imageRequestWithTraits:(unsigned long long)arg1 ;
-(void)enumerateImageRequestsUsingBlock:(/*^block*/id)arg1 ;
@end
