/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSAudioFileManager : NSObject
+(id)_sharedAudioLoggingQueue;
+(void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2 ;
+(id)_createAudioFileWriterForOpportuneSpeakListenerWithLoggingDir:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
+(id)_createAudioFileWriterForPHSTrainingWithLoggingDir:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
+(id)_createAudioFileWriterWithLoggingDir:(id)arg1 withLoggingUUID:(id)arg2 inputFormat:(AudioStreamBasicDescription)arg3 outputFormat:(AudioStreamBasicDescription)arg4 ;
+(id)_getDateLabel;
+(id)_createAudioFileWriterForAdBlockerWithLoggingDir:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
+(void)pruneLogFiles;
+(void)pruneNumberOfGradingFilesTo:(unsigned long long)arg1 ;
+(void)pruneNumberOfLogFilesTo:(unsigned long long)arg1 ;
+(void)cleanupOrphanedGradingFiles;
+(void)generateDeviceAudioLogging:(id)arg1 speechId:(id)arg2 ;
+(id)createAudioFileWriterForOpportuneSpeakListenerWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 ;
+(id)createAudioFileWriterForPHSTrainingWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 ;
+(id)createAudioFileWriterForRemoteVADWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 withLoggingUUID:(id)arg3 ;
+(id)createAudioFileWriterWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 withLoggingUUID:(id)arg3 ;
+(id)createSelectiveChannelAudioFileWriterWithChannelBitset:(unsigned long long)arg1 ;
+(id)createAudioFileWriterForAdBlockerWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 ;
+(void)removeLogFilesOlderThanNDays:(float)arg1 ;
+(id)audioFileWriterForAttentiveSiri;
@end

