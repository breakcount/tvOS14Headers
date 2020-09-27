/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray, VCPSegment;

@interface VCPActionAnalyzer : NSObject {

	NSMutableArray* _internalResults;
	VCPSegment* _activeSegment;
	HinkleyDetector* _activeHinkleyDetector;
	float _activeThreshold;
	BOOL _firstFrame;
	BOOL _verbose;
	int _postProcessStart;

}
-(id)init;
-(void)dealloc;
-(id)segments;
-(BOOL)isScoreValid:(float)arg1 ;
-(BOOL)decideSegmentPointUsingHinkleyDetector:(float)arg1 ;
-(BOOL)isActive:(float)arg1 ;
-(void)updateActiveThreshold;
-(int)mergeSameTypeSegments;
-(void)printSegments:(id)arg1 ;
-(int)prepareTrimmingWithTrimStart:(SCD_Struct_VC6)arg1 andTrimEnd:(SCD_Struct_VC6)arg2 ;
-(int)mergeConsecutiveShortSegments;
-(int)mergeSparseShortSegments;
-(int)analyzeFrameWithTimeRange:(SCD_Struct_VC17)arg1 andActionScore:(float)arg2 ;
-(BOOL)decideSegmentPointBasedOnActionScore:(float)arg1 ;
-(int)finalizeWithDestructiveTrimStart:(SCD_Struct_VC6)arg1 trimEnd:(SCD_Struct_VC6)arg2 ;
-(int)postProcessSegmentsWithCaptureTime:(SCD_Struct_VC6)arg1 trimStart:(SCD_Struct_VC6)arg2 ;
-(id)activeSegment;
@end

