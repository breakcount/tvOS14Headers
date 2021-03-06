/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDSAssetProviding <NSObject>
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate; 
@required
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2;
-(void)serverDidUpdateAssetsWithType:(id)arg1;
-(void)beginDownloadForAssertions:(id)arg1 discretionaryDownload:(BOOL)arg2;
-(void)updateCatalogForAssetTypes:(id)arg1 discretionaryDownload:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removeAssetsForAssertions:(id)arg1;
-(void)removeOldAssetsForAssertions:(id)arg1;

@end

