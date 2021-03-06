/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMRemoteObjectBroadcaster : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)defaultBroadcaster;
-(id)init;
-(void)dealloc;
-(id)_queue;
-(void)blockUntilSendQueueIsEmpty;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 ;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 completion:(/*^block*/id)arg5 ;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
-(id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
-(void)flushProxy:(id)arg1 ;
@end

