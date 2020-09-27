/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <NetworkServiceProxy/NPTunnelFlow.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface NPTunnelFlowProtocol : NPTunnelFlow {

	BOOL _disconnectedByTunnel;
	NSObject*<OS_dispatch_data> _inputBuffer;
	BOOL _discardFirstData;
	BOOL _connectedOnTunnelReadyForData;
	BOOL _connectedOnInitialData;
	BOOL _waitingForOutput;
	nw_protocol* _inputProtocol;

}

@property (nonatomic,readonly) nw_protocol* inputProtocol;              //@synthesize inputProtocol=_inputProtocol - In the implementation block
@property (nonatomic,readonly) BOOL waitingForOutput;                   //@synthesize waitingForOutput=_waitingForOutput - In the implementation block
-(void)disconnect;
-(BOOL)connect;
-(id)initWithTunnel:(id)arg1 appRule:(id)arg2 inputProtocol:(nw_protocol*)arg3 extraProperties:(id)arg4 ;
-(void)handleAppData:(id)arg1 ;
-(void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(void)readDataFromClient;
-(BOOL)waitingForOutput;
-(void)closeClientFlowWithError:(int)arg1 ;
-(BOOL)isClientFlowClosed;
-(void)handleTunnelReadyForData;
-(void)notifyClientConnected;
-(BOOL)addBufferToFrameArray:(nw_frame_array_s*)arg1 bufferSize:(unsigned long long)arg2 ;
-(void)dropInputProtocol;
-(unsigned)addInputFramesToArray:(nw_frame_array_s*)arg1 limitMinimumBytes:(unsigned)arg2 limitMaximumBytes:(unsigned)arg3 limitMaximumFrames:(unsigned)arg4 ;
-(unsigned)addOutputFramesToArray:(nw_frame_array_s*)arg1 limitMinimumBytes:(unsigned)arg2 limitMaximumBytes:(unsigned)arg3 limitMaximumFrames:(unsigned)arg4 ;
-(void)handleOutputFrame:(id)arg1 send:(BOOL)arg2 ;
-(nw_protocol*)inputProtocol;
@end

