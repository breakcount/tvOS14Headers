/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeakerRecognitionAssetMetaUpdateMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
-(const char*)_asssetMetaUpdatedKey;
-(void)_didReceiveSpeakerRecognitionAssetMetaData;
@end

