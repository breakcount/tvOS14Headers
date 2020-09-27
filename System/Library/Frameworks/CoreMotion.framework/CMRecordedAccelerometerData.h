/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMAccelerometerData.h>

@class NSDate;

@interface CMRecordedAccelerometerData : CMAccelerometerData {

	double _startDateValue;
	SCD_Struct_CM1 _accelerationValue;
	double _timestampValue;
	unsigned long long _identifier;

}

@property (readonly) double startTime; 
@property (readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(double)startTime;
-(double)timestamp;
-(NSDate *)startDate;
-(SCD_Struct_CM1)acceleration;
-(void)resetWithData:(CMAccel100*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(id)initWithData:(CMAccel100*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
@end

