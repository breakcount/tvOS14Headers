/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RBAssertionManagerQueueDelegate;
#import <RunningBoard/RunningBoard-Structs.h>
@class NSObject, RBEventQueue, RBProcessMap;

@interface RBAssertionManagerEventQueue : NSObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	RBEventQueue* _eventQueue;
	RBProcessMap* _expirationWarningEvents;
	id<RBAssertionManagerQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RBAssertionManagerQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long count; 
-(id)description;
-(id)init;
-(unsigned long long)count;
-(id<RBAssertionManagerQueueDelegate>)delegate;
-(void)setDelegate:(id<RBAssertionManagerQueueDelegate>)arg1 ;
-(void)updateEventsForAssertions:(id)arg1 ;
@end

