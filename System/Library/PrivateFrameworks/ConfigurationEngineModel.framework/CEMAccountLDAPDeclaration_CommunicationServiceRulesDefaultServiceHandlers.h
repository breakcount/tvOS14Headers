/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers : CEMPayloadBase {

	NSString* _payloadAudioCall;

}

@property (nonatomic,copy) NSString * payloadAudioCall;              //@synthesize payloadAudioCall=_payloadAudioCall - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAudioCall:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAudioCall:(NSString *)arg1 ;
-(NSString *)payloadAudioCall;
@end

