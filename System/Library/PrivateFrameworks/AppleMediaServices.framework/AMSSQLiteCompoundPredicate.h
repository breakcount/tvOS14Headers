/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface AMSSQLiteCompoundPredicate : AMSSQLitePredicate <NSCopying> {

	NSString* _combinationOperation;
	NSArray* _predicates;

}

@property (nonatomic,readonly) NSArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
+(id)predicateMatchingAllPredicates:(id)arg1 ;
+(id)predicateMatchingAnyPredicates:(id)arg1 ;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)predicates;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
@end

