/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFNumberFieldParameter.h>

@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter {

	NSArray* _possibleUnits;

}

@property (nonatomic,copy) NSArray * possibleUnits;              //@synthesize possibleUnits=_possibleUnits - In the implementation block
+(BOOL)defaultAllowsNegativeNumbers;
+(BOOL)defaultAllowsDecimalNumbers;
-(id)defaultUnit;
-(id)defaultSerializedRepresentation;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPossibleUnits:(NSArray *)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(NSArray *)possibleUnits;
@end
