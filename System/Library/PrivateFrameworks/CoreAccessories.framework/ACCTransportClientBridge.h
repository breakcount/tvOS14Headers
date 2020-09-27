/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCTransportClientDelegate.h>

@class ACCTransportClient, NSString;

@interface ACCTransportClientBridge : NSObject <ACCTransportClientDelegate> {

	ACCTransportClient* _transportClient;
	/*^block*/id _connectionAuthStatusChangedHandler;
	/*^block*/id _connectionPropertiesChangedHandler;
	/*^block*/id _endpointPropertiesChangedHandler;
	/*^block*/id _serverDisconnectedHandler;

}

@property (nonatomic,retain) ACCTransportClient * transportClient;              //@synthesize transportClient=_transportClient - In the implementation block
@property (nonatomic,copy) id connectionAuthStatusChangedHandler;               //@synthesize connectionAuthStatusChangedHandler=_connectionAuthStatusChangedHandler - In the implementation block
@property (nonatomic,copy) id connectionPropertiesChangedHandler;               //@synthesize connectionPropertiesChangedHandler=_connectionPropertiesChangedHandler - In the implementation block
@property (nonatomic,copy) id endpointPropertiesChangedHandler;                 //@synthesize endpointPropertiesChangedHandler=_endpointPropertiesChangedHandler - In the implementation block
@property (nonatomic,copy) id serverDisconnectedHandler;                        //@synthesize serverDisconnectedHandler=_serverDisconnectedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBridge;
-(id)init;
-(id)connectionAuthStatusChangedHandler;
-(id)connectionPropertiesChangedHandler;
-(id)endpointPropertiesChangedHandler;
-(id)serverDisconnectedHandler;
-(void)transportClient:(id)arg1 authStatusDidChange:(BOOL)arg2 forConnectionWithUUID:(id)arg3 ;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forConnectionWithUUID:(id)arg3 previousProperties:(id)arg4 ;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forEndpointWithUUID:(id)arg3 previousProperties:(id)arg4 connectionUUID:(id)arg5 ;
-(void)transportClientServerDisconnected:(id)arg1 ;
-(ACCTransportClient *)transportClient;
-(void)setTransportClient:(ACCTransportClient *)arg1 ;
-(void)setConnectionAuthStatusChangedHandler:(id)arg1 ;
-(void)setConnectionPropertiesChangedHandler:(id)arg1 ;
-(void)setEndpointPropertiesChangedHandler:(id)arg1 ;
-(void)setServerDisconnectedHandler:(id)arg1 ;
@end

