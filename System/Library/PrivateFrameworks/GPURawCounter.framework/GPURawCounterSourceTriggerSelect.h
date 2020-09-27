/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface GPURawCounterSourceTriggerSelect : NSObject {

	NSString* _name;
	NSDictionary* _options;

}

@property (copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(id)selectWithName:(id)arg1 options:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(NSDictionary *)options;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
@end

