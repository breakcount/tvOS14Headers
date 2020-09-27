/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CITorusLensDistortion : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputWidth;
	NSNumber* inputRefraction;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CITorusRefraction;
@end

