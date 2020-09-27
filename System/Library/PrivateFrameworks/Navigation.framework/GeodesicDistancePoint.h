/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface GeodesicDistancePoint : NSObject {

	NSDate* _date;
	double _geodesicDistance;

}

@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double geodesicDistance;                    //@synthesize geodesicDistance=_geodesicDistance - In the implementation block
@property (readonly) double timeIntervalSinceReferenceDate; 
-(id)description;
-(double)timeIntervalSinceReferenceDate;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(double)geodesicDistance;
-(id)initWithDate:(id)arg1 geodesicDistance:(double)arg2 ;
-(void)setGeodesicDistance:(double)arg1 ;
@end

