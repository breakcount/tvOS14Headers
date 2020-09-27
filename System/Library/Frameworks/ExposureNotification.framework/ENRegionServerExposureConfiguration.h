/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface ENRegionServerExposureConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _enableRecursiveReportType;
	BOOL _matchingRestrictedToRegion;
	NSString* _appBundleIdentifier;
	NSArray* _classificationCriteria;
	NSDictionary* _exposureConfigurationValues;
	double _privacyParameterInputCandenceInterval;

}

@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;                          //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * classificationCriteria;                        //@synthesize classificationCriteria=_classificationCriteria - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * exposureConfigurationValues;              //@synthesize exposureConfigurationValues=_exposureConfigurationValues - In the implementation block
@property (nonatomic,readonly) BOOL enableRecursiveReportType;                               //@synthesize enableRecursiveReportType=_enableRecursiveReportType - In the implementation block
@property (nonatomic,readonly) BOOL matchingRestrictedToRegion;                              //@synthesize matchingRestrictedToRegion=_matchingRestrictedToRegion - In the implementation block
@property (nonatomic,readonly) double privacyParameterInputCandenceInterval;                 //@synthesize privacyParameterInputCandenceInterval=_privacyParameterInputCandenceInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(id)initWithServerResponseDictionary:(id)arg1 ;
-(NSArray *)classificationCriteria;
-(NSDictionary *)exposureConfigurationValues;
-(BOOL)enableRecursiveReportType;
-(BOOL)matchingRestrictedToRegion;
-(double)privacyParameterInputCandenceInterval;
@end

