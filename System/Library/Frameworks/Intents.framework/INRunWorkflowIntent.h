/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INRunWorkflowIntentExport.h>

@class INSpeakableString, NSString;

@interface INRunWorkflowIntent : INIntent <INRunWorkflowIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * workflow; 
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
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INSpeakableString *)workflow;
-(void)setWorkflow:(INSpeakableString *)arg1 ;
-(id)initWithWorkflow:(id)arg1 ;
@end

