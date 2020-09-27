/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL, NSMutableDictionary, NSObject;

@interface CLSEIEventsDataManager : NSObject {

	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSURL* _diskCacheURL;
	NSMutableDictionary* _venueCache;
	NSMutableDictionary* _artistCache;
	NSMutableDictionary* _categoryCache;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,readonly) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSURL * diskCacheURL;                                                   //@synthesize diskCacheURL=_diskCacheURL - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * venueCache;                                       //@synthesize venueCache=_venueCache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * artistCache;                                      //@synthesize artistCache=_artistCache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * categoryCache;                                    //@synthesize categoryCache=_categoryCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cacheQueue;                                //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
-(void)clear;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSManagedObjectModel *)managedObjectModel;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)save;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(BOOL)_save;
-(void)_resetCoreDataStack;
-(id)initWithDiskCacheURL:(id)arg1 ;
-(void)clearFastAccessCache;
-(id)insertVenueWithUUID:(long long)arg1 name:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
-(id)insertEventWithUUID:(long long)arg1 name:(id)arg2 ;
-(id)insertCategoryWithName:(id)arg1 ;
-(id)insertArtistWithUUID:(long long)arg1 name:(id)arg2 ;
-(id)fetchEventForUUID:(long long)arg1 ;
-(id)fetchVenueForUUID:(long long)arg1 ;
-(id)fetchArtistForUUID:(long long)arg1 ;
-(id)fetchCategoryForName:(id)arg1 ;
-(id)_fetchManagedObjectWithEntityName:(id)arg1 uuid:(long long)arg2 ;
-(id)_fetchManagedObjectWithEntityName:(id)arg1 name:(id)arg2 ;
-(NSURL *)diskCacheURL;
-(NSMutableDictionary *)venueCache;
-(NSMutableDictionary *)artistCache;
-(NSMutableDictionary *)categoryCache;
@end

