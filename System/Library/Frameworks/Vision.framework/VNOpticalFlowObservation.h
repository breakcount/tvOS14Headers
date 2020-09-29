/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/VNPixelBufferObservation.h>

@class VNImageSignature, LKTOpticalFlow;

@interface VNOpticalFlowObservation : VNPixelBufferObservation {

	VNImageSignature* _targetImageSignature;
	LKTOpticalFlow* _opticalFlow;

}

@property (nonatomic,retain) VNImageSignature * targetImageSignature;              //@synthesize targetImageSignature=_targetImageSignature - In the implementation block
@property (nonatomic,retain) LKTOpticalFlow * opticalFlow;                         //@synthesize opticalFlow=_opticalFlow - In the implementation block
-(VNImageSignature *)targetImageSignature;
-(void)setTargetImageSignature:(VNImageSignature *)arg1 ;
-(LKTOpticalFlow *)opticalFlow;
-(void)setOpticalFlow:(LKTOpticalFlow *)arg1 ;
@end
