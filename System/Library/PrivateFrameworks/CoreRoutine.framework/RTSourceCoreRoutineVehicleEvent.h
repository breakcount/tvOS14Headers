/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTSourceCoreRoutine.h>

@class RTVehicleEvent;

@interface RTSourceCoreRoutineVehicleEvent : RTSourceCoreRoutine {

	RTVehicleEvent* _vehicleEvent;

}

@property (nonatomic,readonly) RTVehicleEvent * vehicleEvent;              //@synthesize vehicleEvent=_vehicleEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(RTVehicleEvent *)vehicleEvent;
-(id)initWithVehicleEvent:(id)arg1 ;
@end

