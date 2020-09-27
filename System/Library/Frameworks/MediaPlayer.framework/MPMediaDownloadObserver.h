/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPMediaDownloadObserver <NSObject>
@optional
-(void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2;
-(void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
-(void)downloadManager:(id)arg1 didCancelAssets:(id)arg2;
-(void)downloadManager:(id)arg1 didChangeDownloadPausedReasonForAssets:(id)arg2;

@end

