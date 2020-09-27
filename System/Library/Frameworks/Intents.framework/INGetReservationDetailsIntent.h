/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetReservationDetailsIntentExport.h>

@class INSpeakableString, NSArray, NSString;

@interface INGetReservationDetailsIntent : INIntent <INGetReservationDetailsIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * reservationContainerReference; 
@property (nonatomic,copy,readonly) NSArray * reservationItemReferences; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INSpeakableString *)reservationContainerReference;
-(void)setReservationContainerReference:(INSpeakableString *)arg1 ;
-(NSArray *)reservationItemReferences;
-(void)setReservationItemReferences:(NSArray *)arg1 ;
-(id)initWithReservationContainerReference:(id)arg1 reservationItemReferences:(id)arg2 ;
@end

