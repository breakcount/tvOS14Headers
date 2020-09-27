/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _reachable;
	BOOL _targetSupportsIDSPresence;
	unsigned long long _reason;

}

@property (readonly) unsigned long long reason;                   //@synthesize reason=_reason - In the implementation block
@property (readonly) BOOL reachable;                              //@synthesize reachable=_reachable - In the implementation block
@property (readonly) BOOL targetSupportsIDSPresence;              //@synthesize targetSupportsIDSPresence=_targetSupportsIDSPresence - In the implementation block
+(id)uuid;
-(unsigned long long)reason;
-(id)eventName;
-(id)serializedEvent;
-(BOOL)reachable;
-(id)initWithReason:(unsigned long long)arg1 reachable:(BOOL)arg2 targetSupportsIDSPresence:(BOOL)arg3 ;
-(BOOL)targetSupportsIDSPresence;
@end

