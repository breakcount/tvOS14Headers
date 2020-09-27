/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class HKQuantity;

@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics {

	unsigned long long _workoutActivityType;
	HKQuantity* _averageHeartRate;
	HKQuantity* _maximumHeartRate;

}

@property (setter=_setAverageHeartRate:,nonatomic,retain) HKQuantity * averageHeartRate;              //@synthesize averageHeartRate=_averageHeartRate - In the implementation block
@property (setter=_setMaximumHeartRate:,nonatomic,retain) HKQuantity * maximumHeartRate;              //@synthesize maximumHeartRate=_maximumHeartRate - In the implementation block
@property (nonatomic,readonly) unsigned long long workoutActivityType;                                //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)workoutActivityType;
-(HKQuantity *)averageHeartRate;
-(void)_setAverageHeartRate:(id)arg1 ;
-(HKQuantity *)maximumHeartRate;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4 ;
-(void)_setMaximumHeartRate:(id)arg1 ;
@end

