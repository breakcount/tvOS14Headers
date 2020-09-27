/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSURLSessionEventDelegate <NSObject>
@optional
-(void)transactionCacheLookupBegin:(id)arg1 absoluteTime:(double)arg2;
-(void)transactionCacheLookupEnd:(id)arg1 cachedResponse:(id)arg2 absoluteTime:(double)arg3;
-(void)transactionRequestBegin:(id)arg1 onConnection:(id)arg2 absoluteTime:(double)arg3;
-(void)transactionRequestHeaderEnd:(id)arg1 request:(id)arg2 size:(long long)arg3 absoluteTime:(double)arg4;
-(void)transactionRequestBody:(id)arg1 data:(id)arg2 absoluteTime:(double)arg3;
-(void)transactionRequestEnd:(id)arg1 size:(long long)arg2 transferSize:(long long)arg3 absoluteTime:(double)arg4;
-(void)transactionResponseBegin:(id)arg1 absoluteTime:(double)arg2;
-(void)transactionResponseHeaderEnd:(id)arg1 response:(id)arg2 size:(long long)arg3 absoluteTime:(double)arg4;
-(void)transactionResponseBody:(id)arg1 data:(id)arg2 absoluteTime:(double)arg3;
-(void)transactionResponseEnd:(id)arg1 size:(long long)arg2 transferSize:(long long)arg3 absoluteTime:(double)arg4;
-(void)transactionEnd:(id)arg1 reason:(unsigned long long)arg2 absoluteTime:(double)arg3;
-(void)sessionDelegateEvent:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)sessionDelegateBegin:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)sessionDelegateEnd:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)taskCreate:(id)arg1 pointer:(unsigned long long)arg2 withRequest:(id)arg3 fromSession:(id)arg4 absoluteTime:(double)arg5;
-(void)taskDelegateEvent:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)taskDelegateBegin:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)taskDelegateEnd:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)taskCompletionHandlerEvent:(id)arg1 absoluteTime:(double)arg2;
-(void)taskResume:(id)arg1 absoluteTime:(double)arg2;
-(void)taskSuspend:(id)arg1 absoluteTime:(double)arg2;
-(void)taskComplete:(id)arg1 withError:(id)arg2 absoluteTime:(double)arg3;
-(void)transactionCreate:(id)arg1 withRequest:(id)arg2 fromTask:(id)arg3 absoluteTime:(double)arg4;
-(void)connectionBegin:(id)arg1 fromTransaction:(id)arg2 properties:(id)arg3 absoluteTime:(double)arg4;
-(void)connectionWait:(id)arg1 absoluteTime:(double)arg2;
-(void)connectionEstablish:(id)arg1 properties:(id)arg2 absoluteTime:(double)arg3;
-(void)connectionEnd:(id)arg1 absoluteTime:(double)arg2;
-(void)sessionCreate:(id)arg1 pointer:(unsigned long long)arg2 absoluteTime:(double)arg3;
-(void)sessionDestroy:(id)arg1 absoluteTime:(double)arg2;

@end

