/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLCommandBuffer.h>

@protocol MTLDevice, OS_dispatch_semaphore;
@class IOGPUMetalDevice, NSObject, NSMutableSet;

@interface IOGPUMetalCommandBuffer : _MTLCommandBuffer {

	IOGPUMetalDevice*<MTLDevice> _device;
	IOGPUMetalCommandBufferStorage* _storage;
	unsigned long long* _submitToHardwareTimeStampPointer;
	unsigned long long _protectionOptions;
	void* _scheduledCallbackBlockPtr;
	void* _completedCallbackBlockPtr;
	NSObject*<OS_dispatch_semaphore> _commitAndResetSem;
	NSMutableSet* _purgedResources;

}

@property (readonly) IOGPUMetalCommandBufferResourceInfo* commandBufferResourceInfo; 
@property (readonly) IOGPUResourceList* ioGPUResourceList; 
@property (readonly) id<MTLDevice> device;                                                        //@synthesize device=_device - In the implementation block
@property (readonly) IOGPUMetalCommandBufferStorage* commandBufferStorage;                        //@synthesize storage=_storage - In the implementation block
-(void)dealloc;
-(unsigned long long)protectionOptions;
-(void)setLabel:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(void)kernelCommandCollectTimeStamp;
-(void)_encodePurgedResources;
-(void)commit;
-(void)commitAndReset;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)growKernelCommandBuffer:(unsigned long long)arg1 ;
-(void)getCurrentKernelCommandBufferPointer:(void*)arg1 end:(void*)arg2 ;
-(void*)_reserveKernelCommandBufferSpace:(unsigned long long)arg1 ;
-(void)commitEncoder;
-(void)_debugBytes:(const char*)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(void)getCurrentKernelCommandBufferStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(void)setCurrentKernelCommandBufferPointer:(void*)arg1 ;
-(void)allocCommandBufferResourceAtIndex:(unsigned)arg1 ;
-(IOGPUSegmentListHeader*)getSegmentListHeader;
-(void)getSegmentListPointerStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(IOGPUMetalCommandBufferResourceInfo*)commandBufferResourceInfo;
-(void)setCurrentSegmentListPointer:(void*)arg1 ;
-(void)growSegmentList;
-(void)beginSegment:(void*)arg1 ;
-(void)endCurrentSegment;
-(void)validate;
-(id)akResourceList;
-(id)akPrivateResourceList;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeSubmitSleepMS:(unsigned)arg1 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(void)addPurgedResource:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(IOGPUMetalCommandBufferStorage*)commandBufferStorage;
-(IOGPUResourceList*)ioGPUResourceList;
-(void)allocDebugBuffer;
-(void)growDebugBuffer:(unsigned)arg1 ;
-(void)getDebugBufferPointerStart:(void*)arg1 end:(void*)arg2 ;
@end

