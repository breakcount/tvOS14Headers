/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;
@class NSObject, NSMutableArray;

@interface _RWITCPServer : NSObject {

	int _listenSocket;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject*<OS_dispatch_source> _serverSource;
	NSMutableArray* _connections;
	id<_RWITCPServerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<_RWITCPServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<_RWITCPServerDelegate>)delegate;
-(id)_initWithDelegate:(id)arg1 ;
-(void)connectionClosed:(id)arg1 ;
-(BOOL)_listenOnPort:(unsigned short)arg1 ;
-(BOOL)_createListenDispatchSource;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(id)initWithLaunchdSocketName:(const char*)arg1 delegate:(id)arg2 ;
@end

