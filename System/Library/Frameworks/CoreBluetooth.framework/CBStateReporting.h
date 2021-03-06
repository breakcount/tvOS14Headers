/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBStateReporting
@property (nonatomic,readonly) long long bluetoothState; 
@property (nonatomic,copy) id bluetoothStateChangedHandler; 
@required
-(long long)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(/*^block*/id)arg1;

@end

