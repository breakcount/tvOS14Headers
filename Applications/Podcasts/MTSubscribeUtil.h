//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTSubscribeUtil : NSObject
{
}

+ (id)identifierForDictionary:(id)arg1;	// IMP=0x00000001000177fc
+ (_Bool)isSubscribedToPodcastWithStorePlatformDictionary:(id)arg1;	// IMP=0x0000000100017590
+ (void)unsubscribeToPodcastWithStorePlatformDictionary:(id)arg1;	// IMP=0x0000000100017354
+ (void)subscribeToPodcastWithStorePlatformDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016d1c
+ (void)subscribeToPodcastWithFeedUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000167a8

@end
