/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NWAccumulator;

@interface NWDeviceReport : NSObject {

	BOOL _batteryExternalPowerIsConnected;
	BOOL _batteryIsCharging;
	BOOL _batteryFullyCharged;
	BOOL _batteryAtWarnLevel;
	BOOL _batteryAtCriticalLevel;
	BOOL _devicePluggedIn;
	BOOL _deviceScreenOn;
	unsigned _batteryPercentage;
	unsigned _batteryCurrentCapacity;
	unsigned _batteryMaximumCapacity;
	unsigned _batteryDesignCapacity;
	unsigned _batteryAbsoluteCapacity;
	unsigned _batteryVoltage;
	unsigned _batteryTimeRemaining;
	unsigned _motionState;
	unsigned _thermalPressure;
	NSString* _serialNumber;
	NWAccumulator* _batteryAccumulator;

}

@property (assign,nonatomic) unsigned batteryPercentage;                        //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (assign,nonatomic) unsigned batteryCurrentCapacity;                   //@synthesize batteryCurrentCapacity=_batteryCurrentCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryMaximumCapacity;                   //@synthesize batteryMaximumCapacity=_batteryMaximumCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryDesignCapacity;                    //@synthesize batteryDesignCapacity=_batteryDesignCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryAbsoluteCapacity;                  //@synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryVoltage;                           //@synthesize batteryVoltage=_batteryVoltage - In the implementation block
@property (assign,nonatomic) unsigned batteryTimeRemaining;                     //@synthesize batteryTimeRemaining=_batteryTimeRemaining - In the implementation block
@property (assign,nonatomic) BOOL batteryExternalPowerIsConnected;              //@synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected - In the implementation block
@property (assign,nonatomic) BOOL batteryIsCharging;                            //@synthesize batteryIsCharging=_batteryIsCharging - In the implementation block
@property (assign,nonatomic) BOOL batteryFullyCharged;                          //@synthesize batteryFullyCharged=_batteryFullyCharged - In the implementation block
@property (assign,nonatomic) BOOL batteryAtWarnLevel;                           //@synthesize batteryAtWarnLevel=_batteryAtWarnLevel - In the implementation block
@property (assign,nonatomic) BOOL batteryAtCriticalLevel;                       //@synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL devicePluggedIn;                              //@synthesize devicePluggedIn=_devicePluggedIn - In the implementation block
@property (assign,nonatomic) BOOL deviceScreenOn;                               //@synthesize deviceScreenOn=_deviceScreenOn - In the implementation block
@property (assign,nonatomic) unsigned motionState;                              //@synthesize motionState=_motionState - In the implementation block
@property (assign,nonatomic) unsigned thermalPressure;                          //@synthesize thermalPressure=_thermalPressure - In the implementation block
@property (nonatomic,retain) NWAccumulator * batteryAccumulator;                //@synthesize batteryAccumulator=_batteryAccumulator - In the implementation block
+(id)createAccumulator:(id)arg1 ;
-(id)description;
-(NSString *)serialNumber;
-(void)setBatteryAccumulator:(NWAccumulator *)arg1 ;
-(void)setBatteryPercentage:(unsigned)arg1 ;
-(void)setBatteryCurrentCapacity:(unsigned)arg1 ;
-(void)setBatteryMaximumCapacity:(unsigned)arg1 ;
-(void)setBatteryDesignCapacity:(unsigned)arg1 ;
-(void)setBatteryAbsoluteCapacity:(unsigned)arg1 ;
-(void)setBatteryVoltage:(unsigned)arg1 ;
-(void)setBatteryTimeRemaining:(unsigned)arg1 ;
-(void)setBatteryExternalPowerIsConnected:(BOOL)arg1 ;
-(void)setBatteryIsCharging:(BOOL)arg1 ;
-(void)setBatteryFullyCharged:(BOOL)arg1 ;
-(void)setBatteryAtWarnLevel:(BOOL)arg1 ;
-(void)setBatteryAtCriticalLevel:(BOOL)arg1 ;
-(void)setDevicePluggedIn:(BOOL)arg1 ;
-(void)setDeviceScreenOn:(BOOL)arg1 ;
-(unsigned)motionState;
-(void)setMotionState:(unsigned)arg1 ;
-(unsigned)thermalPressure;
-(void)setThermalPressure:(unsigned)arg1 ;
-(unsigned)batteryPercentage;
-(unsigned)batteryCurrentCapacity;
-(unsigned)batteryMaximumCapacity;
-(unsigned)batteryDesignCapacity;
-(unsigned)batteryAbsoluteCapacity;
-(unsigned)batteryVoltage;
-(unsigned)batteryTimeRemaining;
-(BOOL)batteryExternalPowerIsConnected;
-(BOOL)batteryIsCharging;
-(BOOL)batteryFullyCharged;
-(BOOL)batteryAtWarnLevel;
-(BOOL)batteryAtCriticalLevel;
-(BOOL)devicePluggedIn;
-(BOOL)deviceScreenOn;
-(NWAccumulator *)batteryAccumulator;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)createAWDReport;
@end

