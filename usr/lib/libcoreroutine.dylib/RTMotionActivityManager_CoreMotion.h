/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTMotionActivityManager.h>

@protocol OS_dispatch_source;
@class NSMutableArray, RTMotionActivity, CMMotionActivityManager, NSOperationQueue, NSObject, NSMutableDictionary, NSDate;

@interface RTMotionActivityManager_CoreMotion : RTMotionActivityManager {

	BOOL _dominantMotionActivityBootstrapped;
	BOOL _motionActivityAvailable;
	NSMutableArray* _motionActivities;
	RTMotionActivity* _dominantMotionActivity;
	unsigned long long _settledState;
	CMMotionActivityManager* _motionActivityManager;
	NSOperationQueue* _operationQueue;
	long long _interestedInActivity;
	NSObject*<OS_dispatch_source> _dominantMotionActivityTimer;
	unsigned long long _vehicleConnectedState;
	NSMutableDictionary* _activityAlarms;
	NSDate* _lastQueryForMotionActivity;

}

@property (nonatomic,retain) CMMotionActivityManager * motionActivityManager;                        //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (assign,nonatomic) BOOL motionActivityAvailable;                                           //@synthesize motionActivityAvailable=_motionActivityAvailable - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) long long interestedInActivity;                                         //@synthesize interestedInActivity=_interestedInActivity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dominantMotionActivityTimer;              //@synthesize dominantMotionActivityTimer=_dominantMotionActivityTimer - In the implementation block
@property (assign,nonatomic) unsigned long long vehicleConnectedState;                               //@synthesize vehicleConnectedState=_vehicleConnectedState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityAlarms;                                   //@synthesize activityAlarms=_activityAlarms - In the implementation block
@property (nonatomic,retain) NSDate * lastQueryForMotionActivity;                                    //@synthesize lastQueryForMotionActivity=_lastQueryForMotionActivity - In the implementation block
@property (assign,nonatomic) BOOL dominantMotionActivityBootstrapped;                                //@synthesize dominantMotionActivityBootstrapped=_dominantMotionActivityBootstrapped - In the implementation block
@property (nonatomic,retain) NSMutableArray * motionActivities;                                      //@synthesize motionActivities=_motionActivities - In the implementation block
@property (nonatomic,retain) RTMotionActivity * dominantMotionActivity;                              //@synthesize dominantMotionActivity=_dominantMotionActivity - In the implementation block
@property (assign,nonatomic) unsigned long long settledState;                                        //@synthesize settledState=_settledState - In the implementation block
+(double)durationForTrigger:(unsigned)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setDominantMotionActivity:(RTMotionActivity *)arg1 ;
-(RTMotionActivity *)dominantMotionActivity;
-(void)_shutdown;
-(id)initWithPlatform:(id)arg1 ;
-(unsigned long long)settledState;
-(void)setSettledState:(unsigned long long)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(CMMotionActivityManager *)motionActivityManager;
-(void)setMotionActivityManager:(CMMotionActivityManager *)arg1 ;
-(unsigned long long)vehicleConnectedState;
-(void)_fetchMotionActivitiesFromStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchPredominantMotionActivityTypeFromStartDate:(id)arg1 toEndDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_processDominantActivity;
-(void)_invalidateActivityAlarms;
-(NSDate *)lastQueryForMotionActivity;
-(NSMutableArray *)motionActivities;
-(void)setLastQueryForMotionActivity:(NSDate *)arg1 ;
-(void)_bootstrapDominantActivityWithMotionActivites:(id)arg1 ;
-(long long)interestedInActivity;
-(void)setInterestedInActivity:(long long)arg1 ;
-(void)_fetchMotionActivitiesIfNeeded;
-(void)_resubscribeForActivityAlarms;
-(void)onVehicleConnectedNotification;
-(void)onVehicleDisconnectedNotification;
-(void)onVehicleExitNotification;
-(void)setDominantMotionActivityBootstrapped:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)dominantMotionActivityTimer;
-(BOOL)motionActivityAvailable;
-(void)_processSettledState;
-(void)setVehicleConnectedState:(unsigned long long)arg1 ;
-(void)_onVehicleConnectedNotification;
-(void)_onVehicleDisconnectedNotification;
-(void)onActivity:(id)arg1 ;
-(BOOL)dominantMotionActivityBootstrapped;
-(void)_onActivity:(id)arg1 ;
-(void)_subscribeForMotionAlarmTypes:(const unsigned*)arg1 alarmsCount:(unsigned long long)arg2 ;
-(NSMutableDictionary *)activityAlarms;
-(id)_rtAlarmForTrigger:(unsigned)arg1 ;
-(void)_invalidateAlarm:(id)arg1 ;
-(void)_processActivityAlarm:(id)arg1 error:(id)arg2 ;
-(void)setActivityAlarms:(NSMutableDictionary *)arg1 ;
-(void)setMotionActivities:(NSMutableArray *)arg1 ;
-(void)setMotionActivityAvailable:(BOOL)arg1 ;
-(void)setDominantMotionActivityTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

