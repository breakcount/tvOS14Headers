/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation {

	BOOL _update;
	BOOL _migration;
	HMDBackingStoreCacheGroup* _group;
	/*^block*/id _fetchResult;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (readonly) BOOL update;                                            //@synthesize update=_update - In the implementation block
@property (readonly) BOOL migration;                                         //@synthesize migration=_migration - In the implementation block
@property (nonatomic,copy) id fetchResult;                                   //@synthesize fetchResult=_fetchResult - In the implementation block
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(BOOL)update;
-(id)fetchResult;
-(BOOL)migration;
-(void)setFetchResult:(id)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 update:(BOOL)arg2 migration:(BOOL)arg3 fetchResult:(/*^block*/id)arg4 ;
@end

