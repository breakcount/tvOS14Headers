/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class NSArray, WFAction, NSString;

@interface WFTrelloListPickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	NSArray* _possibleStates;
	WFAction* _action;
	id _observer;

}

@property (nonatomic,retain) id observer;                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
@property (assign,nonatomic,__weak) WFAction * action;                //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObserver:(id)arg1 ;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(id)observer;
-(id)defaultSerializedRepresentation;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(Class)singleStateClass;
-(void)possibleStatesDidChange;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)updateLists;
@end
