/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPCharacteristicValueTransition, HAPCharacteristicValueTransitionState, NSString;

@interface HAPCharacteristicValueTransitionControlResponse : NSObject <NSCopying, HAPTLVProtocol> {

	HAPCharacteristicValueTransition* _valueTransition;
	HAPCharacteristicValueTransitionState* _transitionState;

}

@property (nonatomic,retain) HAPCharacteristicValueTransition * valueTransition;                   //@synthesize valueTransition=_valueTransition - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionState * transitionState;              //@synthesize transitionState=_transitionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setValueTransition:(HAPCharacteristicValueTransition *)arg1 ;
-(void)setTransitionState:(HAPCharacteristicValueTransitionState *)arg1 ;
-(HAPCharacteristicValueTransition *)valueTransition;
-(HAPCharacteristicValueTransitionState *)transitionState;
-(id)initWithValueTransition:(id)arg1 transitionState:(id)arg2 ;
@end

