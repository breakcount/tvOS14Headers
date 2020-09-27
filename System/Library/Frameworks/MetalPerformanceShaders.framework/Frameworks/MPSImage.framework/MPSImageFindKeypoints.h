/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSImageHistogram;

@interface MPSImageFindKeypoints : MPSKernel {

	SCD_Struct_MP19 _keypointRangeInfo;
	MPSImageHistogram* histogramKernel;

}

@property (nonatomic,readonly) SCD_Struct_MP19 keypointRangeInfo; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP19)keypointRangeInfo;
-(id)initWithDevice:(id)arg1 info:(const SCD_Struct_MP19*)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 regions:(const SCD_Struct_MP10*)arg3 numberOfRegions:(unsigned long long)arg4 keypointCountBuffer:(id)arg5 keypointCountBufferOffset:(unsigned long long)arg6 keypointDataBuffer:(id)arg7 keypointDataBufferOffset:(unsigned long long)arg8 ;
@end

