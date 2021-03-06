/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIAssetManager, UIImage;

@interface TVVolatileImage : NSObject {

	_UIAssetManager* _assetManager;
	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
+(id)volatileImageWithImage:(id)arg1 fromAssetManager:(id)arg2 ;
+(id)volatileImageWithImage:(id)arg1 ;
-(id)init;
-(id)_init;
-(UIImage *)image;
@end

