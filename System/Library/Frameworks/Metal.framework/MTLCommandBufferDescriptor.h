/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLCommandBufferDescriptor : NSObject <NSCopying> {

	BOOL _retainedReferences;
	unsigned long long _errorOptions;

}

@property (assign,nonatomic) BOOL retainedReferences;                      //@synthesize retainedReferences=_retainedReferences - In the implementation block
@property (assign,nonatomic) unsigned long long errorOptions;              //@synthesize errorOptions=_errorOptions - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)retainedReferences;
-(unsigned long long)errorOptions;
-(void)setErrorOptions:(unsigned long long)arg1 ;
-(void)setRetainedReferences:(BOOL)arg1 ;
@end
