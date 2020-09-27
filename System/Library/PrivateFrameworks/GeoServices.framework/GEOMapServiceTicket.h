/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits, GEOMapRegion, NSArray, GEORelatedSearchSuggestion, NSDictionary, NSString, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection, GEOPDMerchantLookupResult;


@protocol GEOMapServiceTicket <GEOMapServiceCancellableTicket,GEOMapServiceCorrectableTicket,GEOMapServiceThrottlableTicket>
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
@required
-(void)setCachePolicy:(unsigned long long)arg1;
-(unsigned long long)cachePolicy;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(GEOCategorySearchResultSection *)categorySearchResultSection;
-(BOOL)isChainResultSet;
-(NSArray *)relatedSearchSuggestions;
-(NSArray *)relatedEntitySections;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(BOOL)shouldEnableRedoSearch;
-(NSString *)resultDisplayHeader;
-(GEODirectionIntent *)directionIntent;
-(GEOResolvedItem *)clientResolvedResult;
-(int)searchResultType;
-(NSArray *)displayHeaderSubstitutes;
-(unsigned)dymSuggestionVisibleTime;
-(BOOL)showDymSuggestionCloseButton;
-(NSArray *)searchResultSections;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4;
-(GEOMapServiceTraits *)traits;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 queue:(id)arg5;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 queue:(id)arg5;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3;
-(void)applyToPlaceInfo:(id)arg1;
-(GEOMapRegion *)resultBoundingRegion;
-(NSArray *)browseCategories;
-(GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
-(NSString *)resultSectionHeader;
-(NSArray *)retainedSearchMetadata;
-(NSArray *)collectionResults;
-(NSArray *)publisherResults;

@end

