/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIFocalPlanePreprocessorInternal : CIFilter {

	CIImage* inputImage;
	CIImage* inputMatteImage;
	CIVector* inputFocusRect;
	NSNumber* inputZeroShiftPercentile;
	NSNumber* inputAlphaThreshold;
	NSNumber* inputAmplitude;
	NSNumber* inputExponent;
	NSNumber* inputGamma;
	NSNumber* inputMinFactor;
	NSNumber* inputMaxFactor;

}
+(id)customAttributes;
-(id)outputImage;
@end

