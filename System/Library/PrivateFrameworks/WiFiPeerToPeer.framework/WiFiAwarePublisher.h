/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPeerToPeer/WiFiAwarePublisherXPCDelegate.h>

@protocol OS_dispatch_queue, WiFiAwarePublisherXPC, WiFiAwarePublisherDelegate;
@class NSXPCConnection, NSObject, NSNumber, WiFiAwarePublishConfiguration, NSString;

@interface WiFiAwarePublisher : NSObject <WiFiAwarePublisherXPCDelegate> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _publishID;
	id<WiFiAwarePublisherXPC> _publisherProxy;
	id<WiFiAwarePublisherDelegate> _delegate;
	WiFiAwarePublishConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<WiFiAwarePublisherDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WiFiAwarePublishConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id<WiFiAwarePublisherDelegate>)delegate;
-(void)setDelegate:(id<WiFiAwarePublisherDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(WiFiAwarePublishConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)isConnected;
-(void)terminateDataSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetState;
-(void)handleError;
-(void)sendMessage:(id)arg1 toPeerAddress:(id)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)publishStartedWithInstanceID:(unsigned char)arg1 ;
-(void)publishFailedToStartWithError:(long long)arg1 ;
-(void)publishTerminatedWithReason:(long long)arg1 ;
-(void)publishReceivedMessage:(id)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(id)arg3 ;
-(void)publishDataConfirmedForHandle:(id)arg1 localInterfaceIndex:(unsigned)arg2 serviceSpecificInfo:(id)arg3 ;
-(void)publishDataTerminatedForHandle:(id)arg1 reason:(long long)arg2 ;
-(void)updateDatapathServiceSpecificInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateServiceSpecificInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportIssue:(id)arg1 forDataSession:(id)arg2 ;
-(void)startPublishSync;
@end

