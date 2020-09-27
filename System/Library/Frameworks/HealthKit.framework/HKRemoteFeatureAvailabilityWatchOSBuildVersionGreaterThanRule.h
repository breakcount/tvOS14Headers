/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityRule.h>

@class NSString;

@interface HKRemoteFeatureAvailabilityWatchOSBuildVersionGreaterThanRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {

	NSString* _buildVersion;

}

@property (nonatomic,retain) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
@end

