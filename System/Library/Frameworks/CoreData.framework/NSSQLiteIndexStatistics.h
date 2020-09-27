/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSSQLiteIndexStatistics : NSObject {

	NSString* _storeIdentifier;
	NSString* _indexName;
	long long _executionCount;
	long long _instructionCount;
	long long _rowCount;

}

@property (nonatomic,readonly) NSString * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * indexName;                    //@synthesize indexName=_indexName - In the implementation block
@property (nonatomic,readonly) long long executionCount;                //@synthesize executionCount=_executionCount - In the implementation block
@property (nonatomic,readonly) long long instructionCount;              //@synthesize instructionCount=_instructionCount - In the implementation block
@property (nonatomic,readonly) long long rowCount;                      //@synthesize rowCount=_rowCount - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)storeIdentifier;
-(id)initWithResultDictionary:(id)arg1 storeID:(id)arg2 ;
-(void)addStatistics:(id)arg1 ;
-(id)initWithName:(id)arg1 storeID:(id)arg2 ;
-(void)incrementExecutionCountWithInstructionCount:(long long)arg1 rowCount:(long long)arg2 ;
-(NSString *)indexName;
-(long long)executionCount;
-(long long)instructionCount;
-(long long)rowCount;
@end
