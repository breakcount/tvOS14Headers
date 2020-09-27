/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIColor.h>

@interface UIDisplayP3Color : UIColor {

	double redComponent;
	double greenComponent;
	double blueComponent;
	double alphaComponent;
	A{CGColor}* _cachedColor;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)set;
-(CGColorRef)CGColor;
-(double)alphaComponent;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(void)setStroke;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(id)colorSpaceName;
-(void)setFill;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(BOOL)_isDeepColor;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
@end

