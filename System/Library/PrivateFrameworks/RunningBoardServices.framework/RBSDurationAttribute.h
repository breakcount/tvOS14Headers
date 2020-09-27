/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSDurationAttribute : RBSAttribute {

	double _invalidationDuration;
	double _warningDuration;
	unsigned long long _startPolicy;
	unsigned long long _endPolicy;

}

@property (assign,nonatomic) double invalidationDuration;                 //@synthesize invalidationDuration=_invalidationDuration - In the implementation block
@property (assign,nonatomic) double warningDuration;                      //@synthesize warningDuration=_warningDuration - In the implementation block
@property (assign,nonatomic) unsigned long long startPolicy;              //@synthesize startPolicy=_startPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long endPolicy;                //@synthesize endPolicy=_endPolicy - In the implementation block
+(id)invalidateAfterInterval:(double)arg1 ;
+(id)attributeWithDuration:(double)arg1 warningDuration:(double)arg2 startPolicy:(unsigned long long)arg3 endPolicy:(unsigned long long)arg4 ;
+(id)attributeWithDuration:(double)arg1 ;
+(id)terminateAfterInterval:(double)arg1 ;
-(void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(BOOL)isValidForContext:(id)arg1 withError:(id*)arg2 ;
-(BOOL)conflictsWithAttribute:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEndPolicy:(unsigned long long)arg1 ;
-(unsigned long long)endPolicy;
-(double)invalidationDuration;
-(void)setInvalidationDuration:(double)arg1 ;
-(double)warningDuration;
-(void)setWarningDuration:(double)arg1 ;
-(unsigned long long)startPolicy;
-(void)setStartPolicy:(unsigned long long)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

