/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentContainer.h>
#import <libobjc.A.dylib/NSCloudKitMirroringDelegateProgressProvider.h>

@class NSManagedObjectContext, NSString;

@interface NSPersistentCloudKitContainer : NSPersistentContainer <NSCloudKitMirroringDelegateProgressProvider> {

	long long _operationTimeout;
	NSManagedObjectContext* _metadataContext;

}

@property (nonatomic,readonly) long long operationTimeout;                            //@synthesize operationTimeout=_operationTimeout - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * metadataContext;              //@synthesize metadataContext=_metadataContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)discoverDefaultContainerIdentifier;
-(void)dealloc;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(void)setPersistentStoreDescriptions:(id)arg1 ;
-(void)_loadStoreDescriptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)recordForManagedObjectID:(id)arg1 ;
-(id)recordsForManagedObjectIDs:(id)arg1 ;
-(NSManagedObjectContext *)metadataContext;
-(void)eventUpdated:(id)arg1 ;
-(BOOL)initializeCloudKitSchemaWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)recordIDForManagedObjectID:(id)arg1 ;
-(id)recordIDsForManagedObjectIDs:(id)arg1 ;
-(BOOL)canUpdateRecordForManagedObjectWithID:(id)arg1 ;
-(BOOL)canDeleteRecordForManagedObjectWithID:(id)arg1 ;
-(BOOL)canModifyManagedObjectsInStore:(id)arg1 ;
-(long long)operationTimeout;
@end

