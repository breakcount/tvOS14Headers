/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIImage, NSNumber;

@interface RadialFalloffFilter : CIFilter {

	CIVector* inputExtent;
	CIImage* inputCenter;
	NSNumber* inputFalloff;
	NSNumber* inputRadius;
	NSNumber* inputAnisotropic;

}

@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputFalloff; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputAnisotropic; 
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(NSNumber *)inputFalloff;
-(void)setInputFalloff:(NSNumber *)arg1 ;
-(NSNumber *)inputAnisotropic;
-(void)setInputAnisotropic:(NSNumber *)arg1 ;
@end

