/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSADCompanionServiceProvider, OS_dispatch_queue;
@class NSObject, NSString;

@interface CSP2PService : NSObject {

	id<CSADCompanionServiceProvider> _adCompanionServiceProvider;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _lastCommunicatedPeer;
	NSString* _voiceTriggerBatchId;
	NSString* _voiceIdentificationBatchId;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * lastCommunicatedPeer;                                                 //@synthesize lastCommunicatedPeer=_lastCommunicatedPeer - In the implementation block
@property (nonatomic,retain) NSString * voiceTriggerBatchId;                                                  //@synthesize voiceTriggerBatchId=_voiceTriggerBatchId - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentificationBatchId;                                           //@synthesize voiceIdentificationBatchId=_voiceIdentificationBatchId - In the implementation block
@property (assign,nonatomic,__weak) id<CSADCompanionServiceProvider> adCompanionServiceProvider;              //@synthesize adCompanionServiceProvider=_adCompanionServiceProvider - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_createDirectoryIfDoesNotExist:(id)arg1 ;
-(void)sendCoreSpeechGradingDataToNearbyPeer;
-(void)sendVTNearMissGradingDataToCompanion;
-(void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processFetchVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_sendCoreSpeechGradingDataToPeerId:(id)arg1 ;
-(void)_sendVoiceTriggerGradingDataToPeerId:(id)arg1 ;
-(void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg1 forLocale:(id)arg2 ;
-(void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(BOOL)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(BOOL)arg7 ;
-(void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(/*^block*/id)arg3 ;
-(id)_spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2 ;
-(id)_spIdSiriDebugGradingDataRootDirectory;
-(id)_getContentsOfDirectory:(id)arg1 ;
-(void)_getHomeUserIdForSharedSiriId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_sendVoiceProfile:(id)arg1 toPeerId:(id)arg2 ;
-(id)_spIdSiriDebugVoiceProfileCacheDirectoryForProfile:(id)arg1 locale:(id)arg2 ;
-(id)_spIdSiriDebugVTDataDirectory;
-(id)_spIdSiriDebugVoiceProfileStoreRootDirectory;
-(id)_spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1 ;
-(void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg1 ;
-(id)_speakerRecognitionAudioLogsGradingDir;
-(id)_spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1 ;
-(id<CSADCompanionServiceProvider>)adCompanionServiceProvider;
-(void)setAdCompanionServiceProvider:(id<CSADCompanionServiceProvider>)arg1 ;
-(NSString *)lastCommunicatedPeer;
-(void)setLastCommunicatedPeer:(NSString *)arg1 ;
-(NSString *)voiceTriggerBatchId;
-(void)setVoiceTriggerBatchId:(NSString *)arg1 ;
-(NSString *)voiceIdentificationBatchId;
-(void)setVoiceIdentificationBatchId:(NSString *)arg1 ;
@end

