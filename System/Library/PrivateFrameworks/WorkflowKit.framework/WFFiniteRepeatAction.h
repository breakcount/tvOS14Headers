/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRepeatAction.h>

@interface WFFiniteRepeatAction : WFRepeatAction {

	unsigned long long _numberOfLoops;

}
-(unsigned long long)numberOfLoops;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
-(void)runWithInput:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 variableSource:(id)arg4 workQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)shouldRepeatWithVariableSource:(id)arg1 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(id)repeatInputVariableName;
-(id)repeatCountVariableName;
-(void)setRepeatInput:(id)arg1 withVariableSource:(id)arg2 ;
-(id)repeatInputWithVariableSource:(id)arg1 ;
-(void)setRepeatCount:(long long)arg1 withVariableSource:(id)arg2 ;
-(long long)repeatCountWithVariableSource:(id)arg1 ;
@end

