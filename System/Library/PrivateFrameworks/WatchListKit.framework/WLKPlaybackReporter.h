/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSXPCConnection;

@interface WLKPlaybackReporter : NSObject {

	NSXPCConnection* _xpcConnection;
	os_unfair_lock_s _xpcLock;

}
-(id)init;
-(id)_connection;
-(void)_invalidationHandler;
-(void)reportPlayback:(id)arg1 sessionID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)endPlaybackSession:(id)arg1 ;
-(void)reportPlayback:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

