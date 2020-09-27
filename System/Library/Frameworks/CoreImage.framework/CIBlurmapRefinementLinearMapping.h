/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBlurmapRefinementLinearMapping : CIFilter {

	CIImage* inputImage;
	CIImage* inputSecondaryImage;
	NSNumber* inputScalingFactor;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputSecondaryImage; 
@property (retain) NSNumber * inputScalingFactor; 
-(id)kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputSecondaryImage;
-(void)setInputSecondaryImage:(CIImage *)arg1 ;
-(id)kernelNoSecondaryImage;
-(NSNumber *)inputScalingFactor;
-(void)setInputScalingFactor:(NSNumber *)arg1 ;
@end

