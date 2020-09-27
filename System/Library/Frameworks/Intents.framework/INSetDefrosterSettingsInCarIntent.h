/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetDefrosterSettingsInCarIntentExport.h>

@class NSNumber, INSpeakableString, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enable; 
@property (nonatomic,readonly) long long defroster; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(void)setEnable:(NSNumber *)arg1 ;
-(NSNumber *)enable;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)carName;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 ;
-(long long)defroster;
-(void)setDefroster:(long long)arg1 ;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 carName:(id)arg3 ;
@end

