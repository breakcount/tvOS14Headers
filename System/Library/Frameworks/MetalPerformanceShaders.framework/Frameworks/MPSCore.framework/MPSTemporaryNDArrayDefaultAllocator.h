/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSNDArrayDefaultAllocator.h>
#import <MPSCore/MPSNDArrayAllocator.h>

@class NSString;

@interface MPSTemporaryNDArrayDefaultAllocator : MPSNDArrayDefaultAllocator <MPSNDArrayAllocator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)arrayForCommandBuffer:(id)arg1 arrayDescriptor:(id)arg2 kernel:(id)arg3 ;
@end

