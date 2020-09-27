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

@class NSMutableArray, HAPCharacteristicValueTransitionLinearStartConditionWrapper, NSString;

@interface HAPCharacteristicValueLinearTransition : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _transitionPoints;
	HAPCharacteristicValueTransitionLinearStartConditionWrapper* _startBehavior;

}

@property (nonatomic,retain) NSMutableArray * transitionPoints;                                                        //@synthesize transitionPoints=_transitionPoints - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionLinearStartConditionWrapper * startBehavior;              //@synthesize startBehavior=_startBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPCharacteristicValueTransitionLinearStartConditionWrapper *)startBehavior;
-(void)setStartBehavior:(HAPCharacteristicValueTransitionLinearStartConditionWrapper *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setTransitionPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitionPoints;
-(id)initWithTransitionPoints:(id)arg1 startBehavior:(id)arg2 ;
@end

