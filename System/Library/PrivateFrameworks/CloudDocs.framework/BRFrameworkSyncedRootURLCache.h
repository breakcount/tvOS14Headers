/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRSyncedRootURLCache.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache> {

	int _syncedLocationsChangedNotificationToken;
	NSArray* _syncedRootURLs;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (nonatomic,readonly) NSArray * syncedRootURLs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSArray *)syncedRootURLs;
-(void)_accountWillChange;
-(void)registerForSyncedLocationsChangesNotifications;
-(void)_fetchSyncedRootURLs;
@end

