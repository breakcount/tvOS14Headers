/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContactFieldConfiguration;

@interface PKAddressFormatConfiguration : NSObject <NSSecureCoding> {

	PKContactFieldConfiguration* _streetFieldConfiguration;
	PKContactFieldConfiguration* _subLocalityFieldConfiguration;
	PKContactFieldConfiguration* _cityFieldConfiguration;
	PKContactFieldConfiguration* _subAdministrativeAreaFieldConfiguration;
	PKContactFieldConfiguration* _stateFieldConfiguration;
	PKContactFieldConfiguration* _postalCodeFieldConfiguration;

}

@property (nonatomic,readonly) PKContactFieldConfiguration * streetFieldConfiguration;                             //@synthesize streetFieldConfiguration=_streetFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * subLocalityFieldConfiguration;                        //@synthesize subLocalityFieldConfiguration=_subLocalityFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * cityFieldConfiguration;                               //@synthesize cityFieldConfiguration=_cityFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * subAdministrativeAreaFieldConfiguration;              //@synthesize subAdministrativeAreaFieldConfiguration=_subAdministrativeAreaFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * stateFieldConfiguration;                              //@synthesize stateFieldConfiguration=_stateFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * postalCodeFieldConfiguration;                         //@synthesize postalCodeFieldConfiguration=_postalCodeFieldConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(PKContactFieldConfiguration *)streetFieldConfiguration;
-(PKContactFieldConfiguration *)subLocalityFieldConfiguration;
-(PKContactFieldConfiguration *)cityFieldConfiguration;
-(PKContactFieldConfiguration *)subAdministrativeAreaFieldConfiguration;
-(PKContactFieldConfiguration *)stateFieldConfiguration;
-(PKContactFieldConfiguration *)postalCodeFieldConfiguration;
@end

