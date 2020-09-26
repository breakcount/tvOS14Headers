//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTBasePodcastListViewController, NSIndexPath, NSString;

@protocol MTSourceListDelegate <NSObject>
- (void)sourceList:(MTBasePodcastListViewController *)arg1 didUpdateSelectedItemUuid:(NSString *)arg2;
- (void)sourceList:(MTBasePodcastListViewController *)arg1 didSelectItemUuid:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional
- (void)sourceList:(MTBasePodcastListViewController *)arg1 didChangeEditing:(_Bool)arg2 animated:(_Bool)arg3;
@end
