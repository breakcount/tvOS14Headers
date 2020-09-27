/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSArray, NSNumber;

@interface MCDNSSettingsPayload : MCPayload {

	NSDictionary* _dnsSettings;
	NSArray* _onDemandRules;
	NSNumber* _prohibitDisablement;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * dnsSettings;                          //@synthesize dnsSettings=_dnsSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * onDemandRules;                             //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * prohibitDisablement;                      //@synthesize prohibitDisablement=_prohibitDisablement - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)installationWarnings;
-(NSDictionary *)dnsSettings;
-(NSArray *)onDemandRules;
-(NSNumber *)prohibitDisablement;
-(NSDictionary *)configurationDictionary;
@end

