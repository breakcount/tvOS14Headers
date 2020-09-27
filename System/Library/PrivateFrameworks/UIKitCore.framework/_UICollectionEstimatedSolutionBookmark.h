/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UICollectionLayoutAuxillaryOffsets;
#import <UIKitCore/UIKitCore-Structs.h>
@class _UICollectionLayoutItemSolver;

@interface _UICollectionEstimatedSolutionBookmark : NSObject {

	_UICollectionLayoutItemSolver* _solution;
	id<_UICollectionLayoutAuxillaryOffsets> _supplementaryOffsets;
	NSRange _itemRange;
	CGRect _solutionFrame;

}

@property (nonatomic,readonly) _UICollectionLayoutItemSolver * solution;                                  //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) CGRect solutionFrame;                                                      //@synthesize solutionFrame=_solutionFrame - In the implementation block
@property (nonatomic,readonly) NSRange itemRange;                                                         //@synthesize itemRange=_itemRange - In the implementation block
@property (nonatomic,readonly) id<_UICollectionLayoutAuxillaryOffsets> supplementaryOffsets;              //@synthesize supplementaryOffsets=_supplementaryOffsets - In the implementation block
-(id)description;
-(_UICollectionLayoutItemSolver *)solution;
-(id<_UICollectionLayoutAuxillaryOffsets>)supplementaryOffsets;
-(NSRange)itemRange;
-(CGRect)solutionFrame;
-(id)initWithSolution:(id)arg1 frame:(CGRect)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 maxItemFrameCount:(long long)arg5 ;
-(id)_supplementaryOffsetsForItemRange:(NSRange)arg1 solution:(id)arg2 supplementaryOffsets:(id)arg3 ;
@end

