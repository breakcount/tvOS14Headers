/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString, NSArray;

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {

	NSString* _functionName;
	NSArray* _argumentValidators;

}

@property (nonatomic,retain) NSString * functionName;                   //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSArray * argumentValidators;              //@synthesize argumentValidators=_argumentValidators - In the implementation block
-(NSString *)functionName;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(void)setFunctionName:(NSString *)arg1 ;
-(id)initWithFunctionName:(id)arg1 validators:(id)arg2 ;
-(void)setArgumentValidators:(NSArray *)arg1 ;
-(NSArray *)argumentValidators;
@end
