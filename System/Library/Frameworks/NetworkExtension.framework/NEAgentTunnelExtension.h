/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEAgentExtension.h>
#import <libobjc.A.dylib/NEExtensionTunnelProviderHostDelegate.h>
#import <libobjc.A.dylib/NEVPNPluginDriver.h>

@class NSString;

@interface NEAgentTunnelExtension : NEAgentExtension <NEExtensionTunnelProviderHostDelegate, NEVPNPluginDriver> {

	BOOL _cancelCalled;

}

@property (assign) BOOL cancelCalled;                               //@synthesize cancelCalled=_cancelCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendExtensionFailed;
-(void)extension:(id)arg1 didStartWithError:(id)arg2 ;
-(void)handleCancel;
-(void)handleAppsUninstalled:(id)arg1 ;
-(void)handleAppsUpdateBegins:(id)arg1 ;
-(void)handleAppsUpdateEnding:(id)arg1 ;
-(void)handleAppsUpdateEnds:(id)arg1 ;
-(id)driverInterface;
-(id)managerInterface;
-(void)connectWithParameters:(id)arg1 ;
-(void)disconnectWithReason:(int)arg1 ;
-(void)attachIPCWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAppUUIDMap:(id)arg1 ;
-(void)extension:(id)arg1 didRequestSocket:(BOOL)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 effectivePID:(int)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)extension:(id)arg1 didSetStatus:(long long)arg2 ;
-(void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)extensionDidDetachIPC:(id)arg1 ;
-(void)setCancelCalled:(BOOL)arg1 ;
-(void)sendStatus:(long long)arg1 withDisconnectError:(id)arg2 ;
-(BOOL)cancelCalled;
-(void)handleExtensionStartedWithCompletionHandler:(/*^block*/id)arg1 ;
@end

