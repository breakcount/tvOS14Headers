/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VNFaceObservation;

@interface VCPFace : NSObject {

	BOOL _leftEyeClosed;
	BOOL _rightEyeClosed;
	BOOL _smile;
	int _trackID;
	float _confidence;
	float _faceQuality;
	long long _yaw;
	VNFaceObservation* _observation;
	CGRect _bounds;

}

@property (assign) CGRect bounds;                                //@synthesize bounds=_bounds - In the implementation block
@property (assign) BOOL leftEyeClosed;                           //@synthesize leftEyeClosed=_leftEyeClosed - In the implementation block
@property (assign) BOOL rightEyeClosed;                          //@synthesize rightEyeClosed=_rightEyeClosed - In the implementation block
@property (assign) BOOL smile;                                   //@synthesize smile=_smile - In the implementation block
@property (assign) long long yaw;                                //@synthesize yaw=_yaw - In the implementation block
@property (assign) int trackID;                                  //@synthesize trackID=_trackID - In the implementation block
@property (assign) float confidence;                             //@synthesize confidence=_confidence - In the implementation block
@property (assign) float faceQuality;                            //@synthesize faceQuality=_faceQuality - In the implementation block
@property (retain) VNFaceObservation * observation;              //@synthesize observation=_observation - In the implementation block
-(id)init;
-(void)setObservation:(VNFaceObservation *)arg1 ;
-(float)confidence;
-(CGRect)bounds;
-(void)setConfidence:(float)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(VNFaceObservation *)observation;
-(BOOL)leftEyeClosed;
-(BOOL)rightEyeClosed;
-(long long)yaw;
-(void)setYaw:(long long)arg1 ;
-(void)setLeftEyeClosed:(BOOL)arg1 ;
-(void)setRightEyeClosed:(BOOL)arg1 ;
-(CGRect)faceBounds:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(unsigned long long)flagsForOrientation:(BOOL)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(CGRect)faceBoundsWithTransform:(unsigned long long)arg1 height:(unsigned long long)arg2 transform:(CGAffineTransform)arg3 ;
-(BOOL)smile;
-(void)setSmile:(BOOL)arg1 ;
-(float)faceQuality;
-(void)setFaceQuality:(float)arg1 ;
@end

