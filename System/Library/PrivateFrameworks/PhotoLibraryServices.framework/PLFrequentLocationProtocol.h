/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDateInterval, NSArray;


@protocol PLFrequentLocationProtocol <NSObject>
@property (readonly) CLLocationCoordinate2D coordinate; 
@property (readonly) NSDateInterval * dateInterval; 
@property (readonly) NSArray * sortedMoments; 
@required
-(CLLocationCoordinate2D)coordinate;
-(NSDateInterval *)dateInterval;
-(NSArray *)sortedMoments;

@end

