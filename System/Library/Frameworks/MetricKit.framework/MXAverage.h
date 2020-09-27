/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurementFormatter, NSMeasurement;

@interface MXAverage : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _averageMeasurementFormatter;
	NSMeasurement* _averageMeasurement;
	long long _sampleCount;
	double _standardDeviation;

}

@property (readonly) NSMeasurement * averageMeasurement;              //@synthesize averageMeasurement=_averageMeasurement - In the implementation block
@property (readonly) long long sampleCount;                           //@synthesize sampleCount=_sampleCount - In the implementation block
@property (readonly) double standardDeviation;                        //@synthesize standardDeviation=_standardDeviation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sampleCount;
-(double)standardDeviation;
-(id)toDictionary;
-(NSMeasurement *)averageMeasurement;
-(id)initWithDoubleValue:(double)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 unit:(id)arg4 ;
-(id)initWithMeasurement:(id)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 ;
@end

