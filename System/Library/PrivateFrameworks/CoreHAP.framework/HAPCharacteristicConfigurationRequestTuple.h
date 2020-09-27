/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic;

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject {

	BOOL _broadcastEnable;
	HAPCharacteristic* _characteristic;
	unsigned long long _broadcastInterval;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;                //@synthesize characteristic=_characteristic - In the implementation block
@property (assign,nonatomic) BOOL broadcastEnable;                              //@synthesize broadcastEnable=_broadcastEnable - In the implementation block
@property (assign,nonatomic) unsigned long long broadcastInterval;              //@synthesize broadcastInterval=_broadcastInterval - In the implementation block
+(id)configurationTupleForCharacteristic:(id)arg1 broadcastEnable:(BOOL)arg2 broadcastInterval:(unsigned long long)arg3 ;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(HAPCharacteristic *)characteristic;
-(BOOL)broadcastEnable;
-(unsigned long long)broadcastInterval;
-(void)setBroadcastEnable:(BOOL)arg1 ;
-(void)setBroadcastInterval:(unsigned long long)arg1 ;
@end

