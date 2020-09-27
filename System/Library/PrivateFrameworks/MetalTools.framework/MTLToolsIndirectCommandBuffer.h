/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:35:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLIndirectCommandBufferSPI.h>

@class NSString;

@interface MTLToolsIndirectCommandBuffer : MTLToolsResource <MTLIndirectCommandBufferSPI>

@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long storageMode; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (readonly) unsigned long long size; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)size;
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)storageMode;
-(unsigned long long)gpuAddress;
-(void)getHeader:(void*)arg1 headerSize:(unsigned long long*)arg2 ;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(void)resetWithRange:(NSRange)arg1 ;
-(unsigned long long)resourceIndex;
@end
