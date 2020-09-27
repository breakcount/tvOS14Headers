/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject {

	AVAudioSessionMediaPlayerOnlyInternal* _audioSession;

}

@property (assign) id<AVAudioSessionDelegateMediaPlayerOnly> delegate; 
@property (readonly) NSString * category; 
@property (readonly) NSString * mode; 
@property (readonly) double preferredHardwareSampleRate; 
@property (readonly) double preferredIOBufferDuration; 
@property (readonly) BOOL inputIsAvailable; 
@property (readonly) double currentHardwareSampleRate; 
@property (readonly) long long currentHardwareInputNumberOfChannels; 
@property (readonly) long long currentHardwareOutputNumberOfChannels; 
@property (readonly) BOOL canEnterPIPMode; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id<AVAudioSessionDelegateMediaPlayerOnly>)delegate;
-(void)setDelegate:(id<AVAudioSessionDelegateMediaPlayerOnly>)arg1 ;
-(NSString *)category;
-(NSString *)mode;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setActivationContext:(id)arg1 error:(id*)arg2 ;
-(id)_weakReference;
-(double)preferredIOBufferDuration;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(void)setApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)isApplicationAudioSession;
-(void)_attachToPlayer:(id)arg1 ;
-(void)_addFPListeners;
-(void)_removeFPListeners;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setUsingLongFormAudio:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(BOOL)inputIsAvailable;
-(double)currentHardwareSampleRate;
-(long long)currentHardwareInputNumberOfChannels;
-(long long)currentHardwareOutputNumberOfChannels;
-(BOOL)canEnterPIPMode;
@end

