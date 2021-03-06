/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioSessionProvidingDelegate <NSObject>
@optional
-(void)audioSessionProviderBeginInterruption:(id)arg1;
-(void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;
-(void)audioSessionProviderEndInterruption:(id)arg1;
-(void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 providerInvalidated:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 didChangeContext:(BOOL)arg2;

@end

