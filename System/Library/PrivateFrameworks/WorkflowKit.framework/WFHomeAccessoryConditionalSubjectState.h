/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class NSDictionary, WFHMServiceParameterState, WFHMCharacteristicSubstitutableState, NSFormatter, HMHome, HMService, HMCharacteristic;

@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState {

	BOOL _negatesValue;
	NSDictionary* _serializedWFHMServiceParameter;
	NSDictionary* _serializedWFHMCharacteristicSubstitutableState;
	WFHMServiceParameterState* _serviceParameterState;
	WFHMCharacteristicSubstitutableState* _characteristicSubstitutableState;
	NSFormatter* _characteristicValueFormatter;

}

@property (nonatomic,retain) NSDictionary * serializedWFHMServiceParameter;                                        //@synthesize serializedWFHMServiceParameter=_serializedWFHMServiceParameter - In the implementation block
@property (nonatomic,retain) NSDictionary * serializedWFHMCharacteristicSubstitutableState;                        //@synthesize serializedWFHMCharacteristicSubstitutableState=_serializedWFHMCharacteristicSubstitutableState - In the implementation block
@property (nonatomic,retain) WFHMServiceParameterState * serviceParameterState;                                    //@synthesize serviceParameterState=_serviceParameterState - In the implementation block
@property (nonatomic,retain) WFHMCharacteristicSubstitutableState * characteristicSubstitutableState;              //@synthesize characteristicSubstitutableState=_characteristicSubstitutableState - In the implementation block
@property (nonatomic,retain) NSFormatter * characteristicValueFormatter;                                           //@synthesize characteristicValueFormatter=_characteristicValueFormatter - In the implementation block
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) HMService * service; 
@property (nonatomic,readonly) HMCharacteristic * characteristic; 
@property (nonatomic,readonly) BOOL negatesValue;                                                                  //@synthesize negatesValue=_negatesValue - In the implementation block
+(id)subjectType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)unit;
-(long long)contentType;
-(id)serializedRepresentation;
-(HMService *)service;
-(id)minimumValue;
-(id)maximumValue;
-(HMCharacteristic *)characteristic;
-(HMHome *)home;
-(id)stepValue;
-(id)maximumLength;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSerializedWFHMServiceParameter:(id)arg1 serializedWFHMCharacteristicSubstitutableState:(id)arg2 negatesValue:(BOOL)arg3 ;
-(id)initWithService:(id)arg1 characteristic:(id)arg2 homeIdentifier:(id)arg3 negatesValue:(BOOL)arg4 ;
-(WFHMServiceParameterState *)serviceParameterState;
-(WFHMCharacteristicSubstitutableState *)characteristicSubstitutableState;
-(BOOL)isEnumeration;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg1 ;
-(NSFormatter *)characteristicValueFormatter;
-(BOOL)negatesValue;
-(NSDictionary *)serializedWFHMServiceParameter;
-(void)setSerializedWFHMServiceParameter:(NSDictionary *)arg1 ;
-(NSDictionary *)serializedWFHMCharacteristicSubstitutableState;
-(void)setSerializedWFHMCharacteristicSubstitutableState:(NSDictionary *)arg1 ;
-(void)setServiceParameterState:(WFHMServiceParameterState *)arg1 ;
-(void)setCharacteristicSubstitutableState:(WFHMCharacteristicSubstitutableState *)arg1 ;
-(void)setCharacteristicValueFormatter:(NSFormatter *)arg1 ;
@end

