/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNHandsDetector, VCPCNNHandKeypointsDetector, NSMutableArray, NSString;

@interface VCPImageHandsAnalyzer : VCPImageAnalyzer {

	int _maxNumRegions;
	int _inputWidth;
	int _inputHeight;
	VCPCNNHandsDetector* _handsDetector;
	VCPCNNHandKeypointsDetector* _handsKeypointsDetector;
	NSMutableArray* _results;
	NSString* _resConfig;

}
-(id)init;
-(int)configForAspectRatio:(id)arg1 ;
-(int)updateModelForAspectRatio:(id)arg1 ;
-(int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned*)arg3 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(id)initWithKeypointsOption:(int)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 aspectRatio:(id)arg4 modelName:(id)arg5 ;
-(long long)getClosestAspectRatio:(id)arg1 ;
-(int)convertSingleResultToDict:(CGPoint)arg1 keypointConfidence:(float*)arg2 box:(id)arg3 results:(id)arg4 ;
@end

