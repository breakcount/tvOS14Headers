/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamBFBlurPassOne : TDreamProgramWrapperTwoInput {

	int sigmaColorUniform;
	int sigmaUniform;
	double _sigma;
	double _sigmaColor;

}

@property (assign,nonatomic) double sigma;                   //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) double sigmaColor;              //@synthesize sigmaColor=_sigmaColor - In the implementation block
-(id)init;
-(double)sigma;
-(void)setUniforms;
-(double)sigmaColor;
-(void)setSigmaColor:(double)arg1 ;
-(void)setSigma:(double)arg1 ;
@end

