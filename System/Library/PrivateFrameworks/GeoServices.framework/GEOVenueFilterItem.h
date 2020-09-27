/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOVenueFilterItem.h>

@protocol GEOVenueFilterItem
@property (nonatomic,readonly) id<GEOVenueIdentifier> filterID; 
@property (nonatomic,readonly) id<GEOVenueLabel> label; 
@property (nonatomic,readonly) BOOL describesParentVenue; 
@required
-(id<GEOVenueLabel>)label;
-(id<GEOVenueIdentifier>)filterID;
-(BOOL)describesParentVenue;

@end


@protocol GEOVenueIdentifier, GEOVenueLabel;
@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem> {

	id<GEOVenueIdentifier> _filterID;
	id<GEOVenueLabel> _label;
	BOOL _describesParentVenue;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> filterID;              //@synthesize filterID=_filterID - In the implementation block
@property (nonatomic,readonly) id<GEOVenueLabel> label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL describesParentVenue;                    //@synthesize describesParentVenue=_describesParentVenue - In the implementation block
-(id)init;
-(id<GEOVenueLabel>)label;
-(id)initWithLabel:(id)arg1 filterID:(id)arg2 ;
-(id<GEOVenueIdentifier>)filterID;
-(BOOL)describesParentVenue;
-(id)initWithFilterElementInfo:(id)arg1 ;
@end

