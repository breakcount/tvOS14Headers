/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFRemoteHotspotClient.h>
#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>

@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;
@class NSString;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver> {

	BOOL _browsing;
	id<SFRemoteHotspotSessionDelegate> _delegate;
	id<SFRemoteHotspotProtocol> _connectionProxy;

}

@property (assign) BOOL browsing;                                            //@synthesize browsing=_browsing - In the implementation block
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (__weak) id<SFRemoteHotspotSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SFRemoteHotspotSessionDelegate>)delegate;
-(void)setDelegate:(id<SFRemoteHotspotSessionDelegate>)arg1 ;
-(BOOL)browsing;
-(void)setBrowsing:(BOOL)arg1 ;
-(id<SFRemoteHotspotProtocol>)connectionProxy;
-(void)stopBrowsing;
-(void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatedFoundDeviceList:(id)arg1 ;
-(void)xpcManagerConnectionInterrupted;
-(void)startBrowsing;
-(void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectionProxy:(id<SFRemoteHotspotProtocol>)arg1 ;
@end
