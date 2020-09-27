/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLCommandQueue.h>

@protocol MTLDevice;
@class IOGPUMetalDevice;

@interface IOGPUMetalCommandQueue : _MTLCommandQueue {

	IOGPUCommandQueueRef _commandQueue;
	IOGPUMetalDevice*<MTLDevice> _device;
	unsigned long long _priority;
	unsigned long long _backgroundPriority;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(void)dealloc;
-(void)setLabel:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(BOOL)_setGPUPriority:(unsigned long long)arg1 backgroundPriority:(unsigned long long)arg2 ;
-(void)setCompletionQueue:(id)arg1 ;
-(unsigned long long)getGPUPriority;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(void)submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)_submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
@end

