/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSUUID, NSDate, HKClinicalGateway, NSString, HKClinicalBrand;

@interface HKClinicalAccount : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	BOOL _userEnabled;
	NSUUID* _identifier;
	long long _state;
	NSDate* _lastFetchDate;
	NSDate* _lastFullFetchDate;
	HKClinicalGateway* _gateway;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long state;                                    //@synthesize state=_state - In the implementation block
@property (getter=isUserEnabled,nonatomic,readonly) BOOL userEnabled;              //@synthesize userEnabled=_userEnabled - In the implementation block
@property (nonatomic,readonly) BOOL needsRelogin; 
@property (nonatomic,readonly) BOOL needsScopeUpgrade; 
@property (nonatomic,copy,readonly) NSDate * lastFetchDate;                        //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFullFetchDate;                    //@synthesize lastFullFetchDate=_lastFullFetchDate - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalGateway * gateway;                   //@synthesize gateway=_gateway - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(long long)state;
-(NSString *)title;
-(NSString *)subtitle;
-(NSDate *)lastFetchDate;
-(HKClinicalGateway *)gateway;
-(HKClinicalBrand *)brand;
-(BOOL)isUserEnabled;
-(NSDate *)lastFullFetchDate;
-(id)initWithIdentifier:(id)arg1 state:(long long)arg2 userEnabled:(BOOL)arg3 lastFetchDate:(id)arg4 lastFullFetchDate:(id)arg5 gateway:(id)arg6 ;
-(BOOL)needsScopeUpgrade;
-(BOOL)needsRelogin;
@end

