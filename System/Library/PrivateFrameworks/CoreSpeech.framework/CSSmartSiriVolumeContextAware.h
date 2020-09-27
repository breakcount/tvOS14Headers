/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSMediaPlayingMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSSiriEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSSmartSiriVolumeProcessor.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CSSmartSiriVolumeSentinel, CSAsset, CSAudioStream, NSString;

@interface CSSmartSiriVolumeContextAware : NSObject <CSMediaPlayingMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSSmartSiriVolumeProcessor> {

	NSObject*<OS_dispatch_queue> _mainQueue;
	NSObject*<OS_dispatch_queue> _distanceProcessingQueue;
	vector<float, std::__1::allocator<float> >* _noiseAudioFloatBuffer;
	vector<float, std::__1::allocator<float> >* _musicAudioFloatBuffer;
	vector<float, std::__1::allocator<float> >* _distanceAudioFloatBuffer;
	CSSmartSiriVolumeSentinel* _ssvSentinel;
	BOOL _isListenPollingStarting;
	BOOL _isMediaPlaybackOn;
	CSAsset* _currentAsset;
	unsigned long long _noiseChannelBitset;
	unsigned long long _lkfsChannelBitset;
	unsigned long long _distanceChannelBitset;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_source> _listenPollingTimer;
	long long _listenPollingTimerCount;

}

@property (nonatomic,retain) CSAudioStream * audioStream;                                   //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> listenPollingTimer;              //@synthesize listenPollingTimer=_listenPollingTimer - In the implementation block
@property (assign,nonatomic) long long listenPollingTimerCount;                             //@synthesize listenPollingTimerCount=_listenPollingTimerCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reset;
-(void)reset;
-(void)setAsset:(id)arg1 ;
-(void)_stopListening;
-(void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2 ;
-(void)_setAsset:(id)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(CSAudioStream *)audioStream;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)startSmartSiriVolume;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(id)initWithSamplingRate:(float)arg1 asset:(id)arg2 ;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3 ;
-(void)didReceiveAlarmChanged:(long long)arg1 ;
-(void)didReceiveTimerChanged:(long long)arg1 ;
-(void)didReceiveMusicVolumeChanged:(float)arg1 ;
-(void)didReceiveAlarmVolumeChanged:(float)arg1 ;
-(void)didDetectKeywordWithResult:(id)arg1 ;
-(id)_timeStampString;
-(void)_startListenPolling;
-(void)_startListenPollingWithInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startListenWithCompletion:(/*^block*/id)arg1 ;
-(void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_processAudioChunk:(id)arg1 soundType:(long long)arg2 ;
-(NSObject*<OS_dispatch_source>)listenPollingTimer;
-(void)setListenPollingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)listenPollingTimerCount;
-(void)setListenPollingTimerCount:(long long)arg1 ;
-(double)_linearToDecibel:(float)arg1 ;
-(double)_signalToSigmoid:(float)arg1 ;
-(double)_signalToSigmoidMusic:(float)arg1 ;
-(double)_dBToTTS:(float)arg1 ;
-(void)_subChunkAndProcessAudioChunk:(id)arg1 ofType:(long long)arg2 ;
-(id)_copyHistoricalAudioCircularBufferWithProviderUUID:(id)arg1 FromSample:(unsigned long long)arg2 ToSample:(unsigned long long)arg3 ;
-(float)computeTTSVolumeForSpeechLevel:(float)arg1 andMusicLevel:(float)arg2 andSpeakerDistance:(float)arg3 andNoiseActivityLevel:(float)arg4 andNoiseActivityCount:(unsigned long long)arg5 wasVoiceTrigger:(BOOL)arg6 ;
-(void)_logSSVMetrics:(id)arg1 toPath:(id)arg2 ;
-(double)_decibelToLinear:(float)arg1 ;
@end

