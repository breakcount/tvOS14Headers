/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStatePrivatizing : NSObject <PFLTaskState> {

	NSData* _diff;
	NSDictionary* _metrics;
	NSNumber* _numValidationSamples;

}

@property (nonatomic,readonly) NSData * diff;                                //@synthesize diff=_diff - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics;                       //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSNumber * numValidationSamples;              //@synthesize numValidationSamples=_numValidationSamples - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)suspend;
-(unsigned long long)tag;
-(NSDictionary *)metrics;
-(NSData *)diff;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)numValidationSamples;
-(id)initWithGradientDiff:(id)arg1 metrics:(id)arg2 numValidationSamples:(id)arg3 ;
@end

