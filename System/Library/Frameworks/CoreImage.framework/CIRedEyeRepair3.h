/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RedEyeInspector3;
#import <CoreImage/CoreImage-Structs.h>
@class NSArray, NSMutableArray;

@interface CIRedEyeRepair3 : NSObject {

	id<RedEyeInspector3> inspector;
	SCD_Struct_CI35 fullBitmap;
	GridROI_t subRectangle;
	SCD_Struct_CI36 FC;
	NSArray* faceArray;
	SCD_Struct_CI35 faceBitmap;
	SCD_Struct_CI38 S;
	SCD_Struct_CI39 PB;
	SCD_Struct_CI40* G;
	SCD_Struct_CI41 M;
	SCD_Struct_CI42 FS;
	int printFaceArrayLevel;
	CGRect ROIRect;
	float avgLuminance;
	float minLuminance;
	float maxLuminance;
	float skinval;
	int ioffx;
	int ioffy;
	int erError;
	NSMutableArray* repairs;
	GridROI_t repairRect;
	SCD_Struct_CI35 repairMap;
	NSMutableArray* failureCauses;

}
+(CGRect)supportRectangleWithFaceArray:(id)arg1 options:(id)arg2 ;
+(CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(CGSize)arg2 ;
+(float)yawAngleWithFaceDictionary:(id)arg1 ;
+(int)bitmapRect:(GridROI_t*)arg1 point:(CGPoint*)arg2 polygon:(CGPoint)arg3 andDistMatrix:(float)arg4 forEye:(int)arg5 inFaceDictionary:(id)arg6 settings:(SCD_Struct_CI43*)arg7 ;
+(int)faceContext:(SCD_Struct_CI44*)arg1 withFaceArray:(id)arg2 index:(int)arg3 settings:(SCD_Struct_CI43*)arg4 ;
+(SCD_Struct_CI43)settingsWithOptions:(id)arg1 ;
+(GridROI_t)bitmapRectWithImageSubRectangle:(CGRect)arg1 settings:(SCD_Struct_CI43*)arg2 ;
+(void)insertIntoThreadHopper:(SCD_Struct_CI46*)arg1 index:(int)arg2 recChannel:(float)arg3 hue:(float)arg4 saturation:(float)arg5 luminance:(float)arg6 shapeMetricTotal:(float)arg7 xPosition:(float)arg8 ;
+(void)insertIntoConnectionHopper:(SCD_Struct_CI48*)arg1 index1:(int)arg2 drop1:(int)arg3 index2:(int)arg4 drop2:(int)arg5 score:(float)arg6 ;
-(void)dealloc;
-(id)initWithExternalBuffer:(char*)arg1 subRectangle:(CGRect)arg2 rowBytes:(unsigned long long)arg3 options:(id)arg4 ;
-(void)autoRepairWithFaceArray:(id)arg1 ;
-(id)repairArray;
-(CGAffineTransform)inverseImageTransformForOrientation:(int)arg1 ;
-(void)executeRepair:(id)arg1 ;
-(void)repairExternalBuffer;
-(CGPoint)centroidWithConvexHull:(SCD_Struct_CI49*)arg1 ;
-(id)dictionaryPointArrayWithEyeBitmapPoint:(CGPoint)arg1 ;
-(id)dictionaryRectArrayWithGlobalBitmapRect:(GridROI_t)arg1 ;
-(id)dictionaryPointArrayWithBitmapPoint:(CGPoint)arg1 ;
-(id)dictionaryRectArrayWithBitmapRect:(GridROI_t)arg1 ;
-(id)dictionaryPointArrayWithGlobalBitmapPoint:(CGPoint)arg1 ;
-(GridROI_t)globalBitmapRectWithDictionaryRectArray:(id)arg1 ;
-(CGPoint)globalBitmapPointWithDictionaryPointArray:(id)arg1 ;
-(BOOL)unpackToGlobalRepairDictionary:(id)arg1 convexHull:(/*function pointer*/void**)arg2 facts:(SCD_Struct_CI51*)arg3 ;
-(void)setInspector:(id)arg1 ;
-(void)printFaceArray;
-(int)updateWithFaceIndex:(int)arg1 ;
-(id)stringWithRER3Error:(int)arg1 ;
-(BOOL)gatherFaceStatistics:(SCD_Struct_CI41*)arg1 ;
-(int)repairDictionary:(id*)arg1 withEyeIndex:(int)arg2 ;
-(int)transformRepairArray:(CGAffineTransform)arg1 ;
-(CGPoint)leftHandedTransform:(CGAffineTransform)arg1 ofPoint:(CGPoint)arg2 ;
-(void)transformGlobalsWithTransform:(CGAffineTransform)arg1 ;
-(void)transformConvexHull:(SCD_Struct_CI49*)arg1 withTransform:(CGAffineTransform)arg2 ;
-(int)packGlobalRepairDictionary:(id*)arg1 withConvexHull:(SCD_Struct_CI49*)arg2 facts:(SCD_Struct_CI51*)arg3 ;
-(id)mutableCopyOfArray:(id)arg1 ;
-(int)executeRepairWithRepairDictionary:(id)arg1 ;
-(SCD_Struct_CI35*)repairMap;
-(GridROI_t)repairRect;
-(CGPoint)bitmapPointWithDictionaryPoint:(CGPoint)arg1 ;
-(CGPoint)globalBitmapPointWithDictionaryPoint:(CGPoint)arg1 ;
-(CGPoint)bitmapPointWithDictionaryPointArray:(id)arg1 ;
-(CGPoint)dictionaryPointWithBitmapPoint:(CGPoint)arg1 ;
-(CGPoint)dictionaryPointWithGlobalBitmapPoint:(CGPoint)arg1 ;
-(GridROI_t)bitmapRectWithDictionaryRectArray:(id)arg1 ;
-(int)saveRepairDictionary:(id*)arg1 withConvexHull:(SCD_Struct_CI49*)arg2 facts:(SCD_Struct_CI51*)arg3 ;
-(BOOL)openRepairDictionary:(id)arg1 convexHull:(/*function pointer*/void**)arg2 facts:(SCD_Struct_CI51*)arg3 ;
-(id)repairWithSide:(int)arg1 ;
-(void)termShapePoints:(SCD_Struct_CI52*)arg1 ;
-(void)point:(CGPoint)arg1 toGridRow:(int*)arg2 column:(int*)arg3 ;
-(void)removeThreadAtIndex:(int)arg1 ;
-(int)gatherThreadInfo:(SCD_Struct_CI53*)arg1 ;
-(int)lookForPoint:(CGPoint*)arg1 onLine:(SCD_Struct_CI54)arg2 nearestPoint:(CGPoint)arg3 ;
-(void)forAllGridPointsNear:(int)arg1 withinRadius:(float)arg2 do:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(int)initHull:(/*function pointer*/void**)arg1 withOrientation:(BOOL)arg2 ;
-(void)termHull:(SCD_Struct_CI49*)arg1 ;
-(int)addPoint:(CGPoint)arg1 toHull:(SCD_Struct_CI49*)arg2 ;
-(BOOL)trimConcaveFromHull:(SCD_Struct_CI49*)arg1 ;
-(BOOL)trimEndPointFromHull:(SCD_Struct_CI49*)arg1 ;
-(BOOL)trimStartPointFromHull:(SCD_Struct_CI49*)arg1 ;
-(BOOL)isConvex:(SCD_Struct_CI49*)arg1 ;
-(int)renderHull:(SCD_Struct_CI49*)arg1 toBitmap:(SCD_Struct_CI35*)arg2 ;
-(void)printThreadWithIndex:(int)arg1 ;
-(int)newThread:(/*function pointer*/void**)arg1 ;
-(void)putThreadAtIndex:(int)arg1 ;
-(void)printThreadsOnlyClosed:(BOOL)arg1 message:(char*)arg2 ;
-(void)forAllGridThreadsNear:(CGPoint)arg1 withinRadius:(float)arg2 do:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(void)printConnectionHopper:(SCD_Struct_CI48*)arg1 message:(char*)arg2 ;
-(int)connectThreads:(int)arg1 drop1:(int)arg2 and:(int)arg3 drop2:(int)arg4 ;
-(void)computeLengthsAnglesAndDeltaAnglesForShape:(SCD_Struct_CI52*)arg1 ;
-(int)newShape:(/*function pointer*/void**)arg1 ;
-(int)initShapePoints:(SCD_Struct_CI52*)arg1 withMaxPoints:(int)arg2 ;
-(int)addPoint:(CGPoint)arg1 toShapePoints:(SCD_Struct_CI52*)arg2 ;
-(int)updatedCheckpoint:(CGPoint*)arg1 withCheckpoint:(CGPoint)arg2 checkpointIndex:(int)arg3 angle:(float)arg4 width:(int)arg5 height:(int)arg6 inChannel:(SCD_Struct_CI35*)arg7 threadIndex:(int)arg8 returningEdgeWidth:(float*)arg9 ;
-(int)newShape:(/*function pointer*/void**)arg1 byInterpolatingBetweenCheckpoints:(SCD_Struct_CI55)arg2 nc:(int)arg3 usingVectorField:(SCD_Struct_CI35*)arg4 ;
-(void)removeRedundantPointsFromShape:(SCD_Struct_CI52*)arg1 closerThan:(float)arg2 ;
-(void)removeSmallBumpsFromShape:(SCD_Struct_CI52*)arg1 center:(CGPoint)arg2 threshold:(float)arg3 ;
-(void)removeSpikesFromShape:(SCD_Struct_CI52*)arg1 ;
-(int)improvedShape:(/*function pointer*/void**)arg1 withShape:(SCD_Struct_CI52*)arg2 ;
-(int)insertPoint:(CGPoint)arg1 andDirection:(CGPoint)arg2 intoGrid:(BOOL)arg3 ;
-(int)closeThreadIndex:(int)arg1 usingVectorField:(SCD_Struct_CI35*)arg2 ;
-(int)attemptClosureOfThreadIndex:(int)arg1 ;
-(CGPoint)threadCentroid:(SCD_Struct_CI53*)arg1 ;
-(float)threadSignedArea:(SCD_Struct_CI53*)arg1 centroid:(CGPoint)arg2 ;
-(int)shape:(/*function pointer*/void**)arg1 withThreadAtIndex:(int)arg2 centroid:(CGPoint)arg3 ;
-(void)slidingWindowAnalysisOfShape:(SCD_Struct_CI52*)arg1 into:(SCD_Struct_CI56*)arg2 ;
-(int)copyShape:(SCD_Struct_CI52*)arg1 into:(SCD_Struct_CI52*)arg2 transform:(CGAffineTransform)arg3 height:(int)arg4 ;
-(int)convexHull:(/*function pointer*/void**)arg1 ofOriented:(BOOL)arg2 shape:(SCD_Struct_CI52*)arg3 ;
-(void)measureHull:(SCD_Struct_CI49*)arg1 majorAxis:(CGPoint*)arg2 majorTo:(CGPoint*)arg3 majorDiameter:(float*)arg4 minorAxis:(CGPoint*)arg5 minorTo:(CGPoint*)arg6 minorDiameter:(float*)arg7 ;
-(int)color:(SCD_Struct_CI50*)arg1 underConvexHull:(SCD_Struct_CI49*)arg2 saturated:(SCD_Struct_CI50*)arg3 ;
-(SCD_Struct_CI50)RGBtoHSV:(SCD_Struct_CI50)arg1 ;
-(BOOL)hopperElement:(SCD_Struct_CI45*)arg1 isMoreScleraThanElement:(SCD_Struct_CI45*)arg2 ;
-(void)swapHopperElement:(SCD_Struct_CI45*)arg1 withElement:(SCD_Struct_CI45*)arg2 ;
-(BOOL)initGridWithBitmap:(SCD_Struct_CI35*)arg1 scale:(int)arg2 ;
-(BOOL)edgePoint:(CGPoint*)arg1 withBitmap:(SCD_Struct_CI35*)arg2 center:(CGPoint)arg3 perp:(CGPoint)arg4 ;
-(void)regressionWithPointIndex:(int)arg1 ;
-(int)replacePointAndDirection:(int)arg1 ;
-(int)nextPointIndexWithPointIndex:(int)arg1 ;
-(int)linkUpPointIndex:(int)arg1 toPointIndex:(int)arg2 ;
-(int)findThreadsInGrid;
-(int)connectThreadsInGrid;
-(int)recognizeThreadsWinningThreadIndex:(int*)arg1 info:(SCD_Struct_CI50*)arg2 ;
-(int)copyGridInto:(SCD_Struct_CI57*)arg1 transform:(CGAffineTransform)arg2 height:(int)arg3 ;
-(int)convexHull:(/*function pointer*/void**)arg1 ofOriented:(BOOL)arg2 threadIndex:(int)arg3 ;
-(void)termGrid;
-(void)condenseFourChannelRecognitionMap:(SCD_Struct_CI35*)arg1 intoOneChanneMap:(SCD_Struct_CI35*)arg2 ;
-(void)magnitudeMap:(SCD_Struct_CI35*)arg1 fromGabor:(SCD_Struct_CI35*)arg2 ;
-(int)renderEyePolygonToBitmap:(SCD_Struct_CI35*)arg1 ;
-(int)analyzeMask:(SCD_Struct_CI35*)arg1 usingConvexHull:(SCD_Struct_CI49*)arg2 producingOptimizedMask:(SCD_Struct_CI35*)arg3 ;
-(int)widenedHull:(/*function pointer*/void**)arg1 withHull:(SCD_Struct_CI49*)arg2 by:(float)arg3 ;
-(int)renderConvexHull:(SCD_Struct_CI49*)arg1 distance:(float)arg2 fieldToBitmap:(SCD_Struct_CI35*)arg3 ;
-(void)start12BitRandom:(int)arg1 ;
-(double)next12BitRandom;
-(void)initBitmaps;
-(int)prepareTransformWithEyeIndex:(int)arg1 ;
-(int)prepareBitmapsWithString:(char*)arg1 ;
-(int)prominenceConvexHull:(/*function pointer*/void**)arg1 facts:(SCD_Struct_CI51*)arg2 ;
-(void)termBitmaps;
-(int)prepareMasksWithConvexHull:(SCD_Struct_CI49*)arg1 ;
-(SCD_Struct_CI42)focusStatsWithBitmap:(SCD_Struct_CI35*)arg1 IOD:(float)arg2 ;
-(BOOL)isBlurryWithFocusStats:(SCD_Struct_CI42)arg1 ;
@end

