/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLIndirectArgumentEncoder.h>
#import <libobjc.A.dylib/MTLArgumentEncoderSPI.h>

@class _MTLIndirectArgumentBufferLayout, MTLEmulationIndirectArgumentBufferLayout, NSString;

@interface MTLEmulationIndirectArgumentEncoder : _MTLIndirectArgumentEncoder <MTLArgumentEncoderSPI> {

	char* _destination;
	MTLEmulationIndirectArgumentBufferLayout* _emulationLayout;

}

@property (readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) _MTLIndirectArgumentBufferLayout * layout; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)encodedLength;
-(unsigned long long)alignment;
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void*)constantDataAtIndex:(unsigned long long)arg1 ;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setComputePipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1 ;
-(id)initWithLayout:(id)arg1 device:(id)arg2 ;
-(void)setFunctionPointer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFunctionPointers:(const id*)arg1 withRange:(NSRange)arg2 ;
@end

