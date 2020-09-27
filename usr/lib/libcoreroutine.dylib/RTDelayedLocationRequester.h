/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTDelayedLocationRequesterDelegate, OS_dispatch_queue;
@class RTLocationManager, RTTimerManager, RTTimer, NSObject, NSDate;

@interface RTDelayedLocationRequester : NSObject {

	id<RTDelayedLocationRequesterDelegate> _delegate;
	RTLocationManager* _locationManager;
	RTTimerManager* _timerManager;
	RTTimer* _delayTimer;
	RTTimer* _activeTimer;
	double _maxHorizontalAccuracy;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _fireDate;
	NSDate* _activeStartDate;

}

@property (nonatomic,readonly) RTLocationManager * locationManager;                        //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTTimerManager * timerManager;                              //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) RTTimer * delayTimer;                                         //@synthesize delayTimer=_delayTimer - In the implementation block
@property (nonatomic,retain) RTTimer * activeTimer;                                        //@synthesize activeTimer=_activeTimer - In the implementation block
@property (nonatomic,readonly) double maxHorizontalAccuracy;                               //@synthesize maxHorizontalAccuracy=_maxHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * fireDate;                                            //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,retain) NSDate * activeStartDate;                                     //@synthesize activeStartDate=_activeStartDate - In the implementation block
@property (nonatomic,retain) id<RTDelayedLocationRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(id<RTDelayedLocationRequesterDelegate>)delegate;
-(void)setDelegate:(id<RTDelayedLocationRequesterDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)shutdown;
-(RTLocationManager *)locationManager;
-(RTTimer *)activeTimer;
-(void)setActiveTimer:(RTTimer *)arg1 ;
-(RTTimer *)delayTimer;
-(void)setDelayTimer:(RTTimer *)arg1 ;
-(double)maxHorizontalAccuracy;
-(id)initWithLocationManager:(id)arg1 maxHorizontalAccuracy:(double)arg2 queue:(id)arg3 ;
-(void)shutdownWithHandler:(/*^block*/id)arg1 ;
-(RTTimerManager *)timerManager;
-(void)onLocationNotification:(id)arg1 ;
-(void)_onLocation:(id)arg1 ;
-(void)_shutdownWithHandler:(/*^block*/id)arg1 ;
-(void)updateFireDate:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 timerManager:(id)arg2 maxHorizontalAccuracy:(double)arg3 queue:(id)arg4 ;
-(void)_stopUpdatingLocation;
-(void)setActiveStartDate:(NSDate *)arg1 ;
-(void)_onActiveTimerExpiry;
-(NSDate *)activeStartDate;
-(void)_updateDelayTimer;
-(void)_onDelayTimerExpiry;
-(void)_startUpdatingLocation;
-(void)updateFireDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateFireDate:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

