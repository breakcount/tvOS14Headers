/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>

@class GLKMeshBufferZone, GLKMeshBufferAllocator, NSString;

@interface GLKMeshBuffer : NSObject <MDLMeshBuffer> {

	unsigned _mapCount;
	void* _mapPtr;
	unsigned _target;
	GLKMeshBufferZone* _zone;
	unsigned _glBufferName;
	unsigned long long _length;
	GLKMeshBufferAllocator* _allocator;
	unsigned long long _offset;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long length;                       //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) GLKMeshBufferAllocator * allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) unsigned glBufferName;                           //@synthesize glBufferName=_glBufferName - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferZone> zone;                      //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<MDLMeshBufferZone>)zone;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned long long)type;
-(id)map;
-(unsigned long long)offset;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(GLKMeshBufferAllocator *)allocator;
-(id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4 ;
-(unsigned)glBufferName;
-(id)_initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6 ;
-(id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3 ;
@end

