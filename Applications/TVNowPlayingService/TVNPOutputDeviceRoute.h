//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
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

+ (id)_nameForAVRoute:(id)arg1 destination:(id)arg2;	// IMP=0x000000010001d080
- (void).cxx_destruct;	// IMP=0x000000010001d4c4
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute; // @synthesize outputDeviceRoute=_outputDeviceRoute;
- (void)_updateVolume;	// IMP=0x000000010001d2a8
- (id)_imageForAVRoute:(id)arg1 destination:(id)arg2;	// IMP=0x000000010001d1d4
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x000000010001d018
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x000000010001cfb0
- (void)setVolumeLevel:(id)arg1;	// IMP=0x000000010001cf18
- (id)deviceImage;	// IMP=0x000000010001cea0
- (void)updateWithOutputDevice:(id)arg1 selectionState:(unsigned long long)arg2 destination:(id)arg3;	// IMP=0x000000010001c940
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000010001c870

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
