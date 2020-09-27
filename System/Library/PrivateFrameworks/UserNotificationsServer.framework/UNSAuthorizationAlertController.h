/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface UNSAuthorizationAlertController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _bundleIdentifersForActiveAlerts;
	NSMutableDictionary* _bundleIdentifiersToResultBlocks;

}
-(id)initWithQueue:(id)arg1 ;
-(void)requestAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_queue_addResultBlock:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_queue_isAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_queue_addAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1 ;
-(void)_queue_sendResponse:(long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(/*^block*/id)arg3 ;
@end

