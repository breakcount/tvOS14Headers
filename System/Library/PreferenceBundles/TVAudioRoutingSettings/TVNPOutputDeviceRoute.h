//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVNPRoute.h"

#import "MPVolumeControllerDelegate-Protocol.h"

@class MPAVOutputDeviceRoute, MPVolumeController, NSString;

@interface TVNPOutputDeviceRoute : TVNPRoute <MPVolumeControllerDelegate>
{
    MPAVOutputDeviceRoute *_outputDeviceRoute;	// 80 = 0x50
    MPVolumeController *_volumeController;	// 88 = 0x58
}

+ (id)_nameForAVRoute:(id)arg1 destination:(id)arg2;	// IMP=0x000000000000cdc0
- (void).cxx_destruct;	// IMP=0x000000000000d204
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute; // @synthesize outputDeviceRoute=_outputDeviceRoute;
- (void)_updateVolume;	// IMP=0x000000000000cfe8
- (id)_imageForAVRoute:(id)arg1 destination:(id)arg2;	// IMP=0x000000000000cf14
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x000000000000cd58
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x000000000000ccf0
- (void)setVolumeLevel:(id)arg1;	// IMP=0x000000000000cc58
- (id)deviceImage;	// IMP=0x000000000000cbe0
- (void)updateWithOutputDevice:(id)arg1 selectionState:(unsigned long long)arg2 destination:(id)arg3;	// IMP=0x000000000000c680
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000000c5b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

