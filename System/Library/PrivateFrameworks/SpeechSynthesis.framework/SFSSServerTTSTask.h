/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechSynthesis/SpeechSynthesis-Structs.h>
#import <SpeechSynthesis/SFSpeechSynthesisTask.h>

@class SFSSOspreyTTSClient;

@interface SFSSServerTTSTask : SFSpeechSynthesisTask {

	SFSSOspreyTTSClient* _ospreyTTSClient;

}

@property (assign,nonatomic,__weak) SFSSOspreyTTSClient * ospreyTTSClient;              //@synthesize ospreyTTSClient=_ospreyTTSClient - In the implementation block
+(id)createOspreyRequestFromReqeust:(id)arg1 ;
+(AudioStreamBasicDescription)audioStreamBasicDescription:(id)arg1 ;
+(id)generateVoiceAssetFromVoiceMetaInfo:(id)arg1 ;
+(id)generateResourceAssetFromResourceMetaInfo:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cancelTask;
-(void)startTask:(/*^block*/id)arg1 ;
-(SFSSOspreyTTSClient *)ospreyTTSClient;
-(void)setOspreyTTSClient:(SFSSOspreyTTSClient *)arg1 ;
@end

