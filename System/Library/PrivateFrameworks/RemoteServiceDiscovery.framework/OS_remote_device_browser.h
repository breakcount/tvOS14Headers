/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RemoteServiceDiscovery.framework/RemoteServiceDiscovery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface OS_remote_device_browser : NSObject {

	BOOL _canceled;
	BOOL _canceling;
	unsigned _device_type;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _cbq;
	/*^block*/id _callback;

}

@property (assign,nonatomic) unsigned device_type;                             //@synthesize device_type=_device_type - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cbq;                 //@synthesize cbq=_cbq - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL canceling;                                   //@synthesize canceling=_canceling - In the implementation block
@property (nonatomic,copy) id callback;                                        //@synthesize callback=_callback - In the implementation block
-(void)dealloc;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(unsigned)device_type;
-(void)setDevice_type:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)cbq;
-(void)setCbq:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)canceling;
-(void)setCanceling:(BOOL)arg1 ;
@end

