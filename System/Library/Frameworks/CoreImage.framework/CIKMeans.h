/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIReductionFilter.h>

@class CIImage, NSNumber;

@interface CIKMeans : CIReductionFilter {

	CIImage* inputMeans;
	NSNumber* inputCount;
	NSNumber* inputPasses;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) CIImage * inputMeans; 
@property (nonatomic,copy) NSNumber * inputCount; 
@property (nonatomic,copy) NSNumber * inputPasses; 
@property (nonatomic,copy) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(NSNumber *)inputCount;
-(id)outputImage;
-(void)setInputCount:(NSNumber *)arg1 ;
-(NSNumber *)inputPasses;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(id)_combine:(id)arg1 ;
-(id)_kernelKmeans;
-(id)defuse:(id)arg1 seed:(int)arg2 ;
-(void)setInputPasses:(NSNumber *)arg1 ;
-(CIImage *)inputMeans;
-(void)setInputMeans:(CIImage *)arg1 ;
@end

