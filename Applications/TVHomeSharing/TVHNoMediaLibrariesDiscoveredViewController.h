//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHNoMediaLibrariesDiscoveredViewDelegate-Protocol.h"

@class NSString, TVHNoMediaLibrariesDiscoveredView;
@protocol TVHNoMediaLibrariesDiscoveredViewControllerDelegate;

@interface TVHNoMediaLibrariesDiscoveredViewController : UIViewController <TVHNoMediaLibrariesDiscoveredViewDelegate>
{
    id <TVHNoMediaLibrariesDiscoveredViewControllerDelegate> _delegate;	// 8 = 0x8
    TVHNoMediaLibrariesDiscoveredView *_noMediaLibrariesDiscoveredView;	// 16 = 0x10
}

+ (id)init;	// IMP=0x000000010005f318
- (void).cxx_destruct;	// IMP=0x000000010005f6ec
@property(retain, nonatomic) TVHNoMediaLibrariesDiscoveredView *noMediaLibrariesDiscoveredView; // @synthesize noMediaLibrariesDiscoveredView=_noMediaLibrariesDiscoveredView;
@property(nonatomic) __weak id <TVHNoMediaLibrariesDiscoveredViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)noMediaLibrariesFoundViewDidSelectRetry:(id)arg1;	// IMP=0x000000010005f5f0
- (void)loadView;	// IMP=0x000000010005f5a4
- (id)initWithAccountName:(id)arg1;	// IMP=0x000000010005f4ec
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010005f464
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010005f3dc
- (id)init;	// IMP=0x000000010005f354

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
