/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayCircle, MKCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer {

	VKVectorOverlayCircle* _vectorData;
	double _strokeStart;
	double _strokeEnd;

}

@property (nonatomic,readonly) MKCircle * circle; 
@property (assign,nonatomic) double strokeStart; 
@property (assign,nonatomic) double strokeEnd; 
+(Class)_mapkitLeafClass;
-(void)setFillColor:(id)arg1 ;
-(double)strokeStart;
-(double)strokeEnd;
-(void)setStrokeColor:(id)arg1 ;
-(void)setStrokeStart:(double)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(BOOL)_canProvideVectorGeometry;
-(id)_vectorData;
-(void)_updateRenderColors;
-(void)_performInitialConfiguration;
-(void)createPath;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithCircle:(id)arg1 ;
-(MKCircle *)circle;
@end

