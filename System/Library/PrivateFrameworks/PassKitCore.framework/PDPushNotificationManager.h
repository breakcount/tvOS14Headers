/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSMutableSet, NSString, NSHashTable, NSObject, NSArray;

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSMutableSet* _registeredTopics;
	NSString* _pushToken;
	NSHashTable* _consumers;
	os_unfair_lock_s _consumersLock;
	NSObject*<OS_dispatch_queue> _replyQueue;

}

@property (nonatomic,copy) NSString * pushToken;                        //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSArray * topics; 
@property (nonatomic,readonly) NSArray * currentConsumers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)connect;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSArray *)topics;
-(void)recalculatePushTopics;
-(void)registerConsumer:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(void)unregisterAllConsumers;
-(NSArray *)currentConsumers;
-(void)simulatePushForTopic:(id)arg1 ;
@end

