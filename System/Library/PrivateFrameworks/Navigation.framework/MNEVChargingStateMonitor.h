/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNEVChargingStateMonitorDelegate;
@class NSDate, NSTimer, NSMeasurement;

@interface MNEVChargingStateMonitor : NSObject {

	id<MNEVChargingStateMonitorDelegate> _delegate;
	BOOL _shouldShowChargingInfo;
	NSDate* _startDate;
	NSTimer* _timer;
	NSMeasurement* _targetBatteryCharge;

}

@property (nonatomic,readonly) NSMeasurement * targetBatteryCharge;                             //@synthesize targetBatteryCharge=_targetBatteryCharge - In the implementation block
@property (assign,nonatomic,__weak) id<MNEVChargingStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<MNEVChargingStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<MNEVChargingStateMonitorDelegate>)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(void)_startTimer;
-(void)_notifyShouldShowChargingInfo;
-(id)initWithTargetBatteryCharge:(id)arg1 ;
-(NSMeasurement *)targetBatteryCharge;
@end

