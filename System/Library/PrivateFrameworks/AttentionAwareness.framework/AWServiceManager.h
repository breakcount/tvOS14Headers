/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSMutableSet;

@interface AWServiceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSMutableSet* _serviceObservers;

}
+(void)removeObserver:(id)arg1 ;
+(void)addObserver:(id)arg1 ;
+(id)sharedManager;
+(id)invokeWithService:(/*^block*/id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)invokeWithService:(/*^block*/id)arg1 ;
@end
