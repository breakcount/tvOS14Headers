/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVColorSpace : NSObject {

	int _type;

}
+(id)extendedSRGBColorSpace;
+(id)extendedLinearSRGBColorSpace;
+(id)preferredDisplayColorSpace;
+(id)preferredExportColorSpace;
+(id)pvColorSpaceFromCGColorSpace:(CGColorSpaceRef)arg1 ;
+(id)pvColorSpaceForCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)sRGBColorSpace;
+(id)p3d65GammaColorSpace;
+(id)rec709GammaColorSpace;
+(id)rec2020HLGColorSpace;
+(id)rec2020LinearColorSpace;
+(id)rec2100HLGColorSpace;
+(id)rec2100PQColorSpace;
+(id)p3HLGGammaColorSpace;
+(id)p3PQGammaColorSpace;
+(id)rec601GammaColorSpace;
+(id)rec709LinearColorSpace;
+(id)rec2020PQColorSpace;
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithType:(int)arg1 ;
-(id)nclcTriplet;
-(CGColorSpaceRef)cgColorSpace;
-(BOOL)isP3d65GammaColorSpace;
-(BOOL)isWideGamutSpace;
-(BOOL)isExtendedSRGBColorSpace;
-(BOOL)isSRGBColorSpace;
-(BOOL)isRec709GammaColorSpace;
-(BOOL)isHDRSpace;
-(BOOL)isEqualToCGColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)isRec2100HLGColorSpace;
-(BOOL)isRec2100PQColorSpace;
-(BOOL)isExtendedLinearSRGBColorSpace;
-(BOOL)isRec2020LinearColorSpace;
-(BOOL)isP3HLGGammaColorSpace;
-(BOOL)isP3PQGammaColorSpace;
-(BOOL)isRec601GammaColorSpace;
-(BOOL)isRec709LinearColorSpace;
-(BOOL)isRec2020HLGColorSpace;
-(BOOL)isRec2020PQColorSpace;
@end
