//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVPScreenSaverPickerViewDelegate-Protocol.h"

@class NSString, TVPPhotoCollectionPreviewViewController, TVPScreenSaverPickerView;

@interface TVPScreenSaverViewController : UIViewController <TVPScreenSaverPickerViewDelegate>
{
    TVPPhotoCollectionPreviewViewController *_previewSlideshow;	// 8 = 0x8
    TVPScreenSaverPickerView *_pickerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100075330
- (void)highlightedAlbumChanged;	// IMP=0x0000000100074ef0
- (void)viewDidLoad;	// IMP=0x0000000100074ba8
- (id)preferredFocusEnvironments;	// IMP=0x0000000100074b20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

