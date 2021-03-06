/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class IMMessageContext, NSRecursiveLock, NSObject, NSString, NSProtocolChecker, NSArray, NSMutableArray;

@interface IMLocalObjectInternal : NSObject {

	IMMessageContext* _currentMessageContext;
	NSRecursiveLock* _lock;
	id _target;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _portName;
	NSString* _processName;
	NSProtocolChecker* _protocolChecker;
	NSArray* _whitelistedClasses;
	CFRunLoopSourceRef _runloopSource;
	NSRecursiveLock* _componentQueueProcessingLock;
	NSMutableArray* _componentQueue;
	os_unfair_lock_s _componentQueueLock;
	BOOL _pendingComponentQueueProcessing;
	BOOL _busyForwarding;
	BOOL _offMainThread;
	BOOL _wasInterrupted;

}
-(void)dealloc;
@end

