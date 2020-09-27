/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxImage : NSObject <NSCopying> {

	FxImagePriv* _imagePriv;

}
+(id)alloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)bytes;
-(unsigned long long)size;
-(id)initWithInfo:(SCD_Struct_PA82)arg1 ;
-(unsigned long long)version;
-(unsigned long long)depth;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(CGRect)bounds;
-(void)setBytes:(unsigned long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(unsigned long long)origin;
-(void)setOrigin:(unsigned long long)arg1 ;
-(unsigned long long)imageType;
-(SCD_Struct_PA82)imageInfo;
-(unsigned long long)field;
-(void)setField:(unsigned long long)arg1 ;
-(void)setImageType:(unsigned long long)arg1 ;
-(unsigned long long)colorInfo;
-(BOOL)isPremultiplied;
-(void)setColorInfo:(unsigned long long)arg1 ;
-(double)pixelAspect;
-(id)pixelTransform;
-(id)inversePixelTransform;
-(FxRect)dod;
-(unsigned long long)fieldOrder;
-(unsigned long long)numActiveChannels;
-(BOOL)containsPointX:(int)arg1 Y:(int)arg2 ;
-(void)setWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2 ;
-(void)setNumActiveChannels:(unsigned long long)arg1 ;
-(void)setIsPremultiplied:(BOOL)arg1 ;
-(void)setPixelAspect:(double)arg1 ;
-(void)setFieldOrder:(unsigned long long)arg1 ;
-(unsigned long long)fxColorPrimaries;
-(void)setFxColorPrimaries:(unsigned long long)arg1 ;
-(void)setEyeType:(int)arg1 ;
-(int)eyeType;
-(void)setDod:(FxRect)arg1 ;
-(void)setPixelTransform:(id)arg1 ;
-(double)scaleX;
-(double)scaleY;
-(void)setScaleX:(double)arg1 ;
-(void)setScaleY:(double)arg1 ;
-(void)setDeallocCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
-(BOOL)_verifyImage;
@end

