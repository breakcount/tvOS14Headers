/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCStateOperation.h>

@class NSString;

@interface MCStateOperationExpression : MCStateOperation {

	NSString* _expression;

}

@property (copy) NSString * expression;              //@synthesize expression=_expression - In the implementation block
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andExpression:(id)arg3 ;
-(id)description;
-(NSString *)expression;
-(void)setExpression:(NSString *)arg1 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

