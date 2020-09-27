/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantityType, NSString;

@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration {

	BOOL _canResumeFromLastDatum;
	HKQuantityType* _quantityType;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) HKQuantityType * quantityType;                //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL canResumeFromLastDatum;              //@synthesize canResumeFromLastDatum=_canResumeFromLastDatum - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(id)initWithQuantityType:(id)arg1 bundleIdentifier:(id)arg2 canResumeFromLastDatum:(BOOL)arg3 ;
-(BOOL)canResumeFromLastDatum;
@end

