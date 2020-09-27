/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@class NSDictionary;

@interface CSTrialAssetDownloadMonitor : CSEventMonitor {

	NSDictionary* _trialClientDict;

}
+(id)sharedInstance;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)downloadAndNotifyTrialAssetsUpdateForNamespace:(id)arg1 onQueue:(id)arg2 ;
-(id)_trailStageDirectoryForAsset:(id)arg1 ;
-(BOOL)_validateDownloadedAssetForAssetType:(unsigned long long)arg1 ;
-(void)_notifyTrialAssetDownloadForAssetType:(unsigned long long)arg1 ;
@end

