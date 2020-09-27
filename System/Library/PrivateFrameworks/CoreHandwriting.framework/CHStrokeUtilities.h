/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface CHStrokeUtilities : NSObject
+(vector<CGPoint, std::__1::allocator<CGPoint> >*)convexHullForStrokes:(id)arg1 inDrawing:(id)arg2 ;
+(vector<CGPoint, std::__1::allocator<CGPoint> >*)enlargedConvexHull:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 withMargin:(double)arg2 ;
+(double)threePointsOrientationWithOrigin:(CGPoint)arg1 pointA:(CGPoint)arg2 pointB:(CGPoint)arg3 ;
+(double)distanceFromPoint:(CGPoint)arg1 toRectangle:(CGRect)arg2 ;
+(double)distanceFromPoint:(CGPoint)arg1 toSegmentFromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
+(BOOL)isPointEnumerationSupportedForStroke:(id)arg1 ;
+(void)enumeratePointsForStroke:(id)arg1 interpolationType:(long long)arg2 resolution:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
+(vector<CGPoint, std::__1::allocator<CGPoint> >*)convexHullForPoints:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 ;
+(void)getAddedStrokes:(id*)arg1 removedStrokeIdentifiers:(id*)arg2 inStrokeProvider:(id)arg3 lastGroupingResult:(id)arg4 ;
+(id)strokeForIdentifier:(id)arg1 inStrokeProvider:(id)arg2 ;
+(double)durationOfStrokesInStrokeGroup:(id)arg1 strokeProvider:(id)arg2 ;
+(double)speedForFinalTimeRange:(double)arg1 stroke:(id)arg2 ;
+(double)arcLengthForStroke:(id)arg1 ;
+(CGRect)boundingBoxOfPoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 rotatedAroundPoint:(CGPoint)arg2 byAngle:(double)arg3 ;
+(CGRect)unionStrokeBounds:(const vector<CGRect, std::__1::allocator<CGRect> >*)arg1 usingStrokeCountLimit:(long long)arg2 reverseOrder:(BOOL)arg3 ;
+(CGRect)unionStrokeBounds:(const vector<CGRect, std::__1::allocator<CGRect> >*)arg1 aroundXPosition:(double)arg2 usingOneSideStrokeCountLimit:(long long)arg3 ;
+(vector<CGPoint, std::__1::allocator<CGPoint> >*)convexHullForStroke:(id)arg1 ;
+(double)circumferenceRatioOfCircleFittedToPoints:(const list<CGPoint, std::__1::allocator<CGPoint> >*)arg1 circleCenter:(CGPoint*)arg2 circleRadius:(double*)arg3 ;
+(double)vectorMeanWithoutOutliers:(vector<double, std::__1::allocator<double> >*)arg1 ;
+(double)lineOrientationForStrokePoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 error:(double*)arg2 ;
+(vector<CGPoint, std::__1::allocator<CGPoint> >*)regularizedPathFromPoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 delta:(double)arg2 gamma:(double)arg3 outError:(double*)arg4 ;
@end

