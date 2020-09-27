/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIFaceClassifier.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIFaceprinter, HMIFaceQualityFilterSVM, NSString;

@interface HMIFaceClassifierVIP : HMFObject <HMIFaceClassifier, HMFLogging> {

	HMIFaceprinter* _faceprinter;
	HMIFaceQualityFilterSVM* _faceQualityFilter;
	double _classificationThresholdKnown;
	double _classificationThresholdUnknown;

}

@property (readonly) HMIFaceprinter * faceprinter;                             //@synthesize faceprinter=_faceprinter - In the implementation block
@property (readonly) HMIFaceQualityFilterSVM * faceQualityFilter;              //@synthesize faceQualityFilter=_faceQualityFilter - In the implementation block
@property (readonly) double classificationThresholdKnown;                      //@synthesize classificationThresholdKnown=_classificationThresholdKnown - In the implementation block
@property (readonly) double classificationThresholdUnknown;                    //@synthesize classificationThresholdUnknown=_classificationThresholdUnknown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithError:(id*)arg1 ;
-(HMIFaceprinter *)faceprinter;
-(id)qualityPredictionFromSVMUsingDetectorConfidence:(double)arg1 laplacian:(double)arg2 yaw:(double)arg3 boxSize:(double)arg4 error:(id*)arg5 ;
-(double)classificationThresholdKnown;
-(double)classificationThresholdUnknown;
-(id)classifyFaceEvent:(id)arg1 pixelBuffer:(CVBufferRef)arg2 fastMode:(BOOL)arg3 homeUUID:(id)arg4 error:(id*)arg5 ;
-(HMIFaceQualityFilterSVM *)faceQualityFilter;
@end

