/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface GKNotificationBanner : NSObject
+(void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)bannerViewWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3 ;
+(id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5 ;
+(id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(/*^block*/id)arg4 ;
@end
