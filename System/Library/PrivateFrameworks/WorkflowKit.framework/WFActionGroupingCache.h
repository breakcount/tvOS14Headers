/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFActionGroupingCache : NSObject {

	NSMutableDictionary* _actionsByGroupingIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * actionsByGroupingIdentifier;              //@synthesize actionsByGroupingIdentifier=_actionsByGroupingIdentifier - In the implementation block
-(id)init;
-(void)removeAction:(id)arg1 ;
-(void)addAction:(id)arg1 sortingWithWorkflowActions:(id)arg2 ;
-(void)sortActionsForGroupingIdentifier:(id)arg1 withWorkflowActions:(id)arg2 ;
-(id)actionsForGroupingIdentifier:(id)arg1 ;
-(NSMutableDictionary *)actionsByGroupingIdentifier;
@end

