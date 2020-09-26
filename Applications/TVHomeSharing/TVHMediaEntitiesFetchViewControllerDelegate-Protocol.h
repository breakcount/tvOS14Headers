//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVHKBackgroundImageInfo, TVHKMediaEntitiesFetchControllerResultSet, TVHKMediaEntity, TVHMediaEntitiesFetchViewController, UIViewController;

@protocol TVHMediaEntitiesFetchViewControllerDelegate <NSObject>
- (UIViewController *)mediaEntitiesFetchViewController:(TVHMediaEntitiesFetchViewController *)arg1 contentViewControllerWithFetchControllerResultSet:(TVHKMediaEntitiesFetchControllerResultSet *)arg2 sourceMediaEntity:(TVHKMediaEntity *)arg3 sourceMediaEntityBackgroundImageInfo:(TVHKBackgroundImageInfo *)arg4;

@optional
- (_Bool)mediaEntitiesFetchViewController:(TVHMediaEntitiesFetchViewController *)arg1 shouldShowContentViewControllerWithFetchControllerResultSet:(TVHKMediaEntitiesFetchControllerResultSet *)arg2;
- (void)mediaEntitiesFetchViewController:(TVHMediaEntitiesFetchViewController *)arg1 purgeSourceMediaEntityBackgroundImagesForContentViewController:(UIViewController *)arg2;
- (void)mediaEntitiesFetchViewController:(TVHMediaEntitiesFetchViewController *)arg1 updateContentViewController:(UIViewController *)arg2 withSourceMediaEntity:(TVHKMediaEntity *)arg3 sourceMediaEntityBackgroundImageInfo:(TVHKBackgroundImageInfo *)arg4;
- (void)mediaEntitiesFetchViewController:(TVHMediaEntitiesFetchViewController *)arg1 updateContentViewController:(UIViewController *)arg2 withFetchControllerResultSet:(TVHKMediaEntitiesFetchControllerResultSet *)arg3;
@end
