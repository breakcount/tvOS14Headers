/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSSet, NSMutableArray, NSPredicate;

@interface _OSLogSimplePredicate : NSObject <NSPredicateVisitor> {

	NSSet* _keys;
	NSSet* _operators;
	NSMutableArray* _stack;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(void)processCompoundPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 supportedKeys:(id)arg2 supportedOperators:(id)arg3 ;
-(BOOL)isSupportedExpression:(id)arg1 ;
@end

