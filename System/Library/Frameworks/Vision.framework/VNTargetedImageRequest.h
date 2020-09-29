/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class VNImageBuffer;

@interface VNTargetedImageRequest : VNImageBasedRequest {

	VNImageBuffer* _targetedImageBuffer;

}
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 ;
-(id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 ;
-(id)initWithTargetedImageData:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageData:(id)arg1 options:(id)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(id)newDefaultRequestInstance;
-(id)initWithTargetedImageBuffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedCIImage:(id)arg1 ;
-(id)initWithTargetedCIImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedImageURL:(id)arg1 ;
-(id)initWithTargetedImageURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedImageData:(id)arg1 ;
-(id)initWithTargetedImageData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedImageData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedImageData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)targetedImageBuffer;
-(id)requiredTargetedImageBufferReturningError:(id*)arg1 ;
@end
