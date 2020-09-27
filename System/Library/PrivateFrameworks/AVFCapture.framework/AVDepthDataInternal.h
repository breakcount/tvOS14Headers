/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCameraCalibrationData, NSData;

@interface AVDepthDataInternal : NSObject {

	CVBufferRef pixelBuffer;
	int version;
	long long quality;
	BOOL filtered;
	long long accuracy;
	AVCameraCalibrationData* calibrationData;
	float depthBlurEffectSimulatedAperture;
	NSData* depthBlurEffectRenderingParameters;
	BOOL portraitScoreIsHigh;
	float portraitScore;
	float portraitLightingEffectStrength;

}
@end

