/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCRemoteVideoClientDelegate <NSObject>
@optional
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 videoDidSuspend:(BOOL)arg2;
-(void)remoteVideoClientDidReceiveLastFrame:(id)arg1;
-(void)remoteVideoServerDidDie:(id)arg1;
-(void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;

@end

