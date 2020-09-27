/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSUUID, NSManagedObjectContext, NSPersistentHistoryToken;

@interface RTPersistenceResetSyncContext : NSObject {

	NSManagedObjectID* _currentDeviceObjectID;
	NSUUID* _currentDeviceIdentifier;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentHistoryToken* _historyToken;

}

@property (retain) NSManagedObjectID * currentDeviceObjectID;                  //@synthesize currentDeviceObjectID=_currentDeviceObjectID - In the implementation block
@property (retain) NSUUID * currentDeviceIdentifier;                           //@synthesize currentDeviceIdentifier=_currentDeviceIdentifier - In the implementation block
@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) NSPersistentHistoryToken * historyToken;                    //@synthesize historyToken=_historyToken - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentHistoryToken *)historyToken;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(NSManagedObjectID *)currentDeviceObjectID;
-(void)setCurrentDeviceObjectID:(NSManagedObjectID *)arg1 ;
-(NSUUID *)currentDeviceIdentifier;
-(void)setCurrentDeviceIdentifier:(NSUUID *)arg1 ;
@end

