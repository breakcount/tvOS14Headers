/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface InpaintingTilingFilter : NSObject
+(id)performInpaintingTilingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(CGRect)arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6 ;
+(double)computeDistanceMultiplierForMask:(id)arg1 andTileSize:(int)arg2 ;
+(BOOL)isMaskRelativeAreaTooLargeForTiling:(id)arg1 maskBoundingBox:(CGRect)arg2 expandedMaskBoundingBox:(CGRect)arg3 andMaxRelativeAreaSize:(double)arg4 ;
+(void)computeTileSize:(int*)arg1 andMaxDistanceBetweenTiles:(double*)arg2 forExpandedMaskBBox:(CGRect)arg3 ;
+(id)computeTileCentersForNarrowDiagonalMask:(id)arg1 tileSize:(int)arg2 maxBaseDistanceBetweenPoints:(int)arg3 maxRelativeMaskAreaSize:(float)arg4 ;
+(BOOL)initializeBoundaryPreservingTile;
+(BOOL)isMaskSmallOrElongated:(id)arg1 maskBoundingBox:(CGRect)arg2 expandedMaskBoundingBox:(CGRect)arg3 maxElogatedMaskEdgeSize:(int)arg4 ;
+(BOOL)isMaskNarrowDiagonal:(id)arg1 maskBoundingBox:(CGRect)arg2 expandedMaskBoundingBox:(CGRect)arg3 maxDiagonalMaskEdgeSize:(int)arg4 maxRelativeMaskAreaSize:(float)arg5 ;
@end

