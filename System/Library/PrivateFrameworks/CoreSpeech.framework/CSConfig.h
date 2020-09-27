/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSConfig : NSObject
+(unsigned)inputRecordingNumberOfChannels;
+(float)inputRecordingSampleRate;
+(unsigned)inputRecordingSampleByteDepth;
+(double)inputRecordingBufferDuration;
+(unsigned long long)zeroFilterWindowSizeInMs;
+(unsigned long long)zeroFilterWindowSizeInMsForReport;
+(float)inputRecordingSampleRateNarrowBand;
+(unsigned long long)channelForProcessedInput;
+(float)remoteVADDuration;
+(BOOL)inputRecordingIsFloat;
+(unsigned)inputRecordingFramesPerPacket;
+(unsigned)inputRecordingBytesPerFrame;
+(unsigned)inputRecordingBytesPerPacket;
+(unsigned)hearstNumberOfBytesPerChunk;
+(unsigned)hearstNumberOfSamplesPerChunk;
+(float)inputRecordingDurationInSecs;
+(unsigned)inputRecordingSampleBitDepth;
+(unsigned)EncryptionAudioSampleByteDepth;
+(long long)inputRecordingEncoderAudioQuality;
+(id)inputRecordingSampleRateConverterAlgorithm;
+(unsigned)audioConverterBitrate;
+(unsigned long long)channelForOutputReference;
+(float)zeroFilterApproxAbsSpeechThreshold;
+(int)csAudioProcessingQueuePriority;
+(float)daysBeforeRemovingLogFiles;
+(unsigned long long)serverLoggingChannelBitset;
+(double)continousFingerprintBufferDuration;
@end

