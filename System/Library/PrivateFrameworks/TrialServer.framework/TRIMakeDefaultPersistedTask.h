/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPersistedTaskAttribution;

@interface TRIMakeDefaultPersistedTask : TRIPBMessage

@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) BOOL hasExperimentId; 
@property (assign,nonatomic) int deploymentId; 
@property (assign,nonatomic) BOOL hasDeploymentId; 
@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) BOOL hasRetryCount; 
+(id)descriptor;
@end

