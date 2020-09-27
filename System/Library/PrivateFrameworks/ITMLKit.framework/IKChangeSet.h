/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, NSDictionary;

@interface IKChangeSet : NSObject {

	BOOL _reducing;
	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;
	NSDictionary* _movedIndexesByNewIndex;
	NSDictionary* _updatedIndexesByNewIndex;

}

@property (getter=isReducing,nonatomic,readonly) BOOL reducing;                           //@synthesize reducing=_reducing - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * addedIndexes;                            //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes;                          //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexesByNewIndex;                //@synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * updatedIndexesByNewIndex;              //@synthesize updatedIndexesByNewIndex=_updatedIndexesByNewIndex - In the implementation block
-(NSIndexSet *)removedIndexes;
-(id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4 ;
-(NSDictionary *)movedIndexesByNewIndex;
-(NSIndexSet *)addedIndexes;
-(long long)oldIndexForNewIndex:(long long)arg1 ;
-(NSDictionary *)updatedIndexesByNewIndex;
-(id)changeSetByConcatenatingChangeSet:(id)arg1 ;
-(long long)newIndexForOldIndex:(long long)arg1 ;
-(BOOL)isReducing;
-(id)inverseChangeSet;
-(long long)newIndexByShiftingOldIndex:(long long)arg1 grouped:(BOOL)arg2 ;
-(id)changeSetBySubtractingChangeSet:(id)arg1 ;
-(id)changeSetByConvertingOldIndexesUsingChangeSet:(id)arg1 andNewIndexesUsingChangeSet:(id)arg2 ;
@end
