/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject {

	HGRef<PVRenderManager>* _renderManager;
	HGRef<HGRenderJob>* _currentRenderJob;
	PVVideoCompositingContext* _compositingContext;

}
-(id)init;
-(void)dealloc;
-(HGRef<PVRenderManager>*)renderManager;
-(HGRef<HGGLContext>*)rootContext;
-(void)enqueueRenderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getSharedEAGLContext;
@end

