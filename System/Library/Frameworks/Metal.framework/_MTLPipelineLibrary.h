/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLPipelineLibrarySPI.h>

@protocol MTLDevice;
@class NSString, NSArray;

@interface _MTLPipelineLibrary : _MTLObjectWithLabel <MTLPipelineLibrarySPI> {

	PipelineLibraryData* _pipelineLibraryData;
	id<MTLDevice> _device;
	NSArray* _pipelineNames;
	BOOL _disableRunTimeCompilation;

}

@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device;                                      //@synthesize device=_device - In the implementation block
@property (readonly) NSArray * pipelineNames;                                   //@synthesize pipelineNames=_pipelineNames - In the implementation block
@property (assign) BOOL disableRunTimeCompilation;                              //@synthesize disableRunTimeCompilation=_disableRunTimeCompilation - In the implementation block
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(BOOL)disableRunTimeCompilation;
-(void)setDisableRunTimeCompilation:(BOOL)arg1 ;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(NSArray *)pipelineNames;
-(id<MTLPipelineCache>)pipelineCache;
-(id<MTLPipelineCache>)functionCache;
-(id)initWithDevice:(id)arg1 pipelineLibraryData:(PipelineLibraryData*)arg2 ;
@end

