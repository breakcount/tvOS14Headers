/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, VCPFaceTimeSession, NSMutableArray;

@interface VCPVideoChatAnalysis : NSObject {

	NSObject*<OS_dispatch_queue> _detectionQueue;
	VCPFaceTimeSession* _faceTimeSession;
	NSMutableArray* _faces;
	BOOL _finished;

}
+(id)videoChatAnalysis;
-(id)init;
-(int)detectFaces:(CVBufferRef)arg1 ;
-(void)checkAddFaces;
-(int)analyzeFrame:(CVBufferRef)arg1 ;
-(BOOL)persistAnalysis;
@end

