/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCObject.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface VCDispatchTimer : VCObject {

	/*^block*/id _callbackBlock;
	NSObject*<OS_dispatch_source> _timer;
	unsigned _intervalSeconds;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) id callbackBlock;              //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) BOOL isRunning;                //@synthesize running=_running - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(BOOL)isRunning;
-(id)callbackBlock;
-(id)initWithIntervalSeconds:(unsigned)arg1 callbackBlock:(/*^block*/id)arg2 clientQueue:(id)arg3 ;
-(id)initWithIntervalSeconds:(unsigned)arg1 callbackBlock:(/*^block*/id)arg2 ;
@end
