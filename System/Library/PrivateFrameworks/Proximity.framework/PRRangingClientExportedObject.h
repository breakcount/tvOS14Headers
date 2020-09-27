/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PRRangingClientProtocol.h>
#import <libobjc.A.dylib/PRAidedRangingClientProtocol.h>

@protocol PRRangingClientProtocol;
@class NSString;

@interface PRRangingClientExportedObject : NSObject <PRRangingClientProtocol, PRAidedRangingClientProtocol> {

	id<PRRangingClientProtocol> _rangingClient;

}

@property (assign,nonatomic,__weak) id<PRRangingClientProtocol> rangingClient;              //@synthesize rangingClient=_rangingClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFailWithError:(id)arg1 ;
-(id)initWithRangingClient:(id)arg1 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2 ;
-(void)sendDataToPeers:(id)arg1 ;
-(id<PRRangingClientProtocol>)rangingClient;
-(void)setRangingClient:(id<PRRangingClientProtocol>)arg1 ;
@end

