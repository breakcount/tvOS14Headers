/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEOPlaceRequestTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSearchTicket.h>

@class NSString, GEOMapServiceTraits, GEOMapRegion, NSArray, GEORelatedSearchSuggestion, NSDictionary, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection, GEOPDMerchantLookupResult;

@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket> {

	BOOL _shiftLocationsIfNeeded;

}

@property (nonatomic,readonly) NSString * searchQuery; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions; 
@property (nonatomic,readonly) NSArray * browseCategories; 
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
@property (nonatomic,readonly) int searchResultType; 
@property (nonatomic,readonly) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) NSArray * displayHeaderSubstitutes; 
@property (nonatomic,readonly) BOOL shouldEnableRedoSearch; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolvedResult; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,readonly) NSArray * retainedSearchMetadata; 
@property (nonatomic,readonly) NSArray * searchResultSections; 
@property (nonatomic,readonly) GEOCategorySearchResultSection * categorySearchResultSection; 
@property (nonatomic,readonly) NSArray * relatedEntitySections; 
@property (nonatomic,readonly) unsigned dymSuggestionVisibleTime; 
@property (nonatomic,readonly) BOOL showDymSuggestionCloseButton; 
@property (assign,nonatomic) unsigned long long cachePolicy; 
@property (nonatomic,readonly) GEOPDMerchantLookupResult * merchantLookupResult; 
@property (nonatomic,readonly) NSArray * collectionResults; 
@property (nonatomic,readonly) NSArray * publisherResults; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE86 dataRequestKind; 
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(NSString *)searchQuery;
-(id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
@end

