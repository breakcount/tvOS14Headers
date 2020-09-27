/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PPConnectionsAddressFormatter : NSObject
+(id)addressComponentValueWithLocationField:(unsigned char)arg1 forAddress:(id)arg2 duetEvent:(id)arg3 ;
+(BOOL)isValidAddressDictionary:(id)arg1 ;
+(id)formattedStreetNameWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 ;
+(id)formattedCityAndStateWithCity:(id)arg1 state:(id)arg2 ;
+(id)singleLineFormattedAddressWithPostalAddress:(id)arg1 shortStyle:(BOOL)arg2 ;
+(id)postalAddressFromDuetEvent:(id)arg1 ;
+(id)postalAddressFromAttributeSet:(id)arg1 ;
+(id)formattedAddressWithLocationField:(unsigned char)arg1 address:(id)arg2 duetEvent:(id)arg3 shortStyle:(BOOL)arg4 ;
+(id)addressDictionaryFromAttributeSet:(id)arg1 ;
@end

