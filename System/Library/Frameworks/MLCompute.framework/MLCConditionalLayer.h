/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class MLCGraph;

@interface MLCConditionalLayer : MLCLayer {

	MLCGraph* _trueBranch;
	MLCGraph* _falseBranch;

}

@property (nonatomic,retain,readonly) MLCGraph * trueBranch;               //@synthesize trueBranch=_trueBranch - In the implementation block
@property (nonatomic,retain,readonly) MLCGraph * falseBranch;              //@synthesize falseBranch=_falseBranch - In the implementation block
+(id)layerWithTrueBranch:(id)arg1 falseBranch:(id)arg2 ;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(id)initWithTrueBranch:(id)arg1 falseBranch:(id)arg2 ;
-(MLCGraph *)trueBranch;
-(MLCGraph *)falseBranch;
-(unsigned long long)resultSizeForOutputIndex:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
@end

