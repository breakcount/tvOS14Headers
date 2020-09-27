/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MTMetricsDataPredicate : NSObject {

	NSDictionary* _fieldPredicates;

}

@property (nonatomic,retain) NSDictionary * fieldPredicates;              //@synthesize fieldPredicates=_fieldPredicates - In the implementation block
+(id)predicateWithType:(id)arg1 argument:(id)arg2 ;
+(id)predicateWithConfigData:(id)arg1 ;
-(id)initWithFormat:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(void)setFieldPredicates:(NSDictionary *)arg1 ;
-(NSDictionary *)fieldPredicates;
-(BOOL)evaluateWithMetricsData:(id)arg1 ;
@end

