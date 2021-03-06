/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, BKSProcessAssertion;

@interface MPRadioController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _connection;
	BOOL _hasLaunchedService;
	BOOL _isRadioAvailable;
	BKSProcessAssertion* _remoteProcessAssertion;
	/*^block*/id _remoteProcessAssertionCompletionHandler;
	long long _remoteProcessAssertionCount;

}

@property (getter=isRadioAvailable,nonatomic,readonly) BOOL radioAvailable; 
-(id)init;
-(void)dealloc;
-(BOOL)isRadioAvailable;
-(void)getRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setRadioAvailable:(BOOL)arg1 ;
@end

