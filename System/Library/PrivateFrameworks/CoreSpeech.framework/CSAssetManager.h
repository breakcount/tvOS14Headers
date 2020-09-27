/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerAssetMetaUpdateMonitorDelegate.h>
#import <libobjc.A.dylib/CSSpeechEndpointAssetMetaUpdateMonitorDelegate.h>
#import <libobjc.A.dylib/CSAdBlockerMetaUpdateMonitorDelegate.h>
#import <libobjc.A.dylib/CSAssetControllerDelegate.h>
#import <libobjc.A.dylib/CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate.h>
#import <libobjc.A.dylib/CSLanguageCodeUpdateMonitorDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CSPolicy, NSString, CSAssetDownloadingOption, NSMutableDictionary, NSObject;

@interface CSAssetManager : NSObject <CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSAdBlockerMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate> {

	CSPolicy* _enablePolicy;
	NSString* _currentLanguageCode;
	CSAssetDownloadingOption* _downloadingOption;
	NSMutableDictionary* _observers;
	NSObject*<OS_dispatch_source> _downloadTimer;
	long long _downloadTimerCount;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * currentLanguageCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)currentLanguageCode;
-(void)_fetchRemoteMetaData;
-(id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)setAssetDownloadingOption:(id)arg1 ;
-(void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assetOfType:(unsigned long long)arg1 providerType:(unsigned long long)arg2 language:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithDownloadOption:(id)arg1 ;
-(void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(void)_createPeriodicalDownloadTimer;
-(void)_startPeriodicalDownload;
-(void)_stopPeriodicalDownload;
-(BOOL)_canFetchRemoteAsset:(unsigned long long)arg1 ;
-(id)assetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(BOOL)arg2 ;
-(void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(BOOL)arg2 ;
-(void)CSAdBlockerMetaUpdateMonitor:(id)arg1 didReceiveNewAdBlockerAssetMetaData:(BOOL)arg2 ;
-(void)CSAssetController:(id)arg1 didDownloadNewAssetForType:(unsigned long long)arg2 ;
-(void)CSSpeakerRecognitionAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeakerRecognitionAssetMetaData:(BOOL)arg2 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(id)assetForCurrentLanguageOfType:(unsigned long long)arg1 ;
-(id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 ;
-(void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
@end
