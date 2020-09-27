/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSMutableArray;

@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer {

	NSMutableArray* _faceQualityScores;

}

@property (retain) NSMutableArray * faceQualityScores;              //@synthesize faceQualityScores=_faceQualityScores - In the implementation block
-(void)dealloc;
-(int)analyzeDetectedFaces:(CVBufferRef)arg1 faceResults:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(NSMutableArray *)faceQualityScores;
-(void)setFaceQualityScores:(NSMutableArray *)arg1 ;
@end

