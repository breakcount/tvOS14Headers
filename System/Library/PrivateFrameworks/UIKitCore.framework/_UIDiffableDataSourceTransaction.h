/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSDiffableDataSourceSnapshot, NSOrderedCollectionDifference;

@interface _UIDiffableDataSourceTransaction : NSObject {

	NSArray* _reorderedItemIdentifiers;
	long long _source;
	NSDiffableDataSourceSnapshot* _initialSnapshot;
	NSDiffableDataSourceSnapshot* _finalSnapshot;
	NSOrderedCollectionDifference* _difference;
	NSArray* _sectionTransactions;

}

@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * initialSnapshot;              //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * finalSnapshot;                //@synthesize finalSnapshot=_finalSnapshot - In the implementation block
@property (nonatomic,readonly) NSOrderedCollectionDifference * difference;                  //@synthesize difference=_difference - In the implementation block
@property (nonatomic,readonly) NSArray * sectionTransactions;                               //@synthesize sectionTransactions=_sectionTransactions - In the implementation block
+(id)applyTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4 ;
+(id)reorderingTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)source;
-(NSOrderedCollectionDifference *)difference;
-(NSDiffableDataSourceSnapshot *)initialSnapshot;
-(NSDiffableDataSourceSnapshot *)finalSnapshot;
-(NSArray *)sectionTransactions;
-(long long)finalSectionCount;
-(NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1 ;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg1 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg1 ;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1 ;
-(BOOL)isReorderingTransaction;
-(id)reorderedItemIdentifiers;
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1 ;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1 ;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2 ;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2 ;
-(NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1 ;
-(long long)initialSectionCount;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 reorderedItemIdentifiers:(id)arg4 difference:(id)arg5 sectionTransactions:(id)arg6 ;
-(BOOL)isApplyTransaction;
-(id)initialDataSourceSnapshotter;
-(id)finalDataSourceSnapshotter;
-(id)performDiffGeneratingUpdates;
@end

