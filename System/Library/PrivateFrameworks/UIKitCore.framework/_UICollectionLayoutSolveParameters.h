/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet, NSMutableDictionary, NSIndexSet, NSSet;

@interface _UICollectionLayoutSolveParameters : NSObject <NSCopying> {

	NSMutableIndexSet* _invalidatedIndexes;
	NSMutableDictionary* _invalidatedAuxillaryDict;
	BOOL _isFullResolve;
	CGPoint _scrollOffset;
	CGRect _visibleBounds;

}

@property (nonatomic,readonly) BOOL isFullResolve; 
@property (nonatomic,readonly) BOOL hasInvalidatedItems; 
@property (nonatomic,readonly) CGPoint scrollOffset;                           //@synthesize scrollOffset=_scrollOffset - In the implementation block
@property (nonatomic,readonly) CGRect visibleBounds;                           //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
+(id)parametersForFullResolve;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(CGRect)visibleBounds;
-(CGPoint)scrollOffset;
-(id)initWithInvalidatedIndexes:(id)arg1 scrollOffset:(CGPoint)arg2 visibleBounds:(CGRect)arg3 ;
-(NSIndexSet *)invalidatedIndexes;
-(BOOL)isFullResolve;
-(BOOL)hasInvalidatedItems;
-(NSSet *)invalidatedAuxillaryKinds;
-(void)addItemIndex:(long long)arg1 ;
-(void)addAuxillaryIndex:(long long)arg1 elementKind:(id)arg2 ;
-(id)copyWithScrollOffset:(CGPoint)arg1 visibleBounds:(CGRect)arg2 ;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1 ;
-(id)invalidatedAuxillaryOffsets;
-(id)initWithInvalidatedIndexes:(id)arg1 invalidatedAuxillaryDict:(id)arg2 isFullResolve:(BOOL)arg3 scrollOffset:(CGPoint)arg4 visibleBounds:(CGRect)arg5 ;
-(id)initWithInvalidatedIndexes:(id)arg1 ;
@end

