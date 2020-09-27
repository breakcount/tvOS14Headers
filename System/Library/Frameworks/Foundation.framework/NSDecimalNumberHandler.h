/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSDecimalNumberBehaviors.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {

	unsigned _scale : 16;
	unsigned _roundingMode : 3;
	unsigned _raiseOnExactness : 1;
	unsigned _raiseOnOverflow : 1;
	unsigned _raiseOnUnderflow : 1;
	unsigned _raiseOnDivideByZero : 1;
	unsigned _unused : 9;
	void* _reserved2;
	void* _reserved;

}
+(id)defaultDecimalNumberHandler;
+(id)decimalNumberHandlerWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(BOOL)arg3 raiseOnOverflow:(BOOL)arg4 raiseOnUnderflow:(BOOL)arg5 raiseOnDivideByZero:(BOOL)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(short)scale;
-(unsigned long long)roundingMode;
-(id)initWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(BOOL)arg3 raiseOnOverflow:(BOOL)arg4 raiseOnUnderflow:(BOOL)arg5 raiseOnDivideByZero:(BOOL)arg6 ;
-(id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4 ;
@end

