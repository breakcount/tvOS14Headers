/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol PHAPersonBuildingJobOperationDelegate;
@class PHAVisionServiceFaceProcessingWorker, PVCanceler, NSProgress;

@interface PHAPersonBuildingJobOperation : NSOperation {

	id<PHAPersonBuildingJobOperationDelegate> _delegate;
	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	PVCanceler* _canceler;
	NSProgress* _progress;
	float _percentComplete;

}
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)main;
-(float)percentComplete;
-(id)initWithFaceProcessingWorker:(id)arg1 ;
@end

