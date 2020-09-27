/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <CoreMaterial/MTColor.h>

@interface MTWhiteColor : MTColor {

	double _white;
	double _alpha;

}

@property (nonatomic,readonly) double white;              //@synthesize white=_white - In the implementation block
@property (nonatomic,readonly) double alpha;              //@synthesize alpha=_alpha - In the implementation block
-(id)description;
-(double)alpha;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorDescription;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
-(id)_rgbColor;
-(double)white;
@end

