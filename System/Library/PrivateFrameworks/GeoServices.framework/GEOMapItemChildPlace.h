/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDChildPlace, GEOMapItemIdentifier, NSString;

@interface GEOMapItemChildPlace : NSObject {

	GEOPDChildPlace* _childPlace;
	GEOMapItemIdentifier* _identifier;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(GEOMapItemIdentifier *)identifier;
-(id)initWithChildPlace:(id)arg1 ;
@end

