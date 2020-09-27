/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRemoteVideoManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate> {

	NSMutableDictionary* _queuesForStreamTokenDict;
	NSMutableDictionary* _stateCacheForStreamTokenDict;
	opaque_pthread_mutex_t _remoteVideoLock;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSObject*<OS_dispatch_queue> _xpcCallbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)registerBlocksForService;
-(void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2 ;
-(void)remoteVideoDidSuspend:(BOOL)arg1 streamToken:(long long)arg2 ;
-(id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 ;
-(void)releaseQueueForStreamToken:(long long)arg1 ;
-(void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3 ;
-(void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2 ;
-(void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2 ;
-(void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2 ;
-(void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1 ;
-(void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2 ;
-(void)cleanupDictionaries;
-(id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(BOOL)arg3 ;
-(id)getQueueForStreamToken:(unsigned)arg1 videoMode:(int)arg2 ;
-(BOOL)doesQueueExistForStreamToken:(id)arg1 ;
-(unsigned)slotForStreamToken:(long long)arg1 videoMode:(int)arg2 ;
-(void)notifyCachedStateForStreamToken:(id)arg1 ;
@end

