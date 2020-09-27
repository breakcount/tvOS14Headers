/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotoSources/TVMutablePhotoAsset.h>

@class TVImageProxy, PHAsset;

@interface TVSlideshowPhotoAsset : TVMutablePhotoAsset {

	TVImageProxy* _assetProxy;
	PHAsset* _photoAsset;

}

@property (nonatomic,retain) TVImageProxy * assetProxy;              //@synthesize assetProxy=_assetProxy - In the implementation block
@property (nonatomic,retain) PHAsset * photoAsset;                   //@synthesize photoAsset=_photoAsset - In the implementation block
-(void)setAssetProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)assetProxy;
-(PHAsset *)photoAsset;
-(void)setPhotoAsset:(PHAsset *)arg1 ;
@end

