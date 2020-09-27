/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningPeopleCriteria : NSObject <PGMeaningCriteria> {

	unsigned long long _minimumNumberOfPeople;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfPeople;              //@synthesize minimumNumberOfPeople=_minimumNumberOfPeople - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setMinimumNumberOfPeople:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfPeople;
@end

