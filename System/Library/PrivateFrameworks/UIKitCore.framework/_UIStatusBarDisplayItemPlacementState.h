/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion, NSMutableArray;

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized> {

	_UIStatusBarDisplayItemPlacement* _placement;
	_UIStatusBarRegion* _region;
	NSMutableArray* _relations;

}

@property (nonatomic,retain) NSMutableArray * relations;                                          //@synthesize relations=_relations - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacement * placement;                      //@synthesize placement=_placement - In the implementation block
@property (nonatomic,__weak,readonly) _UIStatusBarRegion * region;                                //@synthesize region=_region - In the implementation block
@property (getter=areRelationsFulfilled,nonatomic,readonly) BOOL relationsFulfilled; 
@property (nonatomic,readonly) BOOL canBeEnabled; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long priority; 
+(id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2 ;
-(id)description;
-(long long)priority;
-(BOOL)isEnabled;
-(_UIStatusBarRegion *)region;
-(NSMutableArray *)relations;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(void)setRelations:(NSMutableArray *)arg1 ;
-(BOOL)canBeEnabled;
-(BOOL)areRelationsFulfilled;
@end

