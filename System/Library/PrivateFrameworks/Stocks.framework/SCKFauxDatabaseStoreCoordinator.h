/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCKDatabaseStoreCoordinator.h>

@protocol SCKDatabaseStore, OS_dispatch_queue;
@class NSObject;

@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator> {

	id<SCKDatabaseStore> _store;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<SCKDatabaseStore> store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<SCKDatabaseStore> underlyingStore; 
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStore:(id<SCKDatabaseStore>)arg1 ;
-(id<SCKDatabaseStore>)store;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(void)writeWithAccessor:(/*^block*/id)arg1 ;
-(void)reloadWithAccessor:(/*^block*/id)arg1 ;
-(void)readZone:(id)arg1 withAccessor:(/*^block*/id)arg2 ;
-(void)writeZone:(id)arg1 withAccessor:(/*^block*/id)arg2 ;
-(id<SCKDatabaseStore>)underlyingStore;
-(id)initWithDatabaseStore:(id)arg1 ;
@end

