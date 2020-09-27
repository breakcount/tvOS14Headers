/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
@class NSString, NSObject;

@interface IMNetworkObserver : NSObject {

	NSString* _dataStatusIndicator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _networkReachabilityFlags;
	long long _networkType;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSString* _operatorName;
	SCNetworkReachabilityRef _reachability;
	CTServerConnectionRef _telephonyServer;

}

@property (assign) long long networkType; 
@property (readonly) NSString * connectionTypeHeader; 
@property (readonly) unsigned networkReachabilityFlags; 
+(id)sharedInstance;
+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned)arg1 ;
+(id)_networkObserverLogConfig;
-(id)init;
-(void)dealloc;
-(long long)networkType;
-(void)setNetworkType:(long long)arg1 ;
-(id)operatorName;
-(NSString *)connectionTypeHeader;
-(unsigned)networkReachabilityFlags;
-(unsigned)_currentNetworkReachabilityFlags;
-(long long)_networkTypeForReachabilityFlags:(unsigned)arg1 ;
-(void)_applicationForegroundNotification:(id)arg1 ;
-(id)_dataStatusIndicator;
-(void)_reloadNetworkType;
-(long long)_setNetworkType:(long long)arg1 ;
-(void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(void)_reloadDataStatusIndicator;
-(void)_copyConnectionDataStatus:(/*^block*/id)arg1 ;
-(long long)_networkTypeFromDataIndicator:(id)arg1 ;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned)arg1 ;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned)arg1 toValue:(unsigned)arg2 ;
-(id)dataStatusIndicator;
-(void)reloadNetworkType;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(id)stringForNetworkType:(long long)arg1 ;
-(BOOL)networkTypeIsCellularType:(long long)arg1 ;
@end

