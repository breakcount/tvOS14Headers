/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class TVImageProxy, UIImage, TVHKImageColors;

@interface TVHKBackgroundImageLoadOperation : TVHKAsynchronousOperation {

	TVImageProxy* _imageProxy;
	UIImage* _image;
	TVHKImageColors* _imageColors;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) TVHKImageColors * imageColors;              //@synthesize imageColors=_imageColors - In the implementation block
@property (nonatomic,readonly) TVImageProxy * imageProxy;                //@synthesize imageProxy=_imageProxy - In the implementation block
+(id)new;
-(id)init;
-(void)cancel;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)executionDidBegin;
-(TVImageProxy *)imageProxy;
-(id)initWithImageProxy:(id)arg1 ;
-(TVHKImageColors *)imageColors;
-(void)setImageColors:(TVHKImageColors *)arg1 ;
-(void)_imageProxyLoadDidComplete:(id)arg1 ;
-(void)_completeWithImage:(id)arg1 imageColors:(id)arg2 ;
@end

