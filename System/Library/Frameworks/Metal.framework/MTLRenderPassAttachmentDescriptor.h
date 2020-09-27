/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic,retain) id<MTLTexture> texture; 
@property (assign,nonatomic) unsigned long long level; 
@property (assign,nonatomic) unsigned long long slice; 
@property (assign,nonatomic) unsigned long long depthPlane; 
@property (nonatomic,retain) id<MTLTexture> resolveTexture; 
@property (assign,nonatomic) unsigned long long resolveLevel; 
@property (assign,nonatomic) unsigned long long resolveSlice; 
@property (assign,nonatomic) unsigned long long resolveDepthPlane; 
@property (assign,nonatomic) unsigned long long loadAction; 
@property (assign,nonatomic) unsigned long long storeAction; 
@property (assign,nonatomic) unsigned long long storeActionOptions; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end
