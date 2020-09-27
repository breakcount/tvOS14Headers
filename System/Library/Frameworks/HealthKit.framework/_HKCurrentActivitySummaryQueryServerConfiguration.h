/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration {

	NSDictionary* _collectionIntervals;

}

@property (nonatomic,copy) NSDictionary * collectionIntervals;              //@synthesize collectionIntervals=_collectionIntervals - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCollectionIntervals:(NSDictionary *)arg1 ;
-(NSDictionary *)collectionIntervals;
@end

