/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandBuffer, MTLBlitCommandEncoder, OS_dispatch_queue;
#import <MetalKit/MetalKit-Structs.h>
@class NSLock, NSObject;

@interface MTKTextureUploader : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandBuffer> _commandBuffer;
	id<MTLBlitCommandEncoder> _blit;
	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _notifyQueue;

}
-(void)dealloc;
-(void)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateMipmapsForTexture:(id)arg1 ;
-(void)copyBytes:(const void*)arg1 toTexture:(id)arg2 bitsPerPixel:(unsigned long long)arg3 pixelComponents:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 region:(SCD_Struct_MT4)arg7 slice:(unsigned long long)arg8 level:(unsigned long long)arg9 flipVertically:(BOOL)arg10 ;
-(void)copyTexture:(id)arg1 toTexture:(id)arg2 ;
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 notifyQueue:(id)arg3 ;
-(id)newTextureWithData:(id)arg1 options:(id)arg2 ;
@end

