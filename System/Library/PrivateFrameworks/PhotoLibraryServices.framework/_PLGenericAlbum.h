/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSMutableSet, PLManagedFolder, PLManagedAsset;

@interface _PLGenericAlbum : PLManagedObject

@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSMutableSet * albumLists; 
@property (nonatomic,retain) PLManagedFolder * parentFolder; 
@property (assign,nonatomic) long long syncEventOrderKey; 
@property (assign,nonatomic) int customSortKey; 
@property (assign,nonatomic) BOOL customSortAscending; 
@property (nonatomic,retain) PLManagedAsset * customKeyAsset; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
@end

