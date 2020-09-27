/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {

	NSMutableOrderedSet* _allAlbums;
	NSMutableOrderedSet* _childAlbumLists;
	int _filter;

}

@property (assign,nonatomic) int filter;                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)identifier;
-(int)filter;
-(id)managedObjectContext;
-(void)setFilter:(int)arg1 ;
-(NSString *)_typeDescription;
-(id)albums;
-(id)photoLibrary;
-(BOOL)isFolder;
-(unsigned long long)albumsCount;
-(NSString *)_prettyDescription;
-(short)albumListType;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)canEditAlbums;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(id)albumsSortingComparator;
-(unsigned long long)unreadAlbumsCount;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_invalidateAllAlbums;
@end

