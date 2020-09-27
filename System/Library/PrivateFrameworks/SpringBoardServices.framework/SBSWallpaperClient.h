/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSWallpaperClient : FBSServiceFacilityClient
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)fetchThumbnailForVariant:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchOriginalImageForVariant:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchOriginalVideoURLForVariant:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchContentCutoutBoundsForVariant:(unsigned)arg1 orientation:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(unsigned char)arg3 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(BOOL)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(unsigned long long)arg3 ;
-(void)restoreDefaultWallpaperWithCompletion:(/*^block*/id)arg1 ;
@end
