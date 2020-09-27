/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLRegionsClusteringItem.h>

@class NSDate, NSString;

@interface TestPLClusterable : NSObject <PLRegionsClusteringItem> {

	double _pl_gpsHorizontalAccuracy;
	NSDate* _pl_date;
	NSString* _pl_uuid;
	CLLocationCoordinate2D _pl_coordinate;

}

@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate;              //@synthesize pl_coordinate=_pl_coordinate - In the implementation block
@property (nonatomic,readonly) double pl_gpsHorizontalAccuracy;                   //@synthesize pl_gpsHorizontalAccuracy=_pl_gpsHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) NSDate * pl_date;                                  //@synthesize pl_date=_pl_date - In the implementation block
@property (nonatomic,readonly) NSString * pl_uuid;                                //@synthesize pl_uuid=_pl_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clusterableWithLatitude:(double)arg1 longitude:(double)arg2 time:(double)arg3 ;
-(NSString *)description;
-(NSDate *)pl_date;
-(NSString *)pl_uuid;
-(double)pl_gpsHorizontalAccuracy;
-(CLLocationCoordinate2D)pl_coordinate;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 time:(double)arg3 ;
@end

