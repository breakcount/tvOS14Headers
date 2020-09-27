/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSSet, NSMutableDictionary;

@interface PLUpdatedOrderKeys : NSObject {

	os_unfair_lock_s _lock;
	BOOL _isObservingOrderKeys;
	NSSet* _observedRelationships;
	NSMutableDictionary* _updatedOrderKeyObjectIDs;

}

@property (readonly) BOOL isObservingOrderKeys; 
-(id)init;
-(id)getAndClearUpdatedOrderKeys;
-(BOOL)isObservingOrderKeys;
-(BOOL)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1 ;
-(BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1 ;
-(id)_persistentStoresForContext:(id)arg1 ;
-(void)persistentStoreDidUpdateOrderKeys:(id)arg1 ;
@end

