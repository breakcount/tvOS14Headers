/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface _HKFitnessMachineSessionConfiguration : NSObject <NSSecureCoding> {

	NSUUID* _sessionUUID;
	NSUUID* _connectionUUID;
	NSUUID* _machineUUID;
	unsigned long long _machineType;
	NSString* _machineName;
	NSString* _machineBrand;

}

@property (nonatomic,readonly) NSUUID * sessionUUID;                        //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * connectionUUID;                     //@synthesize connectionUUID=_connectionUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * machineUUID;                        //@synthesize machineUUID=_machineUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long machineType;              //@synthesize machineType=_machineType - In the implementation block
@property (nonatomic,readonly) NSString * machineName;                      //@synthesize machineName=_machineName - In the implementation block
@property (nonatomic,readonly) NSString * machineBrand;                     //@synthesize machineBrand=_machineBrand - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)connectionUUID;
-(NSUUID *)sessionUUID;
-(void)_setConnectionUUID:(id)arg1 ;
-(void)_setSessionUUID:(id)arg1 ;
-(void)_setMachineUUID:(id)arg1 ;
-(void)_setMachineType:(unsigned long long)arg1 ;
-(void)_setMachineName:(id)arg1 ;
-(void)_setMachineBrand:(id)arg1 ;
-(NSUUID *)machineUUID;
-(unsigned long long)machineType;
-(NSString *)machineName;
-(NSString *)machineBrand;
@end

