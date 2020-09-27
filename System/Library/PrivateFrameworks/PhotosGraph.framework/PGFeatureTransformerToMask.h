/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeatureSliceTransformer.h>

@interface PGFeatureTransformerToMask : PGFeatureSliceTransformer {

	float _maskingValue;

}

@property (nonatomic,readonly) float maskingValue;              //@synthesize maskingValue=_maskingValue - In the implementation block
+(id)name;
+(id)instanceWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2 ;
-(id)initWithMaskingFloatValue:(float)arg1 ;
-(id)initWithMaskingFloatValue:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(float)maskingValue;
@end

