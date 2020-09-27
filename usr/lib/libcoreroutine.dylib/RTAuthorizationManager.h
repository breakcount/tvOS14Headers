/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@class RTInvocationDispatcher, RTPlatform, RTUserSessionMonitor;

@interface RTAuthorizationManager : RTService {

	BOOL _supported;
	BOOL _enabled;
	BOOL _ready;
	RTInvocationDispatcher* _dispatcher;
	RTPlatform* _platform;
	RTUserSessionMonitor* _userSessionMonitor;

}

@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,getter=isSupported,nonatomic) BOOL supported;                //@synthesize supported=_supported - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isReady,nonatomic) BOOL ready;                        //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                            //@synthesize platform=_platform - In the implementation block
@property (retain) RTUserSessionMonitor * userSessionMonitor;                  //@synthesize userSessionMonitor=_userSessionMonitor - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setup;
-(BOOL)isReady;
-(BOOL)isEnabled;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)isSupported;
-(void)setup;
-(void)_shutdown;
-(BOOL)isLocationServicesEnabled;
-(RTInvocationDispatcher *)dispatcher;
-(void)setReady:(BOOL)arg1 ;
-(void)setRoutineEnabled:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchRoutineEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(id)initWithPlatform:(id)arg1 userSessionMonitor:(id)arg2 ;
-(void)onUserSessionChangeNotification:(id)arg1 ;
-(BOOL)isCoreRoutineLocationClientEnabled;
-(RTUserSessionMonitor *)userSessionMonitor;
-(void)fetchRoutineSupportedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldPersistLocations;
-(void)updateRoutineEnabled:(BOOL)arg1 ;
-(void)handleAppResetChangeNotification;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setUserSessionMonitor:(RTUserSessionMonitor *)arg1 ;
@end
