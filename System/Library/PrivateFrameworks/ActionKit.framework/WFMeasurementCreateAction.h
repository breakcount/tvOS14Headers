/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFMeasurementCreateAction : WFAction
-(id)currentValue;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)currentUnit;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg1 ;
-(id)outputMeasurementUnitType;
-(id)unitParameter;
-(id)currentUnitTypeState;
@end

