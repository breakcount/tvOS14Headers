/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioStreamProvidingDelegate <NSObject>
@optional
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;

@required
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;

@end

