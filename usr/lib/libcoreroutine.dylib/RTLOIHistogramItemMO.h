/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, RTEventLocationIdentifierMO;

@interface RTLOIHistogramItemMO : NSManagedObject

@property (nonatomic,retain) NSString * locationOfInterestIdentifier; 
@property (nonatomic,retain) NSNumber * timeOfStay; 
@property (nonatomic,retain) NSNumber * probability; 
@property (nonatomic,retain) NSNumber * numOfEvents; 
@property (nonatomic,retain) RTEventLocationIdentifierMO * eventLocationIdentifier; 
+(id)managedObjectWithLOIHistogramItem:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

