/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCLayer.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCPaddingLayer : MLCLayer <NSCopying> {

	int _paddingType;
	float _constantValue;
	unsigned long long _paddingLeft;
	unsigned long long _paddingRight;
	unsigned long long _paddingTop;
	unsigned long long _paddingBottom;

}

@property (nonatomic,readonly) int paddingType;                               //@synthesize paddingType=_paddingType - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingLeft;                //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingRight;               //@synthesize paddingRight=_paddingRight - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingTop;                 //@synthesize paddingTop=_paddingTop - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingBottom;              //@synthesize paddingBottom=_paddingBottom - In the implementation block
@property (nonatomic,readonly) float constantValue;                           //@synthesize constantValue=_constantValue - In the implementation block
+(id)layerWithReflectionPadding:(id)arg1 ;
+(id)layerWithSymmetricPadding:(id)arg1 ;
+(id)layerWithZeroPadding:(id)arg1 ;
+(id)layerWithConstantPadding:(id)arg1 constantValue:(float)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)constantValue;
-(unsigned long long)paddingTop;
-(unsigned long long)paddingRight;
-(unsigned long long)paddingBottom;
-(unsigned long long)paddingLeft;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(id)initWithPaddingType:(int)arg1 paddingSizes:(id)arg2 constantValue:(float)arg3 ;
-(int)paddingType;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
@end

