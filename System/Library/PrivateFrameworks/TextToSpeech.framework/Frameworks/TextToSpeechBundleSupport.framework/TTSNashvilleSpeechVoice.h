/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
#import <TextToSpeech/TTSSpeechVoice.h>

@interface TTSNashvilleSpeechVoice : TTSSpeechVoice {

	BOOL _overrideDefault;
	BOOL _overrideFallbackDefault;
	BOOL _overrideExcludeInAvailableVoiceList;
	long long _voiceType;

}

@property (assign,nonatomic) long long voiceType;                                   //@synthesize voiceType=_voiceType - In the implementation block
@property (assign,nonatomic) BOOL overrideDefault;                                  //@synthesize overrideDefault=_overrideDefault - In the implementation block
@property (assign,nonatomic) BOOL overrideFallbackDefault;                          //@synthesize overrideFallbackDefault=_overrideFallbackDefault - In the implementation block
@property (assign,nonatomic) BOOL overrideExcludeInAvailableVoiceList;              //@synthesize overrideExcludeInAvailableVoiceList=_overrideExcludeInAvailableVoiceList - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDefault;
-(long long)voiceType;
-(void)setVoiceType:(long long)arg1 ;
-(BOOL)excludeInAvailableVoiceList;
-(BOOL)isFallbackDefault;
-(BOOL)isCombinedFootprint;
-(void)setOverrideDefault:(BOOL)arg1 ;
-(void)setOverrideFallbackDefault:(BOOL)arg1 ;
-(void)setOverrideExcludeInAvailableVoiceList:(BOOL)arg1 ;
-(BOOL)overrideDefault;
-(BOOL)overrideFallbackDefault;
-(BOOL)overrideExcludeInAvailableVoiceList;
@end

