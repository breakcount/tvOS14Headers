/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol CLSTimeLocationTuple <NSObject>
@property (nonatomic,readonly) NSString * timeLocationIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates; 
@property (nonatomic,readonly) NSDate * expandedStartDate; 
@property (nonatomic,readonly) NSDate * expandedEndDate; 
@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(CLLocationCoordinate2D)coordinates;
-(NSString *)timeLocationIdentifier;
-(NSDate *)expandedEndDate;
-(NSDate *)expandedStartDate;

@end

