/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAnyPredicateValidator : CKPredicateValidatorInstance {

	NSArray* _validators;

}

@property (nonatomic,retain) NSArray * validators;              //@synthesize validators=_validators - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(void)setValidators:(NSArray *)arg1 ;
-(id)initWithValidators:(id)arg1 ;
-(NSArray *)validators;
@end

