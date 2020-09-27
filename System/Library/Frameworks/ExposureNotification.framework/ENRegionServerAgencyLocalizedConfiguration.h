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

@class NSLocale, ENRegion, NSString, NSArray;

@interface ENRegionServerAgencyLocalizedConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSLocale* _locale;
	ENRegion* _region;
	NSString* _agencyMessage;
	NSString* _displayName;
	NSString* _legalConsentText;
	NSString* _onboardingNotificationBody;
	NSString* _regionName;
	NSString* _revokedNotificationBody;
	NSString* _revokedNotificationSubject;
	NSString* _symptomsOnsetDescription;
	NSString* _testVerificationIntroMessage;
	NSString* _traveledQuestionText;
	NSArray* _notificationConfigurations;

}

@property (nonatomic,copy) NSLocale * locale;                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) ENRegion * region;                           //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSString * agencyMessage;                             //@synthesize agencyMessage=_agencyMessage - In the implementation block
@property (nonatomic,copy) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * legalConsentText;                          //@synthesize legalConsentText=_legalConsentText - In the implementation block
@property (nonatomic,copy) NSString * onboardingNotificationBody;                //@synthesize onboardingNotificationBody=_onboardingNotificationBody - In the implementation block
@property (nonatomic,copy) NSString * regionName;                                //@synthesize regionName=_regionName - In the implementation block
@property (nonatomic,copy) NSString * revokedNotificationBody;                   //@synthesize revokedNotificationBody=_revokedNotificationBody - In the implementation block
@property (nonatomic,copy) NSString * revokedNotificationSubject;                //@synthesize revokedNotificationSubject=_revokedNotificationSubject - In the implementation block
@property (nonatomic,copy) NSString * symptomsOnsetDescription;                  //@synthesize symptomsOnsetDescription=_symptomsOnsetDescription - In the implementation block
@property (nonatomic,copy) NSString * testVerificationIntroMessage;              //@synthesize testVerificationIntroMessage=_testVerificationIntroMessage - In the implementation block
@property (nonatomic,copy) NSString * traveledQuestionText;                      //@synthesize traveledQuestionText=_traveledQuestionText - In the implementation block
@property (nonatomic,copy) NSArray * notificationConfigurations;                 //@synthesize notificationConfigurations=_notificationConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)getLocalizedAgencyConfiguration:(id*)arg1 region:(id)arg2 fromDictionary:(id)arg3 locale:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)displayName;
-(ENRegion *)region;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setRegionName:(NSString *)arg1 ;
-(NSString *)regionName;
-(id)initWithRegion:(id)arg1 ;
-(NSString *)agencyMessage;
-(NSString *)legalConsentText;
-(NSString *)revokedNotificationSubject;
-(NSString *)revokedNotificationBody;
-(NSString *)testVerificationIntroMessage;
-(NSString *)traveledQuestionText;
-(void)setAgencyMessage:(NSString *)arg1 ;
-(void)setLegalConsentText:(NSString *)arg1 ;
-(NSString *)onboardingNotificationBody;
-(void)setOnboardingNotificationBody:(NSString *)arg1 ;
-(void)setRevokedNotificationBody:(NSString *)arg1 ;
-(void)setRevokedNotificationSubject:(NSString *)arg1 ;
-(NSString *)symptomsOnsetDescription;
-(void)setSymptomsOnsetDescription:(NSString *)arg1 ;
-(void)setTestVerificationIntroMessage:(NSString *)arg1 ;
-(void)setTraveledQuestionText:(NSString *)arg1 ;
-(NSArray *)notificationConfigurations;
-(void)setNotificationConfigurations:(NSArray *)arg1 ;
@end

