/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/ISURLOperationDelegate.h>
#import <libobjc.A.dylib/TVImageLoader.h>

@class NSNumber, ISOperationQueue, NSString;

@interface _TVLURLImageLoader : NSObject <ISURLOperationDelegate, TVImageLoader> {

	ISOperationQueue* imageLoadQueue;
	BOOL _imageRotationEnabled;

}

@property (assign,getter=isImageRotationEnabled,nonatomic) BOOL imageRotationEnabled;                   //@synthesize imageRotationEnabled=_imageRotationEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)imageKeyForObject:(id)arg1 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)isImageRotationEnabled;
-(void)setImageRotationEnabled:(BOOL)arg1 ;
@end

