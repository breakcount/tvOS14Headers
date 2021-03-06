/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@interface MLCPhiLayer : MLCLayer
+(id)layerWithControlTreeNode:(id)arg1 sources:(id)arg2 resultTensor:(id)arg3 ;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)initWithControlTreeNode:(id)arg1 sources:(id)arg2 resultTensor:(id)arg3 ;
@end

