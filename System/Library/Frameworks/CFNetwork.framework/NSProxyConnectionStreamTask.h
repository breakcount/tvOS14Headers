/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSProxyConnection.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLSessionStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSInputStream, NSOutputStream, NSURLSessionStreamTask;

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isConnected;
	NSString* _host;
	int _port;
	BOOL _dataAvailableForReading;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSURLSessionStreamTask* _streamTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)cancel;
-(void)write:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)read:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4 ;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
@end

