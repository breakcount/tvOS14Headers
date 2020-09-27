/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFCloudKitStoreComparisonCache;

@interface PFCloudKitStoreComparer : NSObject {

	BOOL _checkCloudKitMetadata;
	PFCloudKitStoreComparisonCache* _cache;

}

@property (nonatomic,readonly) BOOL checkCloudKitMetadata;                          //@synthesize checkCloudKitMetadata=_checkCloudKitMetadata - In the implementation block
@property (nonatomic,readonly) PFCloudKitStoreComparisonCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)trimExcessiveValuesForLog:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(PFCloudKitStoreComparisonCache *)cache;
-(BOOL)ensureContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)ensureStoresAgreeOnCloudKitTables:(id)arg1 error:(id*)arg2 ;
-(BOOL)compareContentOfStore:(id)arg1 toStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)compareCloudKitMetadataOfStore:(id)arg1 toStore:(id)arg2 error:(id*)arg3 ;
-(id)deriveIdentifierForNonCloudObjectID:(id)arg1 ;
-(BOOL)populateCacheForStore:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)getObjectMatchingRecordID:(id)arg1 fromStore:(id)arg2 withManagedObjectContext:(id)arg3 ;
-(BOOL)compareAttributesOnObject:(id)arg1 toObject:(id)arg2 error:(id*)arg3 ;
-(BOOL)compareRelationshipsOfRecordID:(id)arg1 withStoreObject:(id)arg2 andOtherObject:(id)arg3 error:(id*)arg4 ;
-(BOOL)validateValue:(id)arg1 againstOtherValue:(id)arg2 forIgnoredAttribute:(id)arg3 ;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 forAttribute:(id)arg3 ;
-(id)getRecordIDsForRelationship:(id)arg1 onObject:(id)arg2 ;
-(BOOL)checkCloudKitMetadata;
@end

