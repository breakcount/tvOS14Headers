/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPSceneProcessingImageManager, PVSceneTaxonomy, NSObject, VCPObjectPool;

@interface VCPPreAnalyzer : NSObject {

	VCPSceneProcessingImageManager* _imageManager;
	PVSceneTaxonomy* _sceneTaxonomy;
	NSObject*<OS_dispatch_group> _processingGroup;
	NSObject*<OS_dispatch_queue> _processingQueue;
	CF<__CVPixelBufferPool *>* _pool8Y;
	CF<OpaqueVTPixelTransferSession *>* _transferSession;
	VCPObjectPool* _sessionPool;

}
+(BOOL)_allowANE;
+(unsigned long long)_panoVNRequestMethod;
+(BOOL)_useR14J9;
+(BOOL)_includeDO;
+(BOOL)_includeSO;
+(BOOL)_includeLM;
+(BOOL)_includeNSFW;
+(unsigned long long)_getNSFWModelRevision;
+(BOOL)_includeSE;
+(unsigned long long)_getSERevision;
+(BOOL)_includeSDG;
+(unsigned long long)_getSDGModelRevision;
+(unsigned long long)_getSHRevision;
+(BOOL)_enableSceneAssetConcurrency;
-(id)init;
-(void)dealloc;
-(void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
-(int)_createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)_createPixelBufferPool:(_CVPixelBufferPool*)arg1 withPixelFormat:(unsigned)arg2 ;
-(int)_convertFromBuffer:(CVBufferRef)arg1 toLumaPixelBuffer:(_CVBuffer*)arg2 isPano:(BOOL)arg3 ;
-(void)_parseClassificationObservations:(id)arg1 toClassificationResults:(id)arg2 ;
-(void)_generateSceneClassifications:(id)arg1 withClassificationResults:(id)arg2 andDOResults:(id)arg3 andJunkImageResults:(id)arg4 andLMResults:(id)arg5 andNSFWResults:(id)arg6 andSEResults:(id)arg7 andSDGResults:(id)arg8 ;
-(int)_createAestheticsRequest:(id*)arg1 andClassificationRequest:(id*)arg2 andSceneprintRequest:(id*)arg3 andJunkImageRequest:(id*)arg4 andSaliencyImageRequest:(id*)arg5 andDORequest:(id*)arg6 andLMRequest:(id*)arg7 andNSFWRequest:(id*)arg8 andSERequest:(id*)arg9 andSDGRequest:(id*)arg10 andSORequest:(id*)arg11 andRawSceneprintRequest:(id*)arg12 ;
-(int)_collectSceneAnalysisResults:(id*)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3 andAestheticsResults:(id)arg4 andSaliencyResults:(id)arg5 andSceneprintResults:(id)arg6 andDOResults:(id)arg7 andLMResults:(id)arg8 andNSFWResults:(id)arg9 andSEResults:(id)arg10 andSDGResults:(id)arg11 andSaliencyObjectnessResults:(id)arg12 ;
-(int)_performBlurAnalysis:(id*)arg1 withPixelBuffer:(CVBufferRef)arg2 usingAnalyzer:(id)arg3 ;
-(int)_performSceneAnalysis:(id*)arg1 withRequestHandler:(id)arg2 ;
-(int)_performBlurAnalysis:(id*)arg1 withLumaPixelBuffer:(CVBufferRef)arg2 isPano:(BOOL)arg3 isSDOF:(BOOL)arg4 ;
-(int)_performExposureAnalysis:(id*)arg1 withLumaPixelBuffer:(CVBufferRef)arg2 ;
-(int)_loadImageURL:(id)arg1 isPano:(BOOL)arg2 withRequestHandler:(id*)arg3 session:(id)arg4 andLumaPixelBuffer:(_CVBuffer*)arg5 ;
-(int)_performAnalysis:(id*)arg1 isPano:(BOOL)arg2 isSDOF:(BOOL)arg3 withRequestHandler:(id)arg4 andLumaPixelBuffer:(CVBufferRef)arg5 ;
-(void)analyzeWithImageURL:(id)arg1 isPano:(BOOL)arg2 isSDOF:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)analyzeWithPixelBuffer:(CVBufferRef)arg1 isPano:(BOOL)arg2 isSDOF:(BOOL)arg3 results:(id*)arg4 cancel:(/*^block*/id)arg5 ;
@end

