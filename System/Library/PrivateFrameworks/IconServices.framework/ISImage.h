/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSData, NSUUID;

@interface ISImage : NSObject {

	NSData* _bitmapData;

}

@property (retain) NSUUID * uuid; 
@property (readonly) NSData * bitmapData;              //@synthesize bitmapData=_bitmapData - In the implementation block
@property (readonly) CGSize pixelSize; 
@property (assign) CGSize minimumSize; 
@property (readonly) CGSize size; 
@property (readonly) double scale; 
@property (readonly) CGImageRef CGImage; 
@property (readonly) CGImageRef cgImage; 
@property (readonly) BOOL placeholder; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(CGColorSpaceRef)srgbColorSpace;
-(id)debugDescription;
-(id)description;
-(id)_init;
-(NSUUID *)uuid;
-(CGSize)pixelSize;
-(CGImageRef)CGImage;
-(BOOL)writeToURL:(id)arg1 ;
-(id)digest;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(NSData *)bitmapData;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 scale:(double)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 placeholder:(BOOL)arg3 ;
@end

