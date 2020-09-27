/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSNNReduceBinary : MPSCNNBinaryKernel {

	SCD_Struct_MP4 _clipRectPrimarySource;
	SCD_Struct_MP4 _secondarySourceClipRect;
	int _reduceOp;
	SCD_Struct_MP4 _primarySourceClipRect;

}

@property (assign,nonatomic) SCD_Struct_MP4 primarySourceClipRect;                //@synthesize primarySourceClipRect=_primarySourceClipRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP4 secondarySourceClipRect;              //@synthesize secondarySourceClipRect=_secondarySourceClipRect - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 reduceOperation:(int)arg2 ;
-(int)reduceOp;
-(SCD_Struct_MP4)primarySourceClipRect;
-(void)setPrimarySourceClipRect:(SCD_Struct_MP4)arg1 ;
-(SCD_Struct_MP4)secondarySourceClipRect;
-(void)setSecondarySourceClipRect:(SCD_Struct_MP4)arg1 ;
@end

