/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSObject, NSError, AVWeakReferencingDelegateStorage, NSArray, NSURL, NSNumber, AVURLAsset;

@interface AVAssetDownloadSessionInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef player;
	OpaqueFigPlaybackItemRef playbackItem;
	OpaqueFigAssetRef figAsset;
	NSObject*<OS_dispatch_queue> readWriteQueue;
	long long assetTypeLoadingStatus;
	long long status;
	BOOL didStartLoadingMetadata;
	NSError* error;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> figCallbackQueue;
	NSArray* mediaSelections;
	long long priority;
	NSURL* URL;
	NSURL* destinationURL;
	unsigned long long downloadToken;
	NSNumber* cachePrimingDownloadTokenNum;
	AVURLAsset* asset;
	CMBaseObjectRef assetDownloader;

}
@end

