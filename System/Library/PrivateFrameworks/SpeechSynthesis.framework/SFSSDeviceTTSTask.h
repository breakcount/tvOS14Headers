/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechSynthesis/SFSpeechSynthesisTask.h>

@class SFSSTTSEngine;

@interface SFSSDeviceTTSTask : SFSpeechSynthesisTask {

	SFSSTTSEngine* _ttsEngine;

}

@property (assign,nonatomic,__weak) SFSSTTSEngine * ttsEngine;              //@synthesize ttsEngine=_ttsEngine - In the implementation block
-(id)initWithRequest:(id)arg1 ;
-(void)cancelTask;
-(void)startTask:(/*^block*/id)arg1 ;
-(SFSSTTSEngine *)ttsEngine;
-(void)setTtsEngine:(SFSSTTSEngine *)arg1 ;
@end

