/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAMetalLayer.h>

@interface WebGPULayer : CAMetalLayer {

	GPUSwapChain* _swapChain;
	float _deviceScaleFactor;

}

@property (assign,nonatomic) GPUSwapChain* swapChain;              //@synthesize swapChain=_swapChain - In the implementation block
-(id)init;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(GPUSwapChain*)swapChain;
-(void)setSwapChain:(GPUSwapChain*)arg1 ;
@end

