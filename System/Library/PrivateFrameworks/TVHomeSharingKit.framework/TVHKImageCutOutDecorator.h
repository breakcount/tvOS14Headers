/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@interface TVHKImageCutOutDecorator : TVImageDecorator {

	BOOL _cutOutCropToFit;
	CGSize _imageScaleToSize;
	CGSize _cutOutScaleToSize;
	CGRect _fractionalRect;

}

@property (assign,nonatomic) CGSize imageScaleToSize;               //@synthesize imageScaleToSize=_imageScaleToSize - In the implementation block
@property (assign,nonatomic) CGRect fractionalRect;                 //@synthesize fractionalRect=_fractionalRect - In the implementation block
@property (assign,nonatomic) CGSize cutOutScaleToSize;              //@synthesize cutOutScaleToSize=_cutOutScaleToSize - In the implementation block
@property (assign,nonatomic) BOOL cutOutCropToFit;                  //@synthesize cutOutCropToFit=_cutOutCropToFit - In the implementation block
+(id)new;
-(id)init;
-(CGSize)expectedSize;
-(CGSize)imageScaleToSize;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(CGSize)loaderScaleToSize;
-(BOOL)loaderCropToFit;
-(id)decoratorIdentifier;
-(CGSize)cutOutScaleToSize;
-(id)_scaleImage:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 scaleToSize:(CGSize)arg4 cropToFit:(BOOL)arg5 ;
-(id)_cutOutImage:(id)arg1 ;
-(BOOL)cutOutCropToFit;
-(CGRect)fractionalRect;
-(id)initWithCutOutFractionalRect:(CGRect)arg1 ;
-(void)setImageScaleToSize:(CGSize)arg1 ;
-(void)setFractionalRect:(CGRect)arg1 ;
-(void)setCutOutScaleToSize:(CGSize)arg1 ;
-(void)setCutOutCropToFit:(BOOL)arg1 ;
@end

