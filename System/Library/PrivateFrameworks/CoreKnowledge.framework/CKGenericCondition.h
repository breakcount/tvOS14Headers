/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSString;

@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding> {

	 type;
	 negated;
	 $__lazy_storage_$_sql;

}

@property (readonly,nonatomic) NSPredicate * predicate; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(id)initWithValue:(BOOL)arg1 ;
-(BOOL)evaluateOn:(id)arg1 ;
-(id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(BOOL)arg3 ;
-(id)and:(id)arg1 ;
-(id)or:(id)arg1 ;
@end

