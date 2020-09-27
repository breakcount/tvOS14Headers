/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOrderedSet, NSManagedObjectContext, PLPhotoLibrary, NSArray, NSString;

@interface PHChangeValidationController : NSObject {

	BOOL _didPrepare;
	BOOL _confirmationRequired;
	NSOrderedSet* _insertRequests;
	NSOrderedSet* _updateRequests;
	NSOrderedSet* _deleteRequests;
	NSManagedObjectContext* _managedObjectContext;
	PLPhotoLibrary* _photoLibrary;
	NSArray* _renderedContentURLs;
	NSArray* _assetsToChangeContent;
	NSArray* _assetsToRevert;
	NSArray* _assetsToHide;
	NSArray* _assetsToDelete;
	NSArray* _albumsToDelete;
	NSArray* _foldersToDelete;
	NSString* _clientName;

}

@property (nonatomic,readonly) NSArray * renderedContentURLs;                              //@synthesize renderedContentURLs=_renderedContentURLs - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToChangeContent;                            //@synthesize assetsToChangeContent=_assetsToChangeContent - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToRevert;                                   //@synthesize assetsToRevert=_assetsToRevert - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToHide;                                     //@synthesize assetsToHide=_assetsToHide - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToDelete;                                   //@synthesize assetsToDelete=_assetsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * albumsToDelete;                                   //@synthesize albumsToDelete=_albumsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * foldersToDelete;                                  //@synthesize foldersToDelete=_foldersToDelete - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                                 //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) BOOL confirmationRequired;                                  //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * insertRequests;                              //@synthesize insertRequests=_insertRequests - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * updateRequests;                              //@synthesize updateRequests=_updateRequests - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * deleteRequests;                              //@synthesize deleteRequests=_deleteRequests - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(NSString *)clientName;
-(BOOL)validateWithError:(id*)arg1 ;
-(BOOL)confirmationRequired;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5 ;
-(BOOL)_prepareWithError:(id*)arg1 ;
-(id)_simpleDeleteValidatorsWithManagedObjectContext:(id)arg1 ;
-(BOOL)_recordObjectID:(id)arg1 withSimpleDeleteValidators:(id)arg2 ;
-(BOOL)_validateSimpleDeletionsWithValidators:(id)arg1 requestsByObjectID:(id)arg2 error:(id*)arg3 ;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 ;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 renderedContentURLs:(id)arg5 ;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 previewAssetLocalIdentifiers:(id)arg5 revertToOriginal:(BOOL)arg6 ;
-(BOOL)_promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 extensionItem:(id)arg5 ;
-(NSOrderedSet *)insertRequests;
-(NSOrderedSet *)updateRequests;
-(NSOrderedSet *)deleteRequests;
-(NSArray *)renderedContentURLs;
-(NSArray *)assetsToChangeContent;
-(NSArray *)assetsToRevert;
-(NSArray *)assetsToHide;
-(NSArray *)assetsToDelete;
-(NSArray *)albumsToDelete;
-(NSArray *)foldersToDelete;
@end

