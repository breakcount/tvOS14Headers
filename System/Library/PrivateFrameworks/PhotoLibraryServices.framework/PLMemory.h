/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSearchableAssetCollection.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>
#import <libobjc.A.dylib/PLFileSystemMetadataPersistence.h>

@class NSString, NSDate, NSDictionary, NSData, PLManagedAsset, NSSet;

@interface PLMemory : PLManagedObject <PLSearchableAssetCollection, PLCloudDeletable, PLFileSystemMetadataPersistence> {

	BOOL _needsPersistenceUpdate;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                      //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) short category; 
@property (assign,nonatomic) short subcategory; 
@property (assign,nonatomic) BOOL rejected; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) BOOL pending; 
@property (assign,nonatomic) BOOL userCreated; 
@property (nonatomic,retain) NSDictionary * movieAssetState; 
@property (nonatomic,retain) NSData * movieData; 
@property (assign,nonatomic) long long photosGraphVersion; 
@property (nonatomic,retain) NSData * photosGraphData; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (nonatomic,retain) NSDate * lastViewedDate; 
@property (nonatomic,retain) NSDate * lastMoviePlayedDate; 
@property (nonatomic,retain) NSData * assetListPredicate; 
@property (nonatomic,retain) NSSet * representativeAssets; 
@property (nonatomic,retain) NSSet * curatedAssets; 
@property (nonatomic,retain) NSSet * extendedCuratedAssets; 
@property (nonatomic,retain) NSSet * movieCuratedAssets; 
@property (assign,nonatomic) short notificationState; 
@property (nonatomic,retain) NSData * blacklistedFeature; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) long long shareCount; 
@property (assign,nonatomic) long long viewCount; 
@property (assign,nonatomic) long long pendingPlayCount; 
@property (assign,nonatomic) long long pendingShareCount; 
@property (assign,nonatomic) long long pendingViewCount; 
@property (assign,nonatomic) unsigned short featuredState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(id)baseSearchIndexPredicate;
+(id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2 ;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5 ;
+(void)deleteMemoriesWithObjectIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 ;
+(void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(BOOL)indexTitleForMemoryCategory:(unsigned long long)arg1 ;
+(id)memoriesToPrefetchForWidgetInManagedObjectContext:(id)arg1 ;
+(id)memoriesToPrefetchInPhotoLibrary:(id)arg1 ;
+(BOOL)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)arg1 ;
+(id)_memoriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4 ;
-(void)delete;
-(void)prepareForDeletion;
-(void)willSave;
-(void)didSave;
-(id)momentShare;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
-(id)cplFullRecord;
-(id)cplMemoryChange;
-(BOOL)supportsCloudUpload;
-(long long)cloudDeletionType;
-(NSString *)keyAssetUUID;
-(unsigned long long)numberOfAssets;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(NSString *)cloudUUIDForDeletion;
-(BOOL)isSyncableChange;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(unsigned long long)searchIndexCategory;
-(NSDate *)keyAssetCreationDate;
-(NSDate *)searchableEndDate;
-(NSDate *)searchableStartDate;
-(id)searchIndexContents;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(id)calculateKeyAsset;
-(void)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
@end

