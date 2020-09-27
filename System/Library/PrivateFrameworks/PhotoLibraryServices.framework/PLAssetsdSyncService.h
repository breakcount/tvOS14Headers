/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdSyncServiceProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, PLXPCTransaction, PLFileSystemAssetImporter, PLLibraryServicesManager, NSString;

@interface PLAssetsdSyncService : PLAbstractLibraryServicesManagerService <PLAssetsdSyncServiceProtocol> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_group> _updateGroup;
	PLXPCTransaction* _libraryTransaction;
	PLFileSystemAssetImporter* _importer;
	PLLibraryServicesManager* _libraryServicesManager;
	BOOL _didFinalizeRestore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1 ;
-(void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(BOOL)arg3 ;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)_finalizeOTARestoreEndedAndRecreateAlbums:(BOOL)arg1 ;
-(void)_updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(BOOL)arg3 ;
-(void)_updatePendingCountForMissingAsset:(id)arg1 ;
-(void)_linkPathsAside:(id)arg1 ;
-(void)_recoverAsideFiles:(id)arg1 ;
-(void)_cleanupAlbumMetadataAsideFilesAfterRestore;
-(id)_fileRestoreExclusionPaths;
-(id)_readRestoreAlbumMetadataForAlbum:(id)arg1 ;
-(void)_addAsset:(id)arg1 toAlbumsForUUID:(id)arg2 ;
@end

