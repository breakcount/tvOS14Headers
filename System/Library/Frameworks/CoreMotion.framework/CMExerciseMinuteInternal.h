/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMExerciseMinuteData;

@interface CMExerciseMinuteInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	BOOL fStartedUpdates;
	CMExerciseMinuteData* fMostRecentRecord;
	/*^block*/id fHandler;

}
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queryExerciseMinutesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopUpdates;
@end

