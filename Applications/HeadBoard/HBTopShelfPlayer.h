//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPPlayer.h>

@interface HBTopShelfPlayer : TVPPlayer
{
    _Bool _isStoppedForThermalShutdown;	// 8 = 0x8
}

- (void)_thermalShutdownEnabledDidChangeNotification:(id)arg1;	// IMP=0x0000000100091008
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000100090ffc
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000100090f44
- (void)play;	// IMP=0x0000000100090f00
- (void)dealloc;	// IMP=0x0000000100090e88
- (id)init;	// IMP=0x0000000100090c28

@end

