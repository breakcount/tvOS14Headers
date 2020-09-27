/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraStreamSession.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRemoteStreamSenderProtocol, HMDCameraRemoteStreamReceiverProtocol;
@class NSString;

@interface HMDCameraRemoteStreamSession : HMDCameraStreamSession <HMFLogging> {

	id<HMDCameraRemoteStreamSenderProtocol> _streamSender;
	id<HMDCameraRemoteStreamReceiverProtocol> _streamReceiver;
	unsigned long long _streamState;

}

@property (nonatomic,readonly) id<HMDCameraRemoteStreamSenderProtocol> streamSender;                  //@synthesize streamSender=_streamSender - In the implementation block
@property (nonatomic,readonly) id<HMDCameraRemoteStreamReceiverProtocol> streamReceiver;              //@synthesize streamReceiver=_streamReceiver - In the implementation block
@property (assign,nonatomic) unsigned long long streamState;                                          //@synthesize streamState=_streamState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)setStreamState:(unsigned long long)arg1 ;
-(unsigned long long)streamState;
-(void)updateState:(long long)arg1 ;
-(id)stateAsString;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 streamReceiver:(id)arg4 remoteCapabilities:(id)arg5 streamPreference:(id)arg6 ;
-(id<HMDCameraRemoteStreamSenderProtocol>)streamSender;
-(BOOL)containsState:(long long)arg1 ;
-(id<HMDCameraRemoteStreamReceiverProtocol>)streamReceiver;
@end

