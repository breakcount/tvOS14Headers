/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVXClientSpeechSynthesisServicing <NSObject>
@required
-(void)synthesizeRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)prewarmRequest:(id)arg1;
-(void)enqueueRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelPendingRequest:(id)arg1;
-(void)stopRequest:(id)arg1;

@end

