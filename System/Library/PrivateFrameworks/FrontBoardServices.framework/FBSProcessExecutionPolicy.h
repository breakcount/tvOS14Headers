/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSProcessExecutionStrategy, NSArray, NSString;

@interface FBSProcessExecutionPolicy : NSObject <NSCopying, BSDescriptionProviding> {

	FBSProcessExecutionStrategy* _strategy;
	NSArray* _provisions;

}

@property (nonatomic,copy) FBSProcessExecutionStrategy * strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,copy) NSArray * provisions;                                //@synthesize provisions=_provisions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyForStrategy:(id)arg1 withProvisions:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSArray *)provisions;
-(FBSProcessExecutionStrategy *)strategy;
-(void)setStrategy:(FBSProcessExecutionStrategy *)arg1 ;
-(void)setProvisions:(NSArray *)arg1 ;
@end

