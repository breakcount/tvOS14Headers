/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, SFApp;

@interface SFAppCalendarUsage : NSManagedObject

@property (nonatomic,copy) NSNumber * dayOfWeek; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSNumber * tier1; 
@property (nonatomic,copy) NSNumber * tier2; 
@property (nonatomic,copy) NSNumber * tier3; 
@property (nonatomic,copy) NSNumber * tier4; 
@property (nonatomic,copy) NSNumber * tier5; 
@property (nonatomic,copy) NSNumber * timeOfDaySlot; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,retain) SFApp * hasApp; 
@property (nonatomic,retain) SFApp * hintedBy; 
+(id)entityName;
+(id)fetchRequest;
@end

