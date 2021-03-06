/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:28 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLRenderPipelineStateSPI.h>

@class MTLDebugInstrumentationData, NSString;

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineStateSPI>

@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) long long textureWriteRoundingMode; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * vertexDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * fragmentDebugInstrumentationData; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(NSString *)label;
-(id<MTLDevice>)device;
-(unsigned long long)gpuAddress;
-(unsigned long long)resourceIndex;
-(BOOL)supportIndirectCommandBuffers;
-(long long)textureWriteRoundingMode;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(id)newVertexShaderDebugInfo;
-(id)newFragmentShaderDebugInfo;
@end

