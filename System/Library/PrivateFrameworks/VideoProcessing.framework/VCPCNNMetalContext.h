/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLCommandBuffer;
@interface VCPCNNMetalContext : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLCommandBuffer> _commandBuffer;

}

@property (retain) id<MTLDevice> device;                            //@synthesize device=_device - In the implementation block
@property (retain) id<MTLCommandQueue> commandQueue;                //@synthesize commandQueue=_commandQueue - In the implementation block
@property (retain) id<MTLCommandBuffer> commandBuffer;              //@synthesize commandBuffer=_commandBuffer - In the implementation block
+(BOOL)supportGPU;
+(BOOL)supportVectorForward;
+(id)sharedCommandQueue;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(int)execute;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(id)initNewContext:(BOOL)arg1 ;
@end

