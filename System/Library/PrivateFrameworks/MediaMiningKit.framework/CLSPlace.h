/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSPrimitive.h>

@class NSString, CLCircularRegion, CLSLitePlacemark, NSArray, CLSBusinessItem;

@interface CLSPlace : CLSPrimitive {

	NSString* _name;
	CLCircularRegion* _region;
	CLSLitePlacemark* _placemark;
	NSArray* _categories;
	CLSBusinessItem* _businessItem;

}

@property (nonatomic,readonly) CLSBusinessItem * businessItem;                 //@synthesize businessItem=_businessItem - In the implementation block
@property (nonatomic,retain) NSArray * categories;                             //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * region;                      //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) CLSLitePlacemark * placemark;                   //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)placeWithBusinessItem:(id)arg1 ;
+(id)placeWithLocation:(id)arg1 ;
+(id)placeWithPlacemark:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(CLCircularRegion *)region;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(CLSLitePlacemark *)placemark;
-(BOOL)isEqualToPlace:(id)arg1 ;
-(CLSBusinessItem *)businessItem;
@end

