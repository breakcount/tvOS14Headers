/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiUsageSession.h>

@interface WiFiUsageDeviceSession : WiFiUsageSession {

	BOOL _firstDisplayOn;

}
-(id)initWithInterfaceName:(id)arg1 ;
-(id)metricName;
-(void)systemWakeStateDidChange:(BOOL)arg1 wokenByWiFi:(BOOL)arg2 ;
-(void)displayStateDidChange:(BOOL)arg1 ;
@end

