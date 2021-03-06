/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Assistant/Plugins/Routine.assistantBundle/Routine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SALocalSearchVehicleEventSearch.h>

@protocol OS_dispatch_queue;
@class NSObject, RTRoutineManager, GEOLocationShifter;

@interface RTAssistantVehicleEventSearch : SALocalSearchVehicleEventSearch {

	NSObject*<OS_dispatch_queue> _queue;
	RTRoutineManager* _routineManager;
	GEOLocationShifter* _locationShifter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTRoutineManager * routineManager;                 //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) GEOLocationShifter * locationShifter;              //@synthesize locationShifter=_locationShifter - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(GEOLocationShifter *)locationShifter;
-(void)setLocationShifter:(GEOLocationShifter *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end

