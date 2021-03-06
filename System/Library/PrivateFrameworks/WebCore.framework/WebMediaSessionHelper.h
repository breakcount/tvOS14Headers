/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionHelperiOS* _callback;
	RetainPtr<AVRouteDetector>* _routeDetector;
	BOOL _monitoringAirPlayRoutes;
	BOOL _startMonitoringAirPlayRoutesPending;

}
-(void)dealloc;
-(id)initWithCallback:(MediaSessionHelperiOS*)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)clearCallback;
-(BOOL)hasWirelessTargetsAvailable;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)activeOutputDeviceDidChange:(id)arg1 ;
-(void)mediaServerConnectionDied:(id)arg1 ;
-(void)carPlayIsConnectedDidChange:(id)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
@end

