/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, TBPersistenceRemoteStoreServer;

@interface TBPersistenceManager : NSObject {

	NSManagedObjectContext* _persistenceContext;
	NSPersistentStoreCoordinator* _persistenceCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	TBPersistenceRemoteStoreServer* _remoteStoreServer;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                          //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * persistenceContext;                        //@synthesize persistenceContext=_persistenceContext - In the implementation block
@property (nonatomic,retain) TBPersistenceRemoteStoreServer * remoteStoreServer;                 //@synthesize remoteStoreServer=_remoteStoreServer - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
+(BOOL)isStoreCompatibleAtURL:(id)arg1 withModel:(id)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)persistenceContext;
-(id)initWithManagedObjectModel:(id)arg1 storeDescriptor:(id)arg2 ;
-(NSPersistentStoreCoordinator *)persistenceCoordinator;
-(void)setPersistenceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setPersistenceContext:(NSManagedObjectContext *)arg1 ;
-(void)addPersistentStorage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(TBPersistenceRemoteStoreServer *)remoteStoreServer;
-(void)setRemoteStoreServer:(TBPersistenceRemoteStoreServer *)arg1 ;
@end

