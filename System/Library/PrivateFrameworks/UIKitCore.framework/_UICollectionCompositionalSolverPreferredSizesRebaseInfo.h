/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UICollectionLayoutSectionSolver;
@class _UICollectionPreferredSizes;

@interface _UICollectionCompositionalSolverPreferredSizesRebaseInfo : NSObject {

	id<_UICollectionLayoutSectionSolver> _solution;
	_UICollectionPreferredSizes* _preferredSizes;

}

@property (nonatomic,readonly) id<_UICollectionLayoutSectionSolver> solution;              //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizes * preferredSizes;               //@synthesize preferredSizes=_preferredSizes - In the implementation block
-(id<_UICollectionLayoutSectionSolver>)solution;
-(_UICollectionPreferredSizes *)preferredSizes;
-(id)initWithSolution:(id)arg1 preferredSizes:(id)arg2 ;
@end

