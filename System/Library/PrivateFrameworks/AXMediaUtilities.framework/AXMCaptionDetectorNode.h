/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSURL, AXImageCaptionModel, AXMSceneDetectorNode;

@interface AXMCaptionDetectorNode : AXMEvaluationNode {

	os_unfair_lock_s _lock;
	BOOL _needsCaptionHandlerRefresh;
	CVNLPCaptionHandlerRef _captionHandlerRef;
	NSURL* _overrideModelURL;
	unsigned long long _overrideScaleMethod;
	unsigned long long _genderStrategy;
	BOOL _prefersPixelBufferImageInput;
	AXImageCaptionModel* _effectiveCaptionModelInfo;
	NSURL* _effectiveModelURL;
	AXMSceneDetectorNode* _sceneDetector;

}

@property (assign,nonatomic,__weak) AXMSceneDetectorNode * sceneDetector;                    //@synthesize sceneDetector=_sceneDetector - In the implementation block
@property (nonatomic,retain) NSURL * overrideModelURL; 
@property (assign,nonatomic) unsigned long long overrideScaleMethod; 
@property (assign,nonatomic) unsigned long long genderStrategy; 
@property (nonatomic,readonly) NSURL * effectiveModelURL; 
@property (nonatomic,readonly) AXImageCaptionModel * effectiveCaptionModelInfo; 
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
+(CGSize)preferredModelInputSize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)requiresVisionFramework;
-(void)_performWithLock:(/*^block*/id)arg1 ;
-(void)setOverrideModelURL:(NSURL *)arg1 ;
-(void)setOverrideScaleMethod:(unsigned long long)arg1 ;
-(void)setGenderStrategy:(unsigned long long)arg1 ;
-(void)setSceneDetector:(AXMSceneDetectorNode *)arg1 ;
-(NSURL *)overrideModelURL;
-(unsigned long long)overrideScaleMethod;
-(unsigned long long)genderStrategy;
-(AXMSceneDetectorNode *)sceneDetector;
-(CVNLPCaptionHandlerRef)_withLock_captionHandlerCreateIfNeeded:(id)arg1 ;
-(id)_computeCaptionForPixelBuffer:(CVBufferRef)arg1 orImage:(CGImageRef)arg2 captionHandler:(CVNLPCaptionHandlerRef)arg3 metrics:(id)arg4 ;
-(id)_withLock_cloneCaptionModelIfNeeded:(id)arg1 ;
-(BOOL)_captionModelCloningIsNeeded;
-(id)_withLock_captionModelURLCloningAssetIfNeeded;
-(id)_withLock_valueForOverrideScaleMethod;
-(NSURL *)effectiveModelURL;
-(AXImageCaptionModel *)effectiveCaptionModelInfo;
@end

