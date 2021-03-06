/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFStatusItem.h>

@interface HFAbstractRangeStatusItem : HFStatusItem
+(id)_localizedStringForKey:(id)arg1 ;
+(id)controllableServiceTypes;
+(id)sensorServiceTypes;
+(id)currentValueCharacteristicType;
+(id)targetValueCharacteristicType;
+(id)minimumTargetValueCharacteristicType;
+(id)maximumTargetValueCharacteristicType;
+(id)currentModeCharacteristicTypes;
+(id)targetModeCharacteristicTypes;
+(long long)currentStateForResponses:(id)arg1 ;
+(unsigned long long)badgeTypeForState:(long long)arg1 ;
+(unsigned long long)statusItemCategory;
+(id)titleStringForState:(long long)arg1 ;
+(id)descriptionStringForCharacteristicType:(id)arg1 withResponses:(id)arg2 ;
+(id)displayTitleStringForService:(id)arg1 withResponse:(id)arg2 multipleServices:(BOOL)arg3 updateOptions:(id)arg4 ;
+(unsigned long long)abstractTargetModeInResponse:(id)arg1 ;
+(unsigned long long)abstractCurrentModeInResponse:(id)arg1 ;
+(id)_localizedStateStringForKey:(id)arg1 ;
+(BOOL)shouldShowAverageForRange:(id)arg1 ;
+(id)formatValue:(id)arg1 forCharacteristic:(id)arg2 ;
+(id)customValueFormatter;
+(BOOL)isPercentRange;
+(id)_defaultValueFormatter;
+(id)_localizedRangeStringForKey:(id)arg1 ;
+(/*^block*/id)displayValueComparator;
+(id)localizationKeyPrefix;
-(id)title;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg1 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1 ;
@end

