/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface _UIKBRTTimerBlock : NSObject {

	NSObject*<OS_dispatch_queue> _selfQueue;
	NSTimer* _timer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _onTimer;
	id _owner;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> selfQueue;              //@synthesize selfQueue=_selfQueue - In the implementation block
@property (nonatomic,readonly) NSTimer * timer;                                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id onTimer;                                     //@synthesize onTimer=_onTimer - In the implementation block
@property (nonatomic,readonly) id owner;                                            //@synthesize owner=_owner - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSTimer *)timer;
-(id)owner;
-(void)timerFired:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(/*^block*/id)arg3 owner:(id)arg4 ;
-(void)fireNow;
-(NSObject*<OS_dispatch_queue>)selfQueue;
-(id)onTimer;
@end

