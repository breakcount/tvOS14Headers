/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLRegionsAgglomerativeClusteringDataCluster : NSObject {

	NSArray* _vectors;
	double _latitude;
	double _longitude;
	double _radius;
	double _score;

}

@property (readonly) NSArray * vectors;                     //@synthesize vectors=_vectors - In the implementation block
@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double radius;                 //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double score;                  //@synthesize score=_score - In the implementation block
+(id)dataClusterWithDataVector:(id)arg1 ;
+(id)mergedClusterFrom:(id)arg1 ;
-(id)description;
-(double)score;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(NSArray *)vectors;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setScore:(double)arg1 ;
-(id)initWithDataVector:(id)arg1 ;
@end

