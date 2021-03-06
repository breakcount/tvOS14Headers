/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSObject, Protocol, NSString;

@interface IMRemoteObjectInternal : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	Protocol* _protocol;
	NSString* _portName;
	NSString* _processName;
	os_unfair_recursive_lock_s _lock;
	int _pid;
	BOOL _willBeTerminated;
	BOOL _postedDeathNote;

}
@end

