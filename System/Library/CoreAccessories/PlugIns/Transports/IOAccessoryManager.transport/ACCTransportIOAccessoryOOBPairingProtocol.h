/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCTransportIOAccessoryOOBPairingProtocol <NSObject>
@required
-(BOOL)IOAccessoryOOBPairingDataArrived:(id)arg1 endpointUUID:(id)arg2;
-(BOOL)IOAccessoryOOBPairingInfoArrived:(id)arg1 endpointUUID:(id)arg2;
-(BOOL)IOAccessoryOOBPairingDataStartedForEndpointUUID:(id)arg1;
-(BOOL)IOAccessoryOOBPairingDataFinishedForEndpointUUID:(id)arg1;

@end

