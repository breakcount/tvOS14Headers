/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PASSqliteCollectionsCursor : NSObject {

	BOOL _foundOutputRow;
	BOOL _eof;
	id _collection;

}

@property (nonatomic,retain) id collection;              //@synthesize collection=_collection - In the implementation block
+(BOOL)hasKey;
+(const char*)sqliteMethodName;
+(const char*)sqliteCreateTableStatement;
+(BOOL)hasRowId;
+(double)baseEstimatedRows;
+(double)baseEstimatedCost;
+(id)planningInfoForValueConstraint:(int)arg1 ;
+(id)planningInfoForRowIdConstraint:(int)arg1 ;
+(id)planningInfoForKeyConstraint:(int)arg1 ;
+(BOOL)canOrderByValue:(BOOL)arg1 ;
+(BOOL)canOrderByRowId:(BOOL)arg1 ;
+(BOOL)canOrderByKey:(BOOL)arg1 ;
-(id)init;
-(id)collection;
-(void)setCollection:(id)arg1 ;
-(id)outputKey;
-(BOOL)currentIndexEof;
-(id)currentIndexedValue;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(void)stepIndexedRow;
-(BOOL)checkCurrentRow;
-(void)stayOnOrStepToOutputRow;
-(void)stepOutputRow;
-(unsigned long long)outputRowId;
-(id)outputValue;
-(BOOL)outputEof;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)applyRowIdConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)applyValueSort:(BOOL)arg1 ;
-(void)applyRowIdSort:(BOOL)arg1 ;
-(void)applyKeySort:(BOOL)arg1 ;
-(void)finalizeConstraints;
@end
