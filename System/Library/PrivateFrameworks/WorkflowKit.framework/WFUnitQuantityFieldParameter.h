/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>

@class NSArray, NSString, NSUnit, NSDictionary;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter {

	BOOL _fallbackToAllSupportedUnits;
	NSArray* _possibleUnits;
	NSString* _unitType;
	NSUnit* _defaultUnit;
	NSDictionary* _unitSymbolMap;

}

@property (nonatomic,retain) NSDictionary * unitSymbolMap;                  //@synthesize unitSymbolMap=_unitSymbolMap - In the implementation block
@property (nonatomic,copy) NSString * unitType;                             //@synthesize unitType=_unitType - In the implementation block
@property (nonatomic,retain) NSUnit * defaultUnit;                          //@synthesize defaultUnit=_defaultUnit - In the implementation block
@property (assign,nonatomic) BOOL fallbackToAllSupportedUnits;              //@synthesize fallbackToAllSupportedUnits=_fallbackToAllSupportedUnits - In the implementation block
-(NSUnit *)defaultUnit;
-(void)setDefaultUnit:(NSUnit *)arg1 ;
-(void)setUnitType:(NSString *)arg1 ;
-(NSString *)unitType;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)setPossibleUnits:(id)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(id)possibleUnits;
-(void)setFallbackToAllSupportedUnits:(BOOL)arg1 ;
-(id)availableUnitForStringValue:(id)arg1 ;
-(void)updatePossibleUnits;
-(BOOL)fallbackToAllSupportedUnits;
-(NSDictionary *)unitSymbolMap;
-(void)setUnitSymbolMap:(NSDictionary *)arg1 ;
@end

