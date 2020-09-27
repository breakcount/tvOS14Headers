/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKElectrocardiogramVoltageMeasurement : NSObject {

	float _leadIVoltage;
	double _timeSinceSampleStart;

}

@property (nonatomic,readonly) double timeSinceSampleStart;              //@synthesize timeSinceSampleStart=_timeSinceSampleStart - In the implementation block
-(id)initWithLeadIVoltage:(float)arg1 timeSinceSampleStart:(double)arg2 ;
-(id)quantityForLead:(long long)arg1 ;
-(double)timeSinceSampleStart;
@end

