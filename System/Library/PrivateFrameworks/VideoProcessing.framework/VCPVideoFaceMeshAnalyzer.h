/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary;

@interface VCPVideoFaceMeshAnalyzer : NSObject {

	BOOL _bufferRotated;
	NSDictionary* _blendShapes;
	unsigned long long _vertexCount;
	const * _vertices;
	const float* _landmarks;
	SCD_Struct_VC48 _pose;

}

@property (nonatomic,readonly) SCD_Struct_VC48 pose;                        //@synthesize pose=_pose - In the implementation block
@property (nonatomic,readonly) NSDictionary * blendShapes;                  //@synthesize blendShapes=_blendShapes - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;              //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) const * vertices;                            //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) const float* landmarks;                      //@synthesize landmarks=_landmarks - In the implementation block
@property (nonatomic,readonly) BOOL bufferRotated;                          //@synthesize bufferRotated=_bufferRotated - In the implementation block
-(unsigned long long)vertexCount;
-(const float*)landmarks;
-(SCD_Struct_VC48)pose;
-(const *)vertices;
-(NSDictionary *)blendShapes;
-(id)initWithFocalLengthInPixels:(float)arg1 offline:(BOOL)arg2 ;
-(BOOL)updateFocalLengthInPixels:(float)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withFaceRect:(CGRect)arg2 withRotation:(int)arg3 withTimestamp:(SCD_Struct_VC6)arg4 ;
-(BOOL)isTracked;
-(BOOL)bufferRotated;
@end

