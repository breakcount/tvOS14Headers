//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVSettingsSplitViewController.h"

@class MTPlaylist, MTTVStationSettingsListViewController, UINavigationController;

@interface MTTVStationSettingsViewController : MTTVSettingsSplitViewController
{
    MTPlaylist *_station;	// 8 = 0x8
    MTTVStationSettingsListViewController *_stationSettingsViewController;	// 16 = 0x10
    UINavigationController *_settingsNavigationController;	// 24 = 0x18
}

+ (double)rightViewControllerTopMargin;	// IMP=0x00000001000776e0
- (void).cxx_destruct;	// IMP=0x000000010007795c
@property(retain, nonatomic) UINavigationController *settingsNavigationController; // @synthesize settingsNavigationController=_settingsNavigationController;
@property(retain, nonatomic) MTTVStationSettingsListViewController *stationSettingsViewController; // @synthesize stationSettingsViewController=_stationSettingsViewController;
@property(retain, nonatomic) MTPlaylist *station; // @synthesize station=_station;
- (void)setupChildViewControllers;	// IMP=0x00000001000776ec
- (void)showAddPodcastsUI;	// IMP=0x0000000100077630
- (id)initWithStation:(id)arg1;	// IMP=0x0000000100077530

@end
