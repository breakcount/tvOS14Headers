/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@protocol OS_dispatch_source;
@class NSObject, RTDarwinNotificationHelper, NSArray, RTXPCActivityManager;

@interface RTPurgeManager : RTService {

	NSObject*<OS_dispatch_source> _memoryWarningDispatchSource;
	long long _pressureState;
	RTDarwinNotificationHelper* _notificationHelper;
	NSArray* _purgers;
	RTXPCActivityManager* _xpcActivityManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryWarningDispatchSource;              //@synthesize memoryWarningDispatchSource=_memoryWarningDispatchSource - In the implementation block
@property (assign,nonatomic) long long pressureState;                                                //@synthesize pressureState=_pressureState - In the implementation block
@property (nonatomic,retain) RTDarwinNotificationHelper * notificationHelper;                        //@synthesize notificationHelper=_notificationHelper - In the implementation block
@property (nonatomic,retain) NSArray * purgers;                                                      //@synthesize purgers=_purgers - In the implementation block
@property (nonatomic,readonly) RTXPCActivityManager * xpcActivityManager;                            //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
+(id)purgeTypeToString:(long long)arg1 ;
+(id)earliestAllowedRawLocationDateWithReferenceDate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)purge:(/*^block*/id)arg1 ;
-(void)_shutdown;
-(void)clearRoutineWithHandler:(/*^block*/id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 platform:(id)arg2 purgers:(id)arg3 xpcActivityManager:(id)arg4 ;
-(long long)pressureState;
-(void)setPressureState:(long long)arg1 ;
-(void)handleLanguageChangeNotification;
-(void)onCoreLocationPrivacyReset;
-(void)_purge:(/*^block*/id)arg1 ;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)_unregisterForMemoryPressureWarnings;
-(void)_registerForMemoryPressureWarnings;
-(void)_purgeWithType:(long long)arg1 referenceDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_handleLanguageChangeNotification;
-(NSObject*<OS_dispatch_source>)memoryWarningDispatchSource;
-(void)setMemoryWarningDispatchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(NSArray *)purgers;
-(void)setPurgers:(NSArray *)arg1 ;
@end

