/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPUDropout : _MLCCPULayer
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 rate:(float)arg2 seed:(unsigned long long)arg3 ;
-(id)initWithDevice:(id)arg1 rate:(float)arg2 seed:(unsigned long long)arg3 ;
@end

