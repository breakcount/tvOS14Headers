/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class SBSWallpaperClient, NSObject;

@interface SBSWallpaperService : NSObject {

	SBSWallpaperClient* _client;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _wasInvalidated;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchOriginalImageForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchOriginalVideoURLForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchContentCutoutBoundsForVariant:(long long)arg1 orientation:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(BOOL)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(unsigned long long)arg3 ;
-(void)restoreDefaultWallpaperWithCompletion:(/*^block*/id)arg1 ;
@end

