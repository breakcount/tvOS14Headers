/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <NetworkServiceProxy/NPTunnelFlowProtocol.h>

@class NSMutableArray, NWUDPSession, NSDate, NWEndpoint;

@interface NPTunnelFlowUDP : NPTunnelFlowProtocol {

	NSMutableArray* _savedDirectData;
	unsigned long long _savedDataSize;
	NWUDPSession* _directSession;
	NSDate* _firstPacketDate;
	NWEndpoint* _remoteEndpoint;

}

@property (retain) NSMutableArray * savedDirectData;              //@synthesize savedDirectData=_savedDirectData - In the implementation block
@property (assign) unsigned long long savedDataSize;              //@synthesize savedDataSize=_savedDataSize - In the implementation block
@property (retain) NWUDPSession * directSession;                  //@synthesize directSession=_directSession - In the implementation block
@property (retain) NSDate * firstPacketDate;                      //@synthesize firstPacketDate=_firstPacketDate - In the implementation block
@property (readonly) NWEndpoint * remoteEndpoint;                 //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWEndpoint *)remoteEndpoint;
-(id)initWithTunnel:(id)arg1 appRule:(id)arg2 inputProtocol:(nw_protocol*)arg3 extraProperties:(id)arg4 ;
-(void)setFirstPacketDate:(NSDate *)arg1 ;
-(void)handleAppData:(id)arg1 ;
-(void)sendDataOnDirectSession:(id)arg1 ;
-(void)setDirectSession:(NWUDPSession *)arg1 ;
-(NWUDPSession *)directSession;
-(void)setSavedDirectData:(NSMutableArray *)arg1 ;
-(void)handleIncomingData:(id)arg1 andError:(id)arg2 ;
-(NSMutableArray *)savedDirectData;
-(unsigned long long)savedDataSize;
-(void)setSavedDataSize:(unsigned long long)arg1 ;
-(void)startHandlingIncomingData;
-(void)startDirectConnection;
-(void)stopDirectConnection;
-(NSDate *)firstPacketDate;
@end

