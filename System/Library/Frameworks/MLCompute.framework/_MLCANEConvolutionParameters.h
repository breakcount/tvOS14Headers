/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _MLCANEConvolutionParameters : NSObject {

	NSDictionary* _convolutionParams;
	NSDictionary* _biasParams;
	NSDictionary* _neuronParams;

}

@property (nonatomic,retain,readonly) NSDictionary * convolutionParams;              //@synthesize convolutionParams=_convolutionParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * biasParams;                     //@synthesize biasParams=_biasParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * neuronParams;                   //@synthesize neuronParams=_neuronParams - In the implementation block
+(id)convolutionUnitParametersWith:(id)arg1 biasParams:(id)arg2 neuronParams:(id)arg3 ;
-(NSDictionary *)neuronParams;
-(NSDictionary *)convolutionParams;
-(NSDictionary *)biasParams;
-(id)initWithConvolutionParams:(id)arg1 biasParams:(id)arg2 neuronParams:(id)arg3 ;
@end

