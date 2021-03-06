/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CICircularityDescriptor : CIFilter {

	CIImage* inputImage;
	CIImage* inputCentroid;
	CIVector* inputExtent;

}

@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIImage * inputCentroid; 
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIImage *)inputCentroid;
-(void)setInputCentroid:(CIImage *)arg1 ;
@end

