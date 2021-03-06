/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:29 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <MetalTools/MTLToolsCommandQueue.h>

@class NSString;

@interface MTLCountersCommandQueue : MTLToolsCommandQueue {

	NSString* _tracePath;

}

@property (nonatomic,readonly) NSString * tracePath;              //@synthesize tracePath=_tracePath - In the implementation block
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(id)commandBufferWithDescriptor:(id)arg1 ;
-(NSString *)tracePath;
-(id)initWithCommandQueue:(id)arg1 device:(id)arg2 ;
@end

