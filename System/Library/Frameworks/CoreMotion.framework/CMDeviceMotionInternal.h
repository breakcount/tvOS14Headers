/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {

	SCD_Struct_CM1 fGravity;
	SCD_Struct_CM1 fUserAcceleration;
	SCD_Struct_CM1 fRotationRate;
	CMAttitude* fAttitude;
	SCD_Struct_CM1 fMagneticField;
	int fMagneticFieldCalibrationLevel;
	BOOL fDoingYawCorrection;
	BOOL fDoingBiasEstimation;
	float fHeading;
	float fHeadingAccuracy;
	long long fSensorLocation;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setDeviceMotion:(SCD_Struct_CM4)arg1 internal:(SCD_Struct_CM5)arg2 ;
-(id)initWithDeviceMotion:(SCD_Struct_CM4)arg1 internal:(SCD_Struct_CM5)arg2 ;
@end

