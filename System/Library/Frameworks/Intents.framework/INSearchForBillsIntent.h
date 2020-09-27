/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForBillsIntentExport.h>

@class INBillPayee, INDateComponentsRange, NSString;

@interface INSearchForBillsIntent : INIntent <INSearchForBillsIntentExport>

@property (nonatomic,copy,readonly) INBillPayee * billPayee; 
@property (nonatomic,copy,readonly) INDateComponentsRange * paymentDateRange; 
@property (nonatomic,readonly) long long billType; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dueDateRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(long long)status;
-(void)_setMetadata:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(INBillPayee *)arg1 ;
-(long long)billType;
-(void)setBillType:(long long)arg1 ;
-(INDateComponentsRange *)dueDateRange;
-(void)setDueDateRange:(INDateComponentsRange *)arg1 ;
-(INDateComponentsRange *)paymentDateRange;
-(void)setPaymentDateRange:(INDateComponentsRange *)arg1 ;
-(id)initWithBillPayee:(id)arg1 paymentDateRange:(id)arg2 billType:(long long)arg3 status:(long long)arg4 dueDateRange:(id)arg5 ;
@end

