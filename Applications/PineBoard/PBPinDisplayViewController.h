//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSystemUI/TVSUIDigitEntryViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface PBPinDisplayViewController : TVSUIDigitEntryViewController <UIViewControllerTransitioningDelegate>
{
    double _timeout;	// 8 = 0x8
    CDUnknownBlockType _dismissalCompletion;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timerSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010016cfb0
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)_cancelTimer;	// IMP=0x000000010016cdf8
- (void)_startTimerIfNecessary;	// IMP=0x000000010016cb28
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000010016ca40
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000010016c9b8
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000010016c8d4
- (void)_dismissViewControllerWithValue:(_Bool)arg1;	// IMP=0x000000010016c72c
- (void)_handleHomeButton:(id)arg1;	// IMP=0x000000010016c60c
- (void)_handleMenuButton:(id)arg1;	// IMP=0x000000010016c4ec
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010016c474
- (void)viewDidLoad;	// IMP=0x000000010016c200
- (void)dealloc;	// IMP=0x000000010016c120
- (id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2;	// IMP=0x000000010016bfd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

