/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSPairedDeviceStateMonitorDelegate;
@class DNDSPairedDevice;

@interface DNDSPairedDeviceStateMonitor : NSObject {

	id<DNDSPairedDeviceStateMonitorDelegate> _delegate;

}

@property (copy,readonly) DNDSPairedDevice * pairedDevice; 
@property (assign,nonatomic,__weak) id<DNDSPairedDeviceStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DNDSPairedDeviceStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<DNDSPairedDeviceStateMonitorDelegate>)arg1 ;
-(void)resume;
-(DNDSPairedDevice *)pairedDevice;
-(id)initWithIDSService:(id)arg1 ;
@end

