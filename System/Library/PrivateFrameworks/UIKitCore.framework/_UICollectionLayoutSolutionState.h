/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UICollectionLayoutSectionGeometryTranslator, NSArray, _UIRTree, _UIOrderedRangeIndexer, NSDictionary;

@interface _UICollectionLayoutSolutionState : NSObject {

	_UICollectionLayoutSectionGeometryTranslator* _sectionGeometryTranslator;
	NSArray* _bookmarks;
	_UIRTree* _geometricIndexer;
	_UIOrderedRangeIndexer* _itemRangeIndexer;
	NSDictionary* _auxillaryRangeIndexerKindDict;

}

@property (nonatomic,readonly) NSArray * bookmarks;                                                                   //@synthesize bookmarks=_bookmarks - In the implementation block
@property (nonatomic,readonly) _UIRTree * geometricIndexer;                                                           //@synthesize geometricIndexer=_geometricIndexer - In the implementation block
@property (nonatomic,readonly) _UIOrderedRangeIndexer * itemRangeIndexer;                                             //@synthesize itemRangeIndexer=_itemRangeIndexer - In the implementation block
@property (nonatomic,readonly) NSDictionary * auxillaryRangeIndexerKindDict;                                          //@synthesize auxillaryRangeIndexerKindDict=_auxillaryRangeIndexerKindDict - In the implementation block
@property (nonatomic,readonly) _UICollectionLayoutSectionGeometryTranslator * sectionGeometryTranslator;              //@synthesize sectionGeometryTranslator=_sectionGeometryTranslator - In the implementation block
-(id)description;
-(NSArray *)bookmarks;
-(_UICollectionLayoutSectionGeometryTranslator *)sectionGeometryTranslator;
-(_UIRTree *)geometricIndexer;
-(_UIOrderedRangeIndexer *)itemRangeIndexer;
-(NSDictionary *)auxillaryRangeIndexerKindDict;
-(id)initWithGeometryTranslator:(id)arg1 bookmarks:(id)arg2 geometricIndexer:(id)arg3 itemRangeIndexer:(id)arg4 auxillaryRangeIndexerDict:(id)arg5 ;
-(id)copyWithGeometryConverter:(id)arg1 ;
@end

