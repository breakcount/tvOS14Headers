/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDSoftwareUpdateStartedEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _automaticUpdateEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAutomaticUpdateEnabled,nonatomic) BOOL automaticUpdateEnabled;              //@synthesize automaticUpdateEnabled=_automaticUpdateEnabled - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventUpdateStartedWithAutomaticUpdateEnabled:(BOOL)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setAutomaticUpdateEnabled:(BOOL)arg1 ;
-(BOOL)isAutomaticUpdateEnabled;
@end

