/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray;

@interface MKLocalSearchResponse : NSObject {

	NSArray* _mapItems;
	SCD_Struct_MK13 _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK7 boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(id)description;
-(NSArray *)mapItems;
-(SCD_Struct_MK7)boundingRegion;
-(id)_dictionaryRepresentation;
-(id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
@end

