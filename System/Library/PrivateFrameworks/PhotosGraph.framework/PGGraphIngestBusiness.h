/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDateInterval, CLCircularRegion;


@protocol PGGraphIngestBusiness <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * businessCategories; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) double routineVisitConfidence; 
@property (nonatomic,readonly) BOOL hasRoutineVisit; 
@property (nonatomic,readonly) CLCircularRegion * region; 
@required
-(NSString *)name;
-(CLCircularRegion *)region;
-(unsigned long long)muid;
-(NSDateInterval *)dateInterval;
-(long long)venueCapacity;
-(NSArray *)businessCategories;
-(double)routineVisitConfidence;
-(BOOL)hasRoutineVisit;

@end
