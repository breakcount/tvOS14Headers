/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSInvocation, NSObject;

@interface _UIDelayedPresentationContext : NSObject {

	BOOL _enableUserInteraction;
	long long _reqcnt;
	NSInvocation* _presentInvocation;
	/*^block*/id _cancellationHandler;
	double _timeout;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (nonatomic,copy) id cancellationHandler;                          //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,retain) NSInvocation * presentInvocation;              //@synthesize presentInvocation=_presentInvocation - In the implementation block
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(long long)requestCount;
-(long long)incrementRequestCount;
-(long long)decrementRequestCount;
-(id)invocationTarget;
-(void)setPresentInvocation:(NSInvocation *)arg1 ;
-(id)delayingController;
-(id)initWithTimeout:(double)arg1 cancellationHandler:(/*^block*/id)arg2 ;
-(void)cancelDelayedPresentation:(BOOL)arg1 ;
-(void)beginDelayedPresentation;
-(void)finishDelayedPresentation:(id)arg1 ;
-(NSInvocation *)presentInvocation;
@end

