/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface NviConstants : NSObject
+(unsigned)inputRecordingNumberOfChannels;
+(float)inputRecordingSampleRate;
+(unsigned)inputRecordingSampleByteDepth;
+(unsigned)inputRecordingFramesPerPacket;
+(unsigned)inputRecordingBytesPerFrame;
+(unsigned)inputRecordingBytesPerPacket;
+(unsigned)inputRecordingSampleBitDepth;
+(unsigned)numChannelsForNviDirectionality;
+(unsigned)nviDirectionalityStartingChannelId;
+(unsigned)nviDirectionalityEndingChannelId;
+(AudioStreamBasicDescription)monoChannelLpcmASBD;
+(AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;
+(AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;
+(id)nviLogsRootDir;
@end

