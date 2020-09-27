/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNHandsDetector, VCPCNNHandKeypointsDetector, VCPCNNFastGestureRecognition, NSMutableArray, NSArray, NSDate;

@interface VCPPriorityAnalysis : NSObject {

	float _prevComputedScore;
	int _rotationAngle;
	int _inputHeight;
	int _inputWidth;
	int _frameCounter;
	BOOL _handDetectedInPreviousFrame;
	Rotator* _rotator;
	VCPCNNHandsDetector* _handsDetector;
	VCPCNNHandKeypointsDetector* _handsKeypointsDetector;
	VCPCNNFastGestureRecognition* _fastGestureDetector;
	NSMutableArray* _classIndexTracker;
	NSMutableArray* _gestureScoreTracker;
	NSMutableArray* _motionScoreTracker;
	NSMutableArray* _iouTracker;
	NSMutableArray* _handKeypointTracker;
	NSArray* _prevFrameHandKeypoint;
	NSDate* _prevTimeStampHandDetected;
	NSDate* _prevTimeSignLanguageDetected;
	CGPoint _prevHandCenter;

}
+(id)priorityAnalysis;
-(id)init;
-(void)dealloc;
-(int)normalizeKeypoints:(CGPoint*)arg1 handCenter:(CGPoint*)arg2 ;
-(float)computeMaxMinDistance:(id)arg1 prevFrameKeypoints:(id)arg2 ;
-(float)maxPooling:(id)arg1 ;
-(int)fastSignLanguageDetection:(float*)arg1 ofPixelBuffer:(CVBufferRef)arg2 withMetadata:(id)arg3 ;
-(int)majorityVoting:(id)arg1 numClass:(int)arg2 ;
-(float)minPooling:(id)arg1 ;
-(float)computeIOU:(CGRect*)arg1 boxB:(CGRect*)arg2 ;
-(int)calculatePriorityScore:(float*)arg1 ofPixelBuffer:(CVBufferRef)arg2 withMetadata:(id)arg3 ;
@end

