/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSArray;

@interface NSBlockExpression : NSExpression {

	/*^block*/id _block;
	NSArray* _arguments;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)initWithType:(unsigned long long)arg1 block:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(id)arguments;
-(/*^block*/id)expressionBlock;
@end

