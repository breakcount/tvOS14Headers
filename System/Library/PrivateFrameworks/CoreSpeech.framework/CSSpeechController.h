/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSAudioConverterDelegate.h>
#import <libobjc.A.dylib/CSSmartSiriVolumeControllerDelegate.h>
#import <libobjc.A.dylib/CSAudioSessionProvidingDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSAudioAlertProvidingDelegate.h>
#import <libobjc.A.dylib/CSAudioSessionControllerDelegate.h>
#import <libobjc.A.dylib/CSXPCClientDelegate.h>
#import <libobjc.A.dylib/CSAudioDecoderDelegate.h>
#import <libobjc.A.dylib/SSRSpeakerRecognitionControllerDelegate.h>
#import <libobjc.A.dylib/CSSpeakerRecognitionAssetDownloadMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerAssetHandlerDelegate.h>
#import <libobjc.A.dylib/CSSpeechManagerDelegate.h>
#import <libobjc.A.dylib/CSContinuousVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, CSSpeechControllerDelegate, CSLanguageDetectorDelegate, CSSpeakerIdentificationDelegate, CSAudioStreamProviding, CSAudioSessionProviding, CSAudioAlertProviding, CSAudioMeterProviding, CSAudioMetricProviding;
@class NSObject, CSAudioConverter, CSAudioSampleRateConverter, NSDictionary, CSAudioZeroCounter, CSEndpointerProxy, CSAudioRecordContext, CSAudioStream, CSPlainAudioFileWriter, CSSelectiveChannelAudioFileWriter, CSSmartSiriVolumeController, NSString, CSSpeechEndHostTimeEstimator, CSContinuousVoiceTrigger, CSLanguageDetector, NSUUID, CSXPCClient, CSAudioPowerMeter, CSStopRecordingOptions, NSMutableDictionary, SSRSpeakerRecognitionController, SSRVoiceProfileManager, CSAsset, NSArray, CSMediaPlayingMonitor, CSVolumeMonitor;

@interface CSSpeechController : NSObject <CSAudioConverterDelegate, CSSmartSiriVolumeControllerDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSAudioAlertProvidingDelegate, CSAudioSessionControllerDelegate, CSXPCClientDelegate, CSAudioDecoderDelegate, SSRSpeakerRecognitionControllerDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSSpeechManagerDelegate, CSContinuousVoiceTriggerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _contextResetQueue;
	CSAudioConverter* _opusAudioConverter;
	CSAudioConverter* _narrowBandOpusConverter;
	CSAudioConverter* _audioConverter;
	CSAudioSampleRateConverter* _downsampler;
	NSDictionary* _requestedRecordSettings;
	NSDictionary* _lastVoiceTriggerInfo;
	NSDictionary* _lastRTSTriggerInfo;
	CSAudioZeroCounter* _continuousZeroCounter;
	NSObject*<OS_dispatch_queue> _audibleFeedbackQueue;
	NSObject*<OS_dispatch_group> _twoShotAudibleFeedbackDecisionGroup;
	BOOL _isOpus;
	BOOL _isSiriClientListening;
	BOOL _isNarrowBand;
	BOOL _isAudioSessionActivated;
	BOOL _deviceRoleIsStereo;
	BOOL _twoShotNotificationEnabled;
	BOOL _isMediaPlaying;
	BOOL _isAlarmPlaying;
	BOOL _isTimerPlaying;
	BOOL _isSoundPlaying;
	BOOL _isRemoteVADAvailableStream;
	BOOL _myriadPreventingTwoShotFeedback;
	BOOL _needsPostGain;
	BOOL _shouldUseLanguageDetectorForCurrentRequest;
	BOOL _didDeliverLastBuffer;
	BOOL _didDeliverFirstSpeechPacket;
	BOOL _canPerformDelayedStop;
	float _cachedAvgPower;
	float _cachedPeakPower;
	id<CSSpeechControllerDelegate> _delegate;
	id<CSLanguageDetectorDelegate> _languageDetectorDelegate;
	id<CSSpeakerIdentificationDelegate> _speakerIdDelegate;
	CSEndpointerProxy* _endpointerProxy;
	CSAudioRecordContext* _audioRecordContext;
	CSAudioStream* _audioStream;
	id<CSAudioStreamProviding> _streamProvider;
	id<CSAudioSessionProviding> _sessionProvider;
	id<CSAudioAlertProviding> _alertProvider;
	id<CSAudioMeterProviding> _audioMeterProvider;
	id<CSAudioMetricProviding> _audioMetricProvider;
	CSPlainAudioFileWriter* _audioFileWriter;
	CSSelectiveChannelAudioFileWriter* _serverLoggingWriter;
	CSSmartSiriVolumeController* _volumeController;
	NSString* _recordEventUUID;
	NSDictionary* _speakerRecognitionScores;
	unsigned long long _activeChannel;
	CSSpeechEndHostTimeEstimator* _speechEndHostTimeEstimator;
	NSString* _bundleIdFromDictation;
	CSContinuousVoiceTrigger* _continuousVoiceTrigger;
	CSLanguageDetector* _languageDetector;
	NSUUID* _pendingAudioSessionActivationToken;
	/*^block*/id _pendingAudioSessionActivationCompletion;
	unsigned long long _pendingAudioSessionActivationReason;
	double _audioSessionActivationDelay;
	CSXPCClient* _xpcClient;
	CSAudioPowerMeter* _powerMeter;
	CSStopRecordingOptions* _requestedStopRecordingOptions;
	unsigned long long _numTrailingSamplesAfterSchedulingStop;
	unsigned long long _maxAllowedTrailingSamplesAfterSchedulingStop;
	NSMutableDictionary* _decodersForTV;
	unsigned long long _decoderProcessedSampleCountForTV;
	NSString* _logEventUUID;
	SSRSpeakerRecognitionController* _speakerRecognitionController;
	SSRVoiceProfileManager* _voiceProfileManager;
	CSAsset* _asset;
	NSArray* _ssrAssets;
	NSString* _ssvLogFilePath;
	CSMediaPlayingMonitor* _mediaPlayingMonitor;
	CSVolumeMonitor* _volumeMonitor;

}

@property (nonatomic,retain) CSEndpointerProxy * endpointerProxy;                                          //@synthesize endpointerProxy=_endpointerProxy - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * audioRecordContext;                                    //@synthesize audioRecordContext=_audioRecordContext - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                                  //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) id<CSAudioStreamProviding> streamProvider;                                    //@synthesize streamProvider=_streamProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioSessionProviding> sessionProvider;                                  //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioAlertProviding> alertProvider;                                      //@synthesize alertProvider=_alertProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioMeterProviding> audioMeterProvider;                                 //@synthesize audioMeterProvider=_audioMeterProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioMetricProviding> audioMetricProvider;                               //@synthesize audioMetricProvider=_audioMetricProvider - In the implementation block
@property (assign,nonatomic) BOOL isOpus;                                                                  //@synthesize isOpus=_isOpus - In the implementation block
@property (assign,nonatomic) BOOL isSiriClientListening;                                                   //@synthesize isSiriClientListening=_isSiriClientListening - In the implementation block
@property (assign,nonatomic) BOOL isNarrowBand;                                                            //@synthesize isNarrowBand=_isNarrowBand - In the implementation block
@property (nonatomic,retain) CSPlainAudioFileWriter * audioFileWriter;                                     //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (nonatomic,retain) CSSelectiveChannelAudioFileWriter * serverLoggingWriter;                      //@synthesize serverLoggingWriter=_serverLoggingWriter - In the implementation block
@property (nonatomic,retain) CSSmartSiriVolumeController * volumeController;                               //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) NSString * recordEventUUID;                                                   //@synthesize recordEventUUID=_recordEventUUID - In the implementation block
@property (assign,nonatomic) BOOL isAudioSessionActivated;                                                 //@synthesize isAudioSessionActivated=_isAudioSessionActivated - In the implementation block
@property (assign,nonatomic) BOOL deviceRoleIsStereo;                                                      //@synthesize deviceRoleIsStereo=_deviceRoleIsStereo - In the implementation block
@property (nonatomic,retain) NSDictionary * speakerRecognitionScores;                                      //@synthesize speakerRecognitionScores=_speakerRecognitionScores - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                             //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic) BOOL twoShotNotificationEnabled;                                              //@synthesize twoShotNotificationEnabled=_twoShotNotificationEnabled - In the implementation block
@property (assign,nonatomic) BOOL isMediaPlaying;                                                          //@synthesize isMediaPlaying=_isMediaPlaying - In the implementation block
@property (assign,nonatomic) BOOL isAlarmPlaying;                                                          //@synthesize isAlarmPlaying=_isAlarmPlaying - In the implementation block
@property (assign,nonatomic) BOOL isTimerPlaying;                                                          //@synthesize isTimerPlaying=_isTimerPlaying - In the implementation block
@property (assign,nonatomic) BOOL isSoundPlaying;                                                          //@synthesize isSoundPlaying=_isSoundPlaying - In the implementation block
@property (assign,nonatomic) BOOL isRemoteVADAvailableStream;                                              //@synthesize isRemoteVADAvailableStream=_isRemoteVADAvailableStream - In the implementation block
@property (assign,nonatomic) BOOL myriadPreventingTwoShotFeedback;                                         //@synthesize myriadPreventingTwoShotFeedback=_myriadPreventingTwoShotFeedback - In the implementation block
@property (assign,nonatomic) BOOL needsPostGain;                                                           //@synthesize needsPostGain=_needsPostGain - In the implementation block
@property (nonatomic,retain) CSSpeechEndHostTimeEstimator * speechEndHostTimeEstimator;                    //@synthesize speechEndHostTimeEstimator=_speechEndHostTimeEstimator - In the implementation block
@property (nonatomic,retain) NSString * bundleIdFromDictation;                                             //@synthesize bundleIdFromDictation=_bundleIdFromDictation - In the implementation block
@property (nonatomic,retain) CSContinuousVoiceTrigger * continuousVoiceTrigger;                            //@synthesize continuousVoiceTrigger=_continuousVoiceTrigger - In the implementation block
@property (nonatomic,retain) CSLanguageDetector * languageDetector;                                        //@synthesize languageDetector=_languageDetector - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLanguageDetectorForCurrentRequest;                              //@synthesize shouldUseLanguageDetectorForCurrentRequest=_shouldUseLanguageDetectorForCurrentRequest - In the implementation block
@property (nonatomic,retain) NSUUID * pendingAudioSessionActivationToken;                                  //@synthesize pendingAudioSessionActivationToken=_pendingAudioSessionActivationToken - In the implementation block
@property (nonatomic,copy) id pendingAudioSessionActivationCompletion;                                     //@synthesize pendingAudioSessionActivationCompletion=_pendingAudioSessionActivationCompletion - In the implementation block
@property (assign,nonatomic) unsigned long long pendingAudioSessionActivationReason;                       //@synthesize pendingAudioSessionActivationReason=_pendingAudioSessionActivationReason - In the implementation block
@property (assign,nonatomic) double audioSessionActivationDelay;                                           //@synthesize audioSessionActivationDelay=_audioSessionActivationDelay - In the implementation block
@property (nonatomic,retain) CSXPCClient * xpcClient;                                                      //@synthesize xpcClient=_xpcClient - In the implementation block
@property (assign,nonatomic) float cachedAvgPower;                                                         //@synthesize cachedAvgPower=_cachedAvgPower - In the implementation block
@property (assign,nonatomic) float cachedPeakPower;                                                        //@synthesize cachedPeakPower=_cachedPeakPower - In the implementation block
@property (nonatomic,retain) CSAudioPowerMeter * powerMeter;                                               //@synthesize powerMeter=_powerMeter - In the implementation block
@property (assign,nonatomic) BOOL didDeliverLastBuffer;                                                    //@synthesize didDeliverLastBuffer=_didDeliverLastBuffer - In the implementation block
@property (assign,nonatomic) BOOL didDeliverFirstSpeechPacket;                                             //@synthesize didDeliverFirstSpeechPacket=_didDeliverFirstSpeechPacket - In the implementation block
@property (assign,nonatomic) BOOL canPerformDelayedStop;                                                   //@synthesize canPerformDelayedStop=_canPerformDelayedStop - In the implementation block
@property (nonatomic,retain) CSStopRecordingOptions * requestedStopRecordingOptions;                       //@synthesize requestedStopRecordingOptions=_requestedStopRecordingOptions - In the implementation block
@property (assign,nonatomic) unsigned long long numTrailingSamplesAfterSchedulingStop;                     //@synthesize numTrailingSamplesAfterSchedulingStop=_numTrailingSamplesAfterSchedulingStop - In the implementation block
@property (assign,nonatomic) unsigned long long maxAllowedTrailingSamplesAfterSchedulingStop;              //@synthesize maxAllowedTrailingSamplesAfterSchedulingStop=_maxAllowedTrailingSamplesAfterSchedulingStop - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * decodersForTV;                                          //@synthesize decodersForTV=_decodersForTV - In the implementation block
@property (assign,nonatomic) unsigned long long decoderProcessedSampleCountForTV;                          //@synthesize decoderProcessedSampleCountForTV=_decoderProcessedSampleCountForTV - In the implementation block
@property (nonatomic,retain) NSString * logEventUUID;                                                      //@synthesize logEventUUID=_logEventUUID - In the implementation block
@property (nonatomic,retain) SSRSpeakerRecognitionController * speakerRecognitionController;               //@synthesize speakerRecognitionController=_speakerRecognitionController - In the implementation block
@property (nonatomic,retain) SSRVoiceProfileManager * voiceProfileManager;                                 //@synthesize voiceProfileManager=_voiceProfileManager - In the implementation block
@property (nonatomic,retain) CSAsset * asset;                                                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSArray * ssrAssets;                                                          //@synthesize ssrAssets=_ssrAssets - In the implementation block
@property (nonatomic,retain) NSString * ssvLogFilePath;                                                    //@synthesize ssvLogFilePath=_ssvLogFilePath - In the implementation block
@property (nonatomic,retain) CSMediaPlayingMonitor * mediaPlayingMonitor;                                  //@synthesize mediaPlayingMonitor=_mediaPlayingMonitor - In the implementation block
@property (nonatomic,retain) CSVolumeMonitor * volumeMonitor;                                              //@synthesize volumeMonitor=_volumeMonitor - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpeechControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSLanguageDetectorDelegate> languageDetectorDelegate;               //@synthesize languageDetectorDelegate=_languageDetectorDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpeakerIdentificationDelegate> speakerIdDelegate;                 //@synthesize speakerIdDelegate=_speakerIdDelegate - In the implementation block
@property (assign,nonatomic) BOOL duckOthersOption; 
@property (nonatomic,readonly) id<CSEndpointAnalyzer> endpointAnalyzer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(BOOL)isSmartSiriVolumeAvailable;
-(id)init;
-(id<CSSpeechControllerDelegate>)delegate;
-(void)setDelegate:(id<CSSpeechControllerDelegate>)arg1 ;
-(void)reset;
-(id)metrics;
-(void)preheat;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id)recordRoute;
-(BOOL)prewarmAudioSession;
-(void)releaseAudioSession;
-(void)releaseAudioSession:(unsigned long long)arg1 ;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareRecordWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 ;
-(BOOL)playAlertSoundForType:(long long)arg1 ;
-(void)resetEndpointer;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(BOOL)startRecording:(id*)arg1 ;
-(BOOL)startRecordingWithSettings:(id)arg1 error:(id*)arg2 ;
-(void)stopRecording;
-(id)recordSettings;
-(double)getRecordBufferDuration;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(BOOL)isRecording;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(unsigned long long)alertStartTime;
-(id)playbackRoute;
-(id)voiceTriggerInfo;
-(void)setSynchronousCallbackEnabled:(BOOL)arg1 ;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(BOOL)duckOthersOption;
-(CSAsset *)asset;
-(void)setAsset:(CSAsset *)arg1 ;
-(double)audioSessionActivationDelay;
-(void)setAudioSessionActivationDelay:(double)arg1 ;
-(double)lastEndOfVoiceActivityTime;
-(void)setIsMediaPlaying:(BOOL)arg1 ;
-(BOOL)isMediaPlaying;
-(void)setVolumeController:(CSSmartSiriVolumeController *)arg1 ;
-(CSSmartSiriVolumeController *)volumeController;
-(CSXPCClient *)xpcClient;
-(void)setXpcClient:(CSXPCClient *)arg1 ;
-(CSLanguageDetector *)languageDetector;
-(void)voiceTriggerAssetHandler:(id)arg1 didChangeCachedAsset:(id)arg2 ;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2 ;
-(void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2 ;
-(void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2 ;
-(void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2 ;
-(void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2 assetProviderType:(unsigned long long)arg3 ;
-(BOOL)isRTSTriggered;
-(BOOL)isHearstVoiceTriggered;
-(BOOL)isBuiltInVoiceTriggered;
-(void)continuousVoiceTrigger:(id)arg1 detectedSilenceAfterVoiceTriggerAt:(double)arg2 ;
-(void)continuousVoiceTrigger:(id)arg1 detectedVoiceTriggerResult:(id)arg2 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(CSAudioStream *)audioStream;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2 ;
-(CSPlainAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(CSPlainAudioFileWriter *)arg1 ;
-(id<CSEndpointAnalyzer>)endpointAnalyzer;
-(BOOL)isSiriClientListening;
-(void)setIsSiriClientListening:(BOOL)arg1 ;
-(void)stopEndpointer;
-(void)processServerEndpointFeatures:(id)arg1 ;
-(void)updateEndpointerThreshold:(float)arg1 ;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg1 ;
-(void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(/*^block*/id)arg2 ;
-(id)endpointerModelVersion;
-(BOOL)isJarvisVoiceTriggered;
-(void)startController;
-(BOOL)twoShotNotificationEnabled;
-(long long)_currentAudioRecorderSampleRate;
-(void)_initializeMediaPlayingState;
-(void)_initializeAlarmState;
-(void)_initializeTimerState;
-(void)_setSoundPlayingState;
-(id)_contextToString:(id)arg1 ;
-(void)_refreshSpeakerRecognitionAssets;
-(BOOL)_shouldResetContextAtPrepare;
-(CSAudioRecordContext *)audioRecordContext;
-(BOOL)_fetchAudioProviderWithContext:(id)arg1 ;
-(id<CSAudioSessionProviding>)sessionProvider;
-(BOOL)_shouldFetchVoiceTriggerInfo;
-(BOOL)_shouldFetchRaiseToSpeakInfo;
-(BOOL)_fetchLastTriggerInfo;
-(BOOL)_activateAudioSessionWithReason:(unsigned long long)arg1 delay:(double)arg2 delayRequested:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_activateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(id<CSAudioStreamProviding>)streamProvider;
-(BOOL)isNarrowBand;
-(void)_setupDownsamplerIfNeeded;
-(BOOL)_setupAudioConverter:(BOOL)arg1 isNarrowBand:(BOOL)arg2 ;
-(void)_createAudioPowerMeterIfNeeded;
-(BOOL)_isDelayedDuckingSupportedContext;
-(void)_scheduleActivateAudioSessionWithDelay:(double)arg1 sessionActivateReason:(unsigned long long)arg2 scheduleReason:(id)arg3 validator:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_cancelPendingAudioSessionActivateForReason:(id)arg1 ;
-(BOOL)_lazyActivateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_doActivateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setAudioRecordContext:(CSAudioRecordContext *)arg1 ;
-(void)_teardownAudioProviderIfNeeded;
-(id)_fetchFallbackAudioSessionReleaseProviding;
-(BOOL)_isRecordRouteBuiltinMic;
-(BOOL)_shouldSetStartSampleCount;
-(BOOL)_shouldSetStartSampleCountForRTS;
-(void)_setupSpeakerRecognitionController;
-(void)_startPhaticDecision;
-(BOOL)_shouldUseLanguageDetector:(id)arg1 ;
-(void)_createLanguageDetectorIfNeeded;
-(id)_languageDetectorOptionFromSettings:(id)arg1 ;
-(id<CSLanguageDetectorDelegate>)languageDetectorDelegate;
-(BOOL)_canPlayPhaticDuringMediaPlayback;
-(BOOL)_shouldSchedulePhaticAtStartRecording;
-(float)_scheduledPhaticDelay;
-(unsigned long long)_phaticPlaybackReason;
-(void)_didStopForReason:(long long)arg1 ;
-(BOOL)canPerformDelayedStop;
-(id)recordDeviceInfo;
-(void)_deviceAudioLoggingWithFileWriter:(id)arg1 ;
-(void)_logRecordingStopErrorIfNeeded:(long long)arg1 ;
-(void)_audioStreamProvdider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(id)_fetchAudioDecoderForTV:(unsigned)arg1 ;
-(void)setCachedAvgPower:(float)arg1 ;
-(void)setCachedPeakPower:(float)arg1 ;
-(id<CSAudioAlertProviding>)alertProvider;
-(id<CSAudioMeterProviding>)audioMeterProvider;
-(float)cachedPeakPower;
-(float)cachedAvgPower;
-(void)_performPendingAudioSessionActivateForReason:(id)arg1 ;
-(id<CSAudioMetricProviding>)audioMetricProvider;
-(BOOL)_createAudioProviderFromXPCWithContext:(id)arg1 ;
-(void)setStreamProvider:(id<CSAudioStreamProviding>)arg1 ;
-(void)setSessionProvider:(id<CSAudioSessionProviding>)arg1 ;
-(void)setAlertProvider:(id<CSAudioAlertProviding>)arg1 ;
-(void)setAudioMeterProvider:(id<CSAudioMeterProviding>)arg1 ;
-(void)setAudioMetricProvider:(id<CSAudioMetricProviding>)arg1 ;
-(id)_getSpeechIdentifier;
-(id)_processSpeakerRecognitionResult:(id)arg1 ;
-(id)_mapScoresToSharedSiriId:(id)arg1 ;
-(BOOL)isSmartSiriVolumeAvailable;
-(void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 ;
-(void)didTTSVolumeChange:(id)arg1 forReason:(unsigned long long)arg2 ;
-(void)audioSessionProviderBeginInterruption:(id)arg1 ;
-(void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2 ;
-(void)audioSessionProviderEndInterruption:(id)arg1 ;
-(void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(BOOL)arg2 ;
-(void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(BOOL)arg2 ;
-(void)audioSessionProvider:(id)arg1 providerInvalidated:(BOOL)arg2 ;
-(void)audioSessionProvider:(id)arg1 didChangeContext:(BOOL)arg2 ;
-(void)audioAlertProvidingDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3 ;
-(void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 receivedNumChannels:(unsigned)arg6 ;
-(void)speakerRecognitionController:(id)arg1 hasSpeakerInfo:(id)arg2 ;
-(void)speakerRecognitionFinishedProcessing:(id)arg1 withFinalSpeakerInfo:(id)arg2 ;
-(BOOL)initializeRecordSessionWithContext:(id)arg1 ;
-(void)resetAudioSession;
-(AudioStreamBasicDescription)getLPCMAudioStreamBasicDescription;
-(void)stopRecordingWithOptions:(id)arg1 ;
-(float)peakPowerForOutputReference;
-(float)averagePowerForOutputReference;
-(unsigned long long)outputReferenceChannel;
-(void)keywordDetectorDidDetectKeyword;
-(void)setEndpointAnalyzerDelegate:(id)arg1 ;
-(float)getSmartSiriVolume;
-(void)languageDetectorSetMostRecentRecognitionLanguage:(id)arg1 ;
-(void)cancelCurrentLanguageDetectorRequest;
-(void)setLanguageDetectorInteractionID:(id)arg1 ;
-(void)beginWaitingForMyriad;
-(void)endWaitingForMyriadWithDecision:(unsigned long long)arg1 ;
-(void)setLanguageDetectorDelegate:(id<CSLanguageDetectorDelegate>)arg1 ;
-(id<CSSpeakerIdentificationDelegate>)speakerIdDelegate;
-(void)setSpeakerIdDelegate:(id<CSSpeakerIdentificationDelegate>)arg1 ;
-(CSEndpointerProxy *)endpointerProxy;
-(void)setEndpointerProxy:(CSEndpointerProxy *)arg1 ;
-(BOOL)isOpus;
-(void)setIsOpus:(BOOL)arg1 ;
-(void)setIsNarrowBand:(BOOL)arg1 ;
-(CSSelectiveChannelAudioFileWriter *)serverLoggingWriter;
-(void)setServerLoggingWriter:(CSSelectiveChannelAudioFileWriter *)arg1 ;
-(NSString *)recordEventUUID;
-(void)setRecordEventUUID:(NSString *)arg1 ;
-(BOOL)isAudioSessionActivated;
-(void)setIsAudioSessionActivated:(BOOL)arg1 ;
-(BOOL)deviceRoleIsStereo;
-(void)setDeviceRoleIsStereo:(BOOL)arg1 ;
-(NSDictionary *)speakerRecognitionScores;
-(void)setSpeakerRecognitionScores:(NSDictionary *)arg1 ;
-(void)setTwoShotNotificationEnabled:(BOOL)arg1 ;
-(BOOL)isAlarmPlaying;
-(void)setIsAlarmPlaying:(BOOL)arg1 ;
-(BOOL)isTimerPlaying;
-(void)setIsTimerPlaying:(BOOL)arg1 ;
-(BOOL)isSoundPlaying;
-(void)setIsSoundPlaying:(BOOL)arg1 ;
-(BOOL)isRemoteVADAvailableStream;
-(void)setIsRemoteVADAvailableStream:(BOOL)arg1 ;
-(BOOL)myriadPreventingTwoShotFeedback;
-(void)setMyriadPreventingTwoShotFeedback:(BOOL)arg1 ;
-(BOOL)needsPostGain;
-(void)setNeedsPostGain:(BOOL)arg1 ;
-(CSSpeechEndHostTimeEstimator *)speechEndHostTimeEstimator;
-(void)setSpeechEndHostTimeEstimator:(CSSpeechEndHostTimeEstimator *)arg1 ;
-(NSString *)bundleIdFromDictation;
-(void)setBundleIdFromDictation:(NSString *)arg1 ;
-(CSContinuousVoiceTrigger *)continuousVoiceTrigger;
-(void)setContinuousVoiceTrigger:(CSContinuousVoiceTrigger *)arg1 ;
-(void)setLanguageDetector:(CSLanguageDetector *)arg1 ;
-(BOOL)shouldUseLanguageDetectorForCurrentRequest;
-(void)setShouldUseLanguageDetectorForCurrentRequest:(BOOL)arg1 ;
-(NSUUID *)pendingAudioSessionActivationToken;
-(void)setPendingAudioSessionActivationToken:(NSUUID *)arg1 ;
-(id)pendingAudioSessionActivationCompletion;
-(void)setPendingAudioSessionActivationCompletion:(id)arg1 ;
-(unsigned long long)pendingAudioSessionActivationReason;
-(void)setPendingAudioSessionActivationReason:(unsigned long long)arg1 ;
-(CSAudioPowerMeter *)powerMeter;
-(void)setPowerMeter:(CSAudioPowerMeter *)arg1 ;
-(BOOL)didDeliverLastBuffer;
-(void)setDidDeliverLastBuffer:(BOOL)arg1 ;
-(BOOL)didDeliverFirstSpeechPacket;
-(void)setDidDeliverFirstSpeechPacket:(BOOL)arg1 ;
-(void)setCanPerformDelayedStop:(BOOL)arg1 ;
-(CSStopRecordingOptions *)requestedStopRecordingOptions;
-(void)setRequestedStopRecordingOptions:(CSStopRecordingOptions *)arg1 ;
-(unsigned long long)numTrailingSamplesAfterSchedulingStop;
-(void)setNumTrailingSamplesAfterSchedulingStop:(unsigned long long)arg1 ;
-(unsigned long long)maxAllowedTrailingSamplesAfterSchedulingStop;
-(void)setMaxAllowedTrailingSamplesAfterSchedulingStop:(unsigned long long)arg1 ;
-(NSMutableDictionary *)decodersForTV;
-(void)setDecodersForTV:(NSMutableDictionary *)arg1 ;
-(unsigned long long)decoderProcessedSampleCountForTV;
-(void)setDecoderProcessedSampleCountForTV:(unsigned long long)arg1 ;
-(NSString *)logEventUUID;
-(void)setLogEventUUID:(NSString *)arg1 ;
-(SSRSpeakerRecognitionController *)speakerRecognitionController;
-(void)setSpeakerRecognitionController:(SSRSpeakerRecognitionController *)arg1 ;
-(SSRVoiceProfileManager *)voiceProfileManager;
-(void)setVoiceProfileManager:(SSRVoiceProfileManager *)arg1 ;
-(NSArray *)ssrAssets;
-(void)setSsrAssets:(NSArray *)arg1 ;
-(NSString *)ssvLogFilePath;
-(void)setSsvLogFilePath:(NSString *)arg1 ;
-(CSMediaPlayingMonitor *)mediaPlayingMonitor;
-(void)setMediaPlayingMonitor:(CSMediaPlayingMonitor *)arg1 ;
-(CSVolumeMonitor *)volumeMonitor;
-(void)setVolumeMonitor:(CSVolumeMonitor *)arg1 ;
@end

