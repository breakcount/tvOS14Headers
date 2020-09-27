/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@protocol WFExpandingParameterHintProvider;
@class NSString;

@interface WFExpandingParameter : WFParameter {

	NSString* _hintLabel;
	id<WFExpandingParameterHintProvider> _hintProvider;

}

@property (assign,nonatomic,__weak) id<WFExpandingParameterHintProvider> hintProvider;              //@synthesize hintProvider=_hintProvider - In the implementation block
@property (nonatomic,readonly) NSString * hintLabel;                                                //@synthesize hintLabel=_hintLabel - In the implementation block
-(NSString *)hintLabel;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(id)importQuestionBehavior;
-(id<WFExpandingParameterHintProvider>)hintProvider;
-(void)setHintProvider:(id<WFExpandingParameterHintProvider>)arg1 ;
@end

