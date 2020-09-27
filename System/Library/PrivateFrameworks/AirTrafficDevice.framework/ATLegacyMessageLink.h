/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATLockdownMessageLink.h>
#import <libobjc.A.dylib/ATSocketDelegate.h>
#import <libobjc.A.dylib/ATLegacyMessageLink.h>

@protocol ATLegacyMessageLink <NSObject>
@required
-(void)setHandlerForMessage:(id)arg1 handler:(/*^block*/id)arg2;
-(void)sendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeHandlerForMessage:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSMutableDictionary, NSString;

@interface ATLegacyMessageLink : ATLockdownMessageLink <ATSocketDelegate, ATLegacyMessageLink> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableData* _incomingData;
	long long _expectedBytesRemaining;
	NSMutableDictionary* _requestHandlerTable;
	double _idleTimeoutInterval;
	BOOL _hostSupportsLocalCloudDownloads;

}

@property (assign,nonatomic) BOOL hostSupportsLocalCloudDownloads;              //@synthesize hostSupportsLocalCloudDownloads=_hostSupportsLocalCloudDownloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)open;
-(void)close;
-(BOOL)idleTimeoutEnabled;
-(id)initWithSocket:(id)arg1 ;
-(void)socketDidClose:(id)arg1 ;
-(void)socket:(id)arg1 hasDataAvailable:(const char*)arg2 length:(long long)arg3 ;
-(void)_checkMessageTimeouts;
-(void)setHandlerForMessage:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeHandlerForMessage:(id)arg1 ;
-(void)setHostSupportsLocalCloudDownloads:(BOOL)arg1 ;
-(void)_handlePingMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handlePongMessage:(id)arg1 fromLink:(id)arg2 ;
-(BOOL)_sendData:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)hostSupportsLocalCloudDownloads;
-(double)_idleTimeoutInterval;
-(void)_sendPingMessage;
@end

