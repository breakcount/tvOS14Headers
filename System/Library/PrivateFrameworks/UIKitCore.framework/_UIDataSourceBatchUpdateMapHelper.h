/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIDataSourceSnapshotter, NSArray, NSMutableIndexSet;

@interface _UIDataSourceBatchUpdateMapHelper : NSObject {

	_UIDataSourceSnapshotter* _initialSnapshot;
	_UIDataSourceSnapshotter* _finalSnapshot;
	NSArray* _updateItems;
	NSMutableIndexSet* _movedItems;
	NSMutableIndexSet* _movedSections;
	NSMutableIndexSet* _deletedSections;
	NSMutableIndexSet* _insertedSections;
	long long* _oldSectionMap;
	long long* _newSectionMap;
	long long* _oldGlobalItemMap;
	long long* _newGlobalItemMap;

}
-(id)description;
-(void)dealloc;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg1 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg1 ;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1 ;
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1 ;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1 ;
-(void)_computeSectionUpdates;
-(void)_computeItemUpdates;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updates:(id)arg3 ;
@end
