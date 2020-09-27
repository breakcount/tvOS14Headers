/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class AWDHomeKitPresenceReport, NSString;

@interface HomeKitPresenceReportEvent : HMDLogEvent <HMDAWDLogEvent> {

	AWDHomeKitPresenceReport* _metric;

}

@property (nonatomic,readonly) AWDHomeKitPresenceReport * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(id)init;
-(AWDHomeKitPresenceReport *)metric;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

