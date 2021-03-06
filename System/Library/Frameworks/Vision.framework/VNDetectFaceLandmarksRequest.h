/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:46 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAccepting.h>

@class NSNumber, NSArray, NSString;

@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (assign,nonatomic) BOOL refineMouthRegion; 
@property (assign,nonatomic) BOOL refineLeftEyeRegion; 
@property (assign,nonatomic) BOOL refineRightEyeRegion; 
@property (assign,nonatomic) BOOL performBlinkDetection; 
@property (nonatomic,retain) NSNumber * cascadeStepCount; 
@property (assign) unsigned long long constellation; 
@property (nonatomic,copy) NSArray * inputFaceObservations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(const SCD_Struct_VN20*)dependentRequestCompatability;
+(BOOL)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2 ;
-(NSString *)description;
-(void)setRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(long long)dependencyProcessingOrdinality;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)refineMouthRegion;
-(void)setRefineMouthRegion:(BOOL)arg1 ;
-(BOOL)refineLeftEyeRegion;
-(void)setRefineLeftEyeRegion:(BOOL)arg1 ;
-(BOOL)refineRightEyeRegion;
-(void)setRefineRightEyeRegion:(BOOL)arg1 ;
-(BOOL)performBlinkDetection;
-(void)setPerformBlinkDetection:(BOOL)arg1 ;
-(NSNumber *)cascadeStepCount;
-(void)setCascadeStepCount:(NSNumber *)arg1 ;
-(unsigned long long)constellation;
-(void)setConstellation:(unsigned long long)arg1 ;
-(void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedLandmarks:(id)arg4 ;
@end

