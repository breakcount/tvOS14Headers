/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSession.h>

@class TKSmartCardSlotEngine, NSXPCConnection;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {

	TKSmartCardSlotEngine* _slot;
	BOOL _transmitting;
	BOOL _valid;
	BOOL _active;
	long long _endPolicy;
	NSXPCConnection* _connection;

}

@property (assign) BOOL valid;                                                   //@synthesize valid=_valid - In the implementation block
@property (assign) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign) long long endPolicy;                                          //@synthesize endPolicy=_endPolicy - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)connection;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)transmit:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setEndPolicy:(long long)arg1 ;
-(void)terminateWithReply:(/*^block*/id)arg1 ;
-(void)setSessionEndPolicy:(long long)arg1 ;
-(long long)endPolicy;
-(id)initWithSlot:(id)arg1 connection:(id)arg2 ;
@end

