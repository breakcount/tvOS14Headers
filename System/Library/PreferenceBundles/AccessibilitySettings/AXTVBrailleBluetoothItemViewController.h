//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class AXTVBluetoothDevice;

@interface AXTVBrailleBluetoothItemViewController : TSKViewController
{
    AXTVBluetoothDevice *_bluetoothDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000044278
@property(retain, nonatomic) AXTVBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (void)_updateDevice:(id)arg1;	// IMP=0x0000000000044234
- (void)_findInfoForAccessory:(id)arg1;	// IMP=0x0000000000044094
- (void)_connectDevice:(id)arg1;	// IMP=0x0000000000044020
- (void)_unpairDevice:(id)arg1;	// IMP=0x0000000000043afc
- (void)_disconnectDevice:(id)arg1;	// IMP=0x0000000000043a88
- (id)loadSettingGroups;	// IMP=0x0000000000042700

@end

