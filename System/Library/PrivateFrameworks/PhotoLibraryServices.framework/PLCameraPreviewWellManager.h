/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, NSObject, PLPhotoLibrary, NSString, NSDate;

@interface PLCameraPreviewWellManager : NSObject {

	NSMutableArray* _workQueue;
	os_unfair_lock_s _queueLock;
	BOOL _active;
	os_unfair_lock_s _activeLock;
	NSObject*<OS_dispatch_queue> _serialQueue;
	PLPhotoLibrary* _photoLibrary;
	BOOL _currentPreviewWellMetadataIsLoaded;
	NSString* _currentPreviewWellAssetUUID;
	NSDate* _currentPreviewWellAddedDate;
	double _currentPreviewWellSortToken;

}
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)_fetchPreviewWellMetadataIfNeeded;
-(void)_fetchPreviewWellAssetWithAssetHandler:(/*^block*/id)arg1 ;
-(void)_clearPreviewWellAndNotify;
-(void)_saveImageAndNotify:(CGImageRef)arg1 assetUUID:(id)arg2 ;
-(void)_inqProcessAssetChanges;
-(void)_processChange:(id)arg1 ;
-(void)considerAssetForPreviewWellChanges:(id)arg1 ;
-(void)refreshPreviewWellImage;
@end

