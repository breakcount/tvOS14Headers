/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSpeechXPCServiceProtocol <NSObject>
@required
-(oneway void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)prewarmIfNeededWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)stopPresynthesizedAudioRequest;
-(oneway void)startSynthesisRequest:(id)arg1;
-(oneway void)startPresynthesizedAudioRequest:(id)arg1;
-(oneway void)cachePresynthesizedAudioRequest:(id)arg1;
-(oneway void)estimateDurationWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)setLogToFile:(BOOL)arg1;
-(oneway void)getLogToFile:(/*^block*/id)arg1;
-(oneway void)getTTSServerVoicesWithFilter:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)forwardStreamObject:(id)arg1;
-(oneway void)cancelDownloads:(/*^block*/id)arg1;
-(oneway void)invokeDaemon:(/*^block*/id)arg1;
-(oneway void)killDaemon;
-(oneway void)beginAudioPowerUpdateWithReply:(/*^block*/id)arg1;
-(oneway void)endAudioPowerUpdate;
-(oneway void)cleanUnusedAssets:(/*^block*/id)arg1;
-(oneway void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2;
-(oneway void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5;
-(oneway void)updateWithConnectionIdentifier:(id)arg1;
-(oneway void)queryPhaticCapabilityWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)startSpeechRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)pauseSpeechRequestAtMark:(long long)arg1;
-(oneway void)continueSpeechRequest;
-(oneway void)stopSpeechRequestAtMark:(long long)arg1;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)getSpeechIsActiveReply:(/*^block*/id)arg1;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/id)arg1;
-(oneway void)getLocalVoicesForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getLocalVoiceResourcesReply:(/*^block*/id)arg1;

@end

