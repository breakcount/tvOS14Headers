/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPRequest.h>

@class VCPImageHumanPoseAnalyzer;

@interface VCPHumanPoseImageRequest : VCPRequest {

	VCPImageHumanPoseAnalyzer* _analyzer;
	int _preferredWidth;
	int _preferredHeight;
	unsigned _preferredFormat;

}
+(int)parseResults:(id)arg1 observations:(id)arg2 ;
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(id)processImage:(CVBufferRef)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(unsigned)preferredPixelFormat;
-(CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)cleanupWithOptions:(id)arg1 error:(id*)arg2 ;
@end

