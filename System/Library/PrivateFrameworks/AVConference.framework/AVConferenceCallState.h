/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCCapabilities;

@interface AVConferenceCallState : NSObject {

	BOOL _audioIsPaused;
	VCCapabilities* _capabilities;
	BOOL _isVideoPaused;
	BOOL _isAudioSending;

}

@property (assign,getter=isAudioPaused,nonatomic) BOOL audioIsPaused;                //@synthesize audioIsPaused=_audioIsPaused - In the implementation block
@property (assign,getter=isVideoPaused,nonatomic) BOOL isVideoPaused;                //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign,getter=isAudioSending,nonatomic) BOOL isAudioSending;              //@synthesize isAudioSending=_isAudioSending - In the implementation block
@property (nonatomic,retain) VCCapabilities * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
-(void)dealloc;
-(VCCapabilities *)capabilities;
-(void)setCapabilities:(VCCapabilities *)arg1 ;
-(BOOL)isVideoPaused;
-(BOOL)isAudioPaused;
-(void)setAudioIsPaused:(BOOL)arg1 ;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(BOOL)isAudioSending;
-(void)setIsAudioSending:(BOOL)arg1 ;
@end

