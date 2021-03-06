/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSSessionConnectedMetric : NSObject <CUTCoreAnalyticsMetric> {

	NSString* _guid;

}

@property (nonatomic,readonly) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)guid;
-(id)initWithGuid:(id)arg1 ;
@end

