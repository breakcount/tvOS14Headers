/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIDynamicAnimator, NSMutableArray, NSArray;

@interface UIDynamicBehavior : NSObject {

	UIDynamicAnimator* _context;
	NSMutableArray* _items;
	NSMutableArray* _behaviors;
	NSMutableArray* _addedBehaviors;
	/*^block*/id _action;

}

@property (nonatomic,copy,readonly) NSArray * childBehaviors; 
@property (nonatomic,copy) id action;                                            //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIDynamicAnimator * dynamicAnimator; 
+(void)initialize;
+(BOOL)_isPrimitiveBehavior;
-(id)description;
-(id)init;
-(void)_setContext:(id)arg1 ;
-(id)_context;
-(id)items;
-(id)_items;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)_step;
-(void)_removeItem:(id)arg1 ;
-(void)_setItems:(id)arg1 ;
-(id)_itemsDescription;
-(UIDynamicAnimator *)dynamicAnimator;
-(NSArray *)childBehaviors;
-(void)removeChildBehavior:(id)arg1 ;
-(void)addChildBehavior:(id)arg1 ;
-(void)_addItem:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)_changedParameterForBody:(id)arg1 ;
-(void)_reevaluate:(unsigned long long)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(BOOL)allowsAnimatorToStop;
-(void)_reattachAutolayoutToItemIfNecessary:(id)arg1 ;
-(void)_detachAutolayoutFromItemIfNecessary:(id)arg1 ;
-(void)_updateAutolayoutEngagementForItemIfNecessary:(id)arg1 detach:(BOOL)arg2 ;
@end

