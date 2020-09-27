/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic,retain) id<MTLCounterSampleBuffer> sampleBuffer; 
@property (assign,nonatomic) unsigned long long startOfVertexSampleIndex; 
@property (assign,nonatomic) unsigned long long endOfVertexSampleIndex; 
@property (assign,nonatomic) unsigned long long startOfFragmentSampleIndex; 
@property (assign,nonatomic) unsigned long long endOfFragmentSampleIndex; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

