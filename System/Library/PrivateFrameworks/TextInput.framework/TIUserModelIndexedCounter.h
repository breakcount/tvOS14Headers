/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray, NSNumber;

@interface TIUserModelIndexedCounter : NSObject {

	NSMutableArray* _persisted;
	NSMutableArray* _current;
	int _dataType;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int dataType;                            //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) int bucketCount; 
@property (nonatomic,readonly) NSArray * currentCounts; 
@property (nonatomic,readonly) NSArray * counts; 
@property (nonatomic,readonly) NSNumber * aggregatedCount; 
@property (nonatomic,readonly) int days; 
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(int)dataType;
-(NSArray *)counts;
-(int)days;
-(int)bucketCount;
-(void)prepareBuckets;
-(NSArray *)currentCounts;
-(id)countsForNumberOfDays:(int)arg1 ;
-(NSNumber *)aggregatedCount;
-(id)aggregatedCountForNumberOfDays:(int)arg1 ;
-(void)extendToNumberOfDays:(int)arg1 ;
-(void)updateWithInteger:(int)arg1 forIndex:(int)arg2 ;
-(void)updateWithDouble:(double)arg1 forIndex:(int)arg2 ;
-(void)updateWithLoadedInteger:(int)arg1 andDouble:(double)arg2 forIndex:(int)arg3 andDaysPrior:(int)arg4 ;
-(id)_createEmptyCountsArray;
-(void)doPersist:(id)arg1 forDate:(id)arg2 forContext:(id)arg3 ;
@end

