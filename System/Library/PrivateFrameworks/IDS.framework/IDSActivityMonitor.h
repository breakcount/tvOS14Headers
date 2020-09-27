/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/_IDSActivityMonitorXPCConnectorXPCListener.h>

@protocol IDSActivityMonitorListenerDelegate, OS_dispatch_queue;
@class NSString, _IDSActivityMonitorXPCConnector, NSObject, NSArray;

@interface IDSActivityMonitor : NSObject <_IDSActivityMonitorXPCConnectorXPCListener> {

	id<IDSActivityMonitorListenerDelegate> _delegate;
	NSString* _activity;
	_IDSActivityMonitorXPCConnector* _XPCConnector;
	NSString* _activityIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) _IDSActivityMonitorXPCConnector * XPCConnector;                      //@synthesize XPCConnector=_XPCConnector - In the implementation block
@property (nonatomic,retain) NSString * activityIdentifier;                                       //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<IDSActivityMonitorListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * subscriptions; 
@property (nonatomic,readonly) NSString * activity;                                               //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) BOOL listeningForUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IDSActivityMonitorListenerDelegate>)delegate;
-(void)setDelegate:(id<IDSActivityMonitorListenerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)activity;
-(NSArray *)subscriptions;
-(id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 xpcConnector:(id)arg4 ;
-(NSString *)activityIdentifier;
-(_IDSActivityMonitorXPCConnector *)XPCConnector;
-(void)handleIncomingUpdate:(id)arg1 onActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 ;
-(void)beginBroadcastingWithInfo:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stopBroadcastingForSubActivity:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)listeningForUpdates;
-(void)setListeningForUpdates:(BOOL)arg1 ;
-(void)setXPCConnector:(_IDSActivityMonitorXPCConnector *)arg1 ;
-(void)setActivityIdentifier:(NSString *)arg1 ;
@end

