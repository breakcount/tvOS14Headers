/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetLinkDelegate <NSObject>
@required
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4 cancelPendingAssetsInBatch:(BOOL)arg5;
-(void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4;
-(void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3;
-(void)assetLink:(id)arg1 didPauseAsseDownload:(id)arg2 error:(id)arg3;
-(void)assetLinkDidChange:(id)arg1;
-(void)assetLink:(id)arg1 didTransitionAssetStates:(id)arg2;
-(void)assetLink:(id)arg1 didUpdateDownloadPauseReasonForAssets:(id)arg2;

@end

