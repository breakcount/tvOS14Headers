/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PHFetchResult, PXAssetReference, PXAssetsDataSource;


@protocol PXPhotoKitAssetCollectionActionPerformerInput <NSObject>
@property (nonatomic,readonly) PHFetchResult * people; 
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference; 
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource; 
@property (nonatomic,readonly) PHFetchResult * assetsFetchResult; 
@optional
-(PHFetchResult *)people;
-(PXAssetReference *)dropTargetAssetReference;
-(PXAssetsDataSource *)assetsDataSource;
-(PHFetchResult *)assetsFetchResult;

@end

