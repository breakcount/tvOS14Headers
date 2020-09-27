/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TRIExperimentBaseTask.h>

@protocol TRITaskAttributing;
@class NSString;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask {

	NSString* _treatmentId;
	id<TRITaskAttributing> _taskAttributing;

}

@property (nonatomic,readonly) NSString * treatmentId;                              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) id<TRITaskAttributing> taskAttributing;              //@synthesize taskAttributing=_taskAttributing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)metrics;
-(id)dimensions;
-(NSString *)treatmentId;
-(id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 ;
-(id<TRITaskAttributing>)taskAttributing;
@end
