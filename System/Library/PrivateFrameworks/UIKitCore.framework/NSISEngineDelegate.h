/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSISEngineDelegate <NSObject>
@optional
-(void)solutionDidChangeInEngine:(id)arg1;

@required
-(id)engine:(id)arg1 markerForConstraintToBreakAmongConstraints:(id)arg2;
-(void)engine:(id)arg1 willBreakConstraint:(id)arg2 dueToMutuallyExclusiveConstraints:(id)arg3;
-(void)constraintsDidChangeInEngine:(id)arg1;

@end

