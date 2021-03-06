/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, NSArray, NSMutableDictionary;

@interface _HKSleepQueryResultBuilder : NSObject {

	NSDateInterval* _resultInterval;
	NSArray* _sourceOrder;
	NSMutableDictionary* _samplesByCategoryValue;
	NSMutableDictionary* _samplesBySource;

}
-(id)_categorySampleBufferForCategoryValue:(long long)arg1 ;
-(id)_categorySampleBufferForSource:(id)arg1 ;
-(id)_organizeSamplesBySource:(id)arg1 ;
-(id)_createDateIntervalsFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithResultInterval:(id)arg1 sourceOrder:(id)arg2 ;
-(void)addSleepSamples:(id)arg1 ;
-(id)calculateResult;
@end

