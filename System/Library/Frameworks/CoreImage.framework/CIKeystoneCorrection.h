/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, CIFilter;

@interface CIKeystoneCorrection : CIFilter {

	float3x3 K;
	float3x3 invK;
	float pitch;
	float yaw;
	float roll;
	CIImage* inputImage;
	NSNumber* inputFocalLength;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputFocalLength; 
@property (nonatomic,copy) CIVector * inputTopLeft; 
@property (nonatomic,copy) CIVector * inputTopRight; 
@property (nonatomic,copy) CIVector * inputBottomRight; 
@property (nonatomic,copy) CIVector * inputBottomLeft; 
@property (nonatomic,readonly) float3x3 outputTransform; 
@property (nonatomic,readonly) CIFilter * outputRotationFilter; 
+(id)customAttributes;
-(float3x3)outputTransform;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputTopLeft;
-(void)setInputTopLeft:(CIVector *)arg1 ;
-(CIVector *)inputTopRight;
-(void)setInputTopRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomRight;
-(void)setInputBottomRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomLeft;
-(void)setInputBottomLeft:(CIVector *)arg1 ;
-(void)computeCameraIntrinsics;
-(NSNumber *)inputFocalLength;
-(void)setInputFocalLength:(NSNumber *)arg1 ;
-(void)computeRotation;
-(CIFilter *)outputRotationFilter;
@end

