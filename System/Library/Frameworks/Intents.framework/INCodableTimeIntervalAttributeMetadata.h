/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSNumber, NSString;

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	long long _defaultUnit;
	long long _minimumUnit;
	long long _maximumUnit;
	NSNumber* _defaultValue;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (assign,nonatomic) long long defaultUnit;                 //@synthesize defaultUnit=_defaultUnit - In the implementation block
@property (assign,nonatomic) long long minimumUnit;                 //@synthesize minimumUnit=_minimumUnit - In the implementation block
@property (assign,nonatomic) long long maximumUnit;                 //@synthesize maximumUnit=_maximumUnit - In the implementation block
@property (nonatomic,retain) NSNumber * defaultValue;               //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSNumber * minimumValue;               //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;               //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)defaultValue;
-(void)setDefaultValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(NSNumber *)maximumValue;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(long long)defaultUnit;
-(void)setDefaultUnit:(long long)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(long long)minimumUnit;
-(void)setMinimumUnit:(long long)arg1 ;
-(long long)maximumUnit;
-(void)setMaximumUnit:(long long)arg1 ;
-(id)__INCodableDescriptionMaximumValueKey;
-(id)__INCodableDescriptionMinimumValueKey;
-(id)__INCodableDescriptionMaximumUnitKey;
-(id)__INCodableDescriptionMinimumUnitKey;
-(id)__INCodableDescriptionDefaultUnitKey;
-(id)__INCodableDescriptionUnitKey;
-(id)__INIntentResponseCodableDescriptionMaximumUnitKey;
-(id)__INTypeCodableDescriptionMaximumUnitKey;
-(id)__INIntentResponseCodableDescriptionUnitKey;
-(id)__INTypeCodableDescriptionUnitKey;
-(id)__INIntentResponseCodableDescriptionMinimumValueKey;
-(id)__INTypeCodableDescriptionMinimumValueKey;
-(id)__INIntentResponseCodableDescriptionMaximumValueKey;
-(id)__INTypeCodableDescriptionMaximumValueKey;
-(id)__INIntentResponseCodableDescriptionDefaultUnitKey;
-(id)__INTypeCodableDescriptionDefaultUnitKey;
-(id)__INIntentResponseCodableDescriptionMinimumUnitKey;
-(id)__INTypeCodableDescriptionMinimumUnitKey;
@end

