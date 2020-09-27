/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVXSpeechSynthesisListening <NSObject>
@required
-(void)speechSynthesizerDidBecomeBusy:(id)arg1;
-(void)speechSynthesizerDidBecomeIdle:(id)arg1;
-(void)speechSynthesizer:(id)arg1 willEnqueueRequest:(id)arg2 taskTracker:(id)arg3;
-(void)speechSynthesizer:(id)arg1 willStartRequest:(id)arg2 taskTracker:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didStartRequest:(id)arg2 record:(id)arg3 taskTracker:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didFinishRequest:(id)arg2 utteranceInfo:(id)arg3 record:(id)arg4 taskTracker:(id)arg5;
-(void)speechSynthesizer:(id)arg1 didCancelRequest:(id)arg2 taskTracker:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didInterruptRequest:(id)arg2 taskTracker:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didFailRequest:(id)arg2 taskTracker:(id)arg3 error:(id)arg4;

@end

