/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDCollectionResult, GEOPDComponent, GEOPlaceCollection, NSArray;

@interface GEOCollectionResult : NSObject {

	GEOPDCollectionResult* _collectionResult;
	GEOPDComponent* _collectionComponent;

}

@property (nonatomic,readonly) GEOPlaceCollection * collection; 
@property (nonatomic,readonly) NSArray * placeCollectionItems; 
+(id)collectionResultsFromResponse:(id)arg1 ;
-(GEOPlaceCollection *)collection;
-(id)initWithCollectionResult:(id)arg1 ;
-(NSArray *)placeCollectionItems;
@end

