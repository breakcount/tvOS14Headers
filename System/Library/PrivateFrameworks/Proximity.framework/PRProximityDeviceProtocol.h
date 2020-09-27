/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol PRProximityDeviceProtocol
@property (readonly) NSUUID * peer; 
@required
-(id)init;
-(NSUUID *)peer;
-(void)addSample:(BtProxData)arg1;
-(id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id*)arg3;
-(BOOL)proxReady;
-(long long)deviceProximity;

@end

