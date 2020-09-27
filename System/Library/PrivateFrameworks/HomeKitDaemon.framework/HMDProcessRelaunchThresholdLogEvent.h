/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSNumber;

@interface HMDProcessRelaunchThresholdLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSNumber* _timeSincePreviousProcessLaunch;

}

@property (nonatomic,readonly) NSNumber * timeSincePreviousProcessLaunch;              //@synthesize timeSincePreviousProcessLaunch=_timeSincePreviousProcessLaunch - In the implementation block
+(id)uuid;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithTimeSincePreviousLaunch:(id)arg1 ;
-(NSNumber *)timeSincePreviousProcessLaunch;
@end

