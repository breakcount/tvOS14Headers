/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetSearchResult.h>

@class NSArray, NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {

	unsigned long long _assetCount;
	NSArray* _assetUUIDs;
	BOOL _resultsCanOverlap;
	NSMutableArray* _assetSearchResults;

}

@property (nonatomic,retain) NSMutableArray * assetSearchResults;              //@synthesize assetSearchResults=_assetSearchResults - In the implementation block
@property (assign,nonatomic) BOOL resultsCanOverlap;                           //@synthesize resultsCanOverlap=_resultsCanOverlap - In the implementation block
@property (nonatomic,readonly) NSArray * groupResults; 
-(unsigned long long)assetCount;
-(id)assetUUIDs;
-(id)initWithAssetSearchResults:(id)arg1 canOverlap:(BOOL)arg2 ;
-(id)initWithAssetSearchResult:(id)arg1 ;
-(void)addAssetSearchResult:(id)arg1 isMainSearchResult:(BOOL)arg2 ;
-(unsigned long long)categoryMask;
-(id)groupDescription;
-(NSArray *)groupResults;
-(NSMutableArray *)assetSearchResults;
-(void)setAssetSearchResults:(NSMutableArray *)arg1 ;
-(BOOL)resultsCanOverlap;
-(void)setResultsCanOverlap:(BOOL)arg1 ;
@end

