/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray;

@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer {

	NSMutableArray* _regions;
	float* _diff;
	float* _ptrFirst;
	float* _ptrLast;
	Scaler* _scaler;
	vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> >* _frameArray;
	int _frameWidth;
	int _frameHeight;
	int _width;
	int _height;
	int _stride;
	int _blockSize;
	int _widthBlockNum;
	int _heightBlockNum;
	float _actionScore;

}

@property (readonly) float actionScore;              //@synthesize actionScore=_actionScore - In the implementation block
-(id)init;
-(void)dealloc;
-(float)actionScore;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(id)regionsOfInterest;
-(int)setPixelBuffer:(CVBufferRef)arg1 ;
-(int)calculateFrameDifference:(CVBufferRef)arg1 ;
-(int)computeRegionsofInterest;
@end

