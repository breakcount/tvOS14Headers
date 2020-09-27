/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <AVFCore/AVObjectMonitoring.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class AVWeakReference, NSObject, NSArray, NSString;

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring> {

	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToMonitoredObject;
	NSObject*<OS_dispatch_queue> _operationStateSerializationQueue;
	NSObject*<OS_dispatch_semaphore> _monitoringIsFinishedSemaphore;
	NSArray* _notificationNames;
	BOOL _registeredForObjectNotifications;
	BOOL _started;
	BOOL _finished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)main;
-(void)_registerForObjectNotifications;
-(void)_balanceMonitoringIsFinishedSemaphore;
-(void)_unregisterForObjectNotifications;
-(void)_signalMonitoringIsFinishedIfNeeded;
-(void)_waitUntilFinishedIfNeeded;
-(void)monitoredObjectHasDeparted;
-(id)initWithObject:(id)arg1 notificationNames:(id)arg2 ;
-(id)_monitoredObject;
@end

