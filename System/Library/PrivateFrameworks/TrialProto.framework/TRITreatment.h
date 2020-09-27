/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRITreatment : TRIPBMessage

@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (nonatomic,copy) NSString * treatmentName; 
@property (assign,nonatomic) BOOL hasTreatmentName; 
@property (nonatomic,copy) NSString * treatmentDescription; 
@property (assign,nonatomic) BOOL hasTreatmentDescription; 
@property (nonatomic,retain) NSMutableArray * factorLevelArray; 
@property (nonatomic,readonly) unsigned long long factorLevelArray_Count; 
+(id)descriptor;
@end

