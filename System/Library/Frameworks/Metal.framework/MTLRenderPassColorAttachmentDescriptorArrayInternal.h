/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLRenderPassColorAttachmentDescriptorArray.h>

@class MTLRenderPassColorAttachmentDescriptorInternal, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

@interface MTLRenderPassColorAttachmentDescriptorArrayInternal : MTLRenderPassColorAttachmentDescriptorArray {

	MTLRenderPassColorAttachmentDescriptorInternal* _color_descriptors[8];
	MTLRenderPassDepthAttachmentDescriptorInternal* _depth_descriptor;
	MTLRenderPassStencilAttachmentDescriptorInternal* _stencil_descriptor;

}
-(void)dealloc;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)_descriptorAtIndex:(unsigned long long)arg1 ;
@end

