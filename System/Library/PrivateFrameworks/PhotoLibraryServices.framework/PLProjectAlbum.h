/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (nonatomic,copy) NSData * projectData; 
@property (nonatomic,copy) NSString * projectDocumentType; 
@property (nonatomic,copy) NSString * projectExtensionIdentifier; 
@property (nonatomic,copy) NSString * projectRenderUuid; 
+(id)entityName;
+(id)validKindsForPersistence;
+(id)albumSupportsAssetOrderKeysPredicate;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 documentType:(id)arg3 projectExtensionIdentifier:(id)arg4 ;
+(BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)arg1 error:(id*)arg2 ;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(id)projectPreviewImageData;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)supportsAssetOrderKeys;
-(BOOL)setProjectPreviewImageData:(id)arg1 error:(id*)arg2 ;
-(id)duplicateProjectPreviewImageData:(id)arg1 error:(id*)arg2 ;
-(id)_previewImageFilename;
@end

