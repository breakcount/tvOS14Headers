/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFAppendVariableAction : WFAction
-(id)variableName;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)providedVariableNames;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(id)accessibilityName;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
@end

