/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class UIColor, UIImage;

@interface _MKMarkerStyle : NSObject {

	UIColor* _markerColor;
	double _shadowAlpha;
	UIColor* _strokeColor;
	double _strokeWidth;
	UIColor* _glyphColor;
	UIImage* _glyphImage;

}

@property (nonatomic,readonly) UIColor * markerColor;              //@synthesize markerColor=_markerColor - In the implementation block
@property (nonatomic,readonly) double shadowAlpha;                 //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,readonly) double strokeWidth;                 //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,readonly) UIColor * glyphColor;               //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,readonly) UIImage * glyphImage;               //@synthesize glyphImage=_glyphImage - In the implementation block
+(id)markerStyleForTraitCollection:(id)arg1 state:(long long)arg2 styleAttributes:(id)arg3 coordinate:(CLLocationCoordinate2D)arg4 ;
-(UIColor *)strokeColor;
-(UIColor *)glyphColor;
-(double)strokeWidth;
-(UIColor *)markerColor;
-(double)shadowAlpha;
-(UIImage *)glyphImage;
@end

