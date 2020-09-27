/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamGaussBlurExpressPassTwoOpt9 : TDreamProgramWrapper {

	float kernel[3];
	int kernelUniform;
	float offsets[3];
	int offsetsUniform;

}
-(id)init;
-(void)setUniforms;
-(void)setKernel:(const double*)arg1 ;
-(void)setOffsets:(const double*)arg1 ;
@end

