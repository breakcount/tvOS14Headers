/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLMeshBufferAllocator.h>

@class EAGLSharegroup, NSString;

@interface GLKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator> {

	EAGLSharegroup* _sharegroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3 ;
-(id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3 ;
-(id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2 ;
-(id)newZone:(unsigned long long)arg1 ;
-(id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2 ;
@end

