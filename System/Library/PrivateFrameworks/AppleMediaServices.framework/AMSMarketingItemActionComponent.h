/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSString;

@interface AMSMarketingItemActionComponent : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,readonly) NSURL * artworkURL; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSDictionary * rawValues;              //@synthesize rawValues=_rawValues - In the implementation block
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)artworkURL;
-(NSDictionary *)rawValues;
@end

