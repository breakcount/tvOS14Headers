/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKDateBounded.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDateInterval, NSString;

@interface _HKSleepQueryResult : NSObject <_HKDateBounded, NSSecureCoding> {

	NSDictionary* _resultsByCategoryValue;
	NSDictionary* _samplesBySource;
	NSDateInterval* _dateInterval;
	NSDateInterval* _resultInterval;

}

@property (nonatomic,readonly) NSDateInterval * resultInterval;                  //@synthesize resultInterval=_resultInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * samplesBySource;              //@synthesize samplesBySource=_samplesBySource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)samplesForSamplesBySource:(id)arg1 ;
+(id)dateIntervalForSamples:(id)arg1 ;
+(id)_preferredSourceFromSources:(id)arg1 sourceOrder:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)endDate;
-(id)startDate;
-(id)dateInterval;
-(id)dateIntervalsForCategoryValue:(long long)arg1 ;
-(id)initWithResultInterval:(id)arg1 dateIntervalsByCategoryValue:(id)arg2 samplesBySource:(id)arg3 ;
-(id)preferredDateIntervals;
-(BOOL)_calculatePreferredDuration:(double*)arg1 categoryValue:(long long*)arg2 ;
-(NSDateInterval *)resultInterval;
-(NSDictionary *)samplesBySource;
@end

