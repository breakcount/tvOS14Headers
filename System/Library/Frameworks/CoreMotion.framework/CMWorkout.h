/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* fSessionId;
	long long fType;
	long long fLocationType;
	NSDate* fStartDate;
	NSDate* fEndDate;
	BOOL fIsUserInitiated;
	BOOL _isUserInitiated;

}

@property (nonatomic,readonly) BOOL isUserInitiated;                //@synthesize isUserInitiated=_isUserInitiated - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long locationType; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)workoutName:(long long)arg1 ;
+(BOOL)workoutIsTypeWalking:(long long)arg1 ;
+(BOOL)workoutIsTypeRunning:(long long)arg1 ;
+(long long)workoutLocationTypeFromCMWorkoutType:(long long)arg1 ;
+(id)workoutLocationName:(long long)arg1 ;
+(int)CLMotionActivityTypeFromCMWorkoutType:(long long)arg1 ;
+(long long)CMWorkoutTypeFromCLMotionActivityType:(int)arg1 ;
+(long long)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(long long)arg1 ;
+(long long)CMSwimWorkoutLocationFromCMWorkoutLocationType:(long long)arg1 ;
+(BOOL)workoutIsTypePedestrian:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(BOOL)isUserInitiated;
-(void)setLocationType:(long long)arg1 ;
-(long long)locationType;
-(NSUUID *)sessionId;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 ;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 ;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(void)setIsUserInitiated:(BOOL)arg1 ;
-(void)setWorkoutType:(long long)arg1 ;
@end

