/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMSystemXsanVolumePreferencesDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadOnlyMount;
	NSArray* _payloadDenyMount;
	NSArray* _payloadDenyDLC;
	NSArray* _payloadPreferDLC;
	NSNumber* _payloadUseDLC;

}

@property (nonatomic,copy) NSArray * payloadOnlyMount;              //@synthesize payloadOnlyMount=_payloadOnlyMount - In the implementation block
@property (nonatomic,copy) NSArray * payloadDenyMount;              //@synthesize payloadDenyMount=_payloadDenyMount - In the implementation block
@property (nonatomic,copy) NSArray * payloadDenyDLC;                //@synthesize payloadDenyDLC=_payloadDenyDLC - In the implementation block
@property (nonatomic,copy) NSArray * payloadPreferDLC;              //@synthesize payloadPreferDLC=_payloadPreferDLC - In the implementation block
@property (nonatomic,copy) NSNumber * payloadUseDLC;                //@synthesize payloadUseDLC=_payloadUseDLC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withOnlyMount:(id)arg2 withDenyMount:(id)arg3 withDenyDLC:(id)arg4 withPreferDLC:(id)arg5 withUseDLC:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadOnlyMount:(NSArray *)arg1 ;
-(void)setPayloadDenyMount:(NSArray *)arg1 ;
-(void)setPayloadDenyDLC:(NSArray *)arg1 ;
-(void)setPayloadPreferDLC:(NSArray *)arg1 ;
-(void)setPayloadUseDLC:(NSNumber *)arg1 ;
-(NSArray *)payloadOnlyMount;
-(NSArray *)payloadDenyMount;
-(NSArray *)payloadDenyDLC;
-(NSArray *)payloadPreferDLC;
-(NSNumber *)payloadUseDLC;
@end

