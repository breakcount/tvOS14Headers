/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSoftwareUpdateCheckingMonitor : VTEventMonitor {

	int _notifyToken;
	BOOL _isSoftwareUpdateCheckingRunning;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isSoftwareUpdateCheckingRunning;
-(BOOL)_checkSoftwareUpdateCheckingState;
-(void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)arg1 ;
-(unsigned char)_softwareUpdateCheckingState;
-(void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(BOOL)arg2 ;
-(void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)arg1 ;
@end

