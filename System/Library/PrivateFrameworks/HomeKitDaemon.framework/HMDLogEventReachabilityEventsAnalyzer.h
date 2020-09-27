/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>

@class HMDEventCountersManager;

@interface HMDLogEventReachabilityEventsAnalyzer : HMDLogEventAnalyzer {

	HMDEventCountersManager* _eventCountersManager;

}

@property (nonatomic,readonly) HMDEventCountersManager * eventCountersManager;              //@synthesize eventCountersManager=_eventCountersManager - In the implementation block
-(HMDEventCountersManager *)eventCountersManager;
-(void)processLogEvent:(id)arg1 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 eventCountersManager:(id)arg3 ;
-(void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1 ;
-(void)_handleCameraRecordingReachabilityLogEvent:(id)arg1 ;
@end

