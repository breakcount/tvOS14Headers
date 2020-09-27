/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, NSObject, AVWeakReferencingDelegateStorage;

@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject {

	NSString* _defaultCallbackQueueName;
	NSObject*<OS_dispatch_queue> _defaultCallbackQueue;
	OpaqueFigSimpleMutexRef _stateMutex;
	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVWeakReferencingDelegateStorage* _delegateOverrideStorage;
	localQueueOpaqueRef _localQueue;
	/*^block*/id _localQueueHandler;
	BOOL _canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd;

}

@property (readonly) id activeDelegate; 
@property (readonly) NSObject*<OS_dispatch_queue> activeCallbackQueue; 
@property (readonly) id clientDelegate; 
@property (readonly) NSObject*<OS_dispatch_queue> clientCallbackQueue; 
@property (readonly) id delegateOverride; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
+(void)initialize;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)clientCallbackQueue;
-(id)clientDelegate;
-(id)initWithQueueName:(id)arg1 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(BOOL)arg2 ;
-(BOOL)setClientDelegate:(id)arg1 clientCallbackQueue:(id)arg2 exceptionReason:(id*)arg3 ;
-(void)updateLocalQueue:(localQueueOpaqueRef)arg1 handler:(/*^block*/id)arg2 ;
-(id)activeDelegate;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(BOOL)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)_activeDelegate;
-(id)_activeCallbackQueue;
-(BOOL)_validateCallbackQueue:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)activeCallbackQueue;
@end

