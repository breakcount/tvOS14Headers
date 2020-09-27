/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, WLKSubscriptionData;

@interface WLKSubscriptionStore : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
	WLKSubscriptionData* _subscriptionData;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)fetchSubscriptionData:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setIsSubscriptionSyncInProgress:(BOOL)arg1 ;
-(void)refreshSubscriptionDataIfNeeded;
-(id)cachedSubscriptionData;
-(BOOL)_isSubscriptionSyncInProgress;
@end

