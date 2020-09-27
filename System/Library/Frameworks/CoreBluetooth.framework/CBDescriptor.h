/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor : CBAttribute {

	CBCharacteristic* _characteristic;
	id _value;
	CBPeripheral* _peripheral;
	NSNumber* _handle;

}

@property (assign,nonatomic) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (retain) id value;                                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                    //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                            //@synthesize handle=_handle - In the implementation block
-(id)description;
-(NSNumber *)handle;
-(void)invalidate;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(CBPeripheral *)peripheral;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
-(CBCharacteristic *)characteristic;
@end

