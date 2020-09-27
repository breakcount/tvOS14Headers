/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModelUnindexedQuery.h>

@class NSString, NSArray;

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery {

	NSString* _indexNameSuffix;
	NSArray* _indexedColumns;

}

@property (nonatomic,readonly) NSString * indexNameSuffix;              //@synthesize indexNameSuffix=_indexNameSuffix - In the implementation block
@property (nonatomic,readonly) NSArray * indexedColumns;                //@synthesize indexedColumns=_indexedColumns - In the implementation block
@property (nonatomic,readonly) NSString * indexName; 
+(id)queryWithSQLPredicate:(id)arg1 ascending:(BOOL)arg2 indexedProperties:(id)arg3 arguments:(id)arg4 ;
-(NSString *)indexName;
-(NSArray *)indexedColumns;
-(BOOL)hasExpectedIndexes;
-(id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7 ;
-(NSString *)indexNameSuffix;
@end

