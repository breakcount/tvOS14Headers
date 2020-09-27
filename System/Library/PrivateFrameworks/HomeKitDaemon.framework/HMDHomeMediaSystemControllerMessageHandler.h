/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDHomeMediaSystemMessageHandlerDelegate, OS_dispatch_queue;
@class HMDHome, HMFMessageDispatcher, NSObject, NSUUID, NSString;

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFMessageReceiver> {

	HMDHome* _home;
	id<HMDHomeMediaSystemMessageHandlerDelegate> _delegate;
	HMFMessageDispatcher* _messageDispatcher;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (__weak,readonly) HMDHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (__weak,readonly) id<HMDHomeMediaSystemMessageHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                  //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMDHomeMediaSystemMessageHandlerDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMDHome *)home;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)messageDestination;
-(void)_registerForMessages;
-(void)_handleAddMediaSystem:(id)arg1 ;
-(void)_handleRemoveMediaSystem:(id)arg1 ;
-(id)preProcessMediaSystemMessage:(id)arg1 ;
-(void)_handleAddMediaSystemWithPreProcessedMessage:(id)arg1 ;
-(id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4 ;
-(void)handleUpdateMediaSystem:(id)arg1 ;
@end

