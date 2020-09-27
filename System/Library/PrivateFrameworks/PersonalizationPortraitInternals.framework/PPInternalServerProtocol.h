/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PPInternalServerProtocol
@required
-(void)sysdiagnoseInformationWithCompletion:(/*^block*/id)arg1;
-(void)resetTrialMLModelsForNamespaceName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setTrialUseDefaultFiles:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)trialOverridePath:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 completion:(/*^block*/id)arg4;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(/*^block*/id)arg2;
-(void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(/*^block*/id)arg1;
-(void)assetMetadataRefreshIntervalSecondsWithCompletion:(/*^block*/id)arg1;
-(void)downloadAssetMetadataWithCompletion:(/*^block*/id)arg1;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)assetVersionsWithCompletion:(/*^block*/id)arg1;
-(void)abGroupInfoWithCompletion:(/*^block*/id)arg1;

@end

