//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"

@class NSString, TVCRDConferenceRoomDisplayViewController;

@interface TVCRDServiceInstructionsViewController : UIViewController <PBSViewServicePresenter>
{
    TVCRDConferenceRoomDisplayViewController *_crdViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010000389c
+ (id)_exportedInterface;	// IMP=0x000000010000379c
- (void).cxx_destruct;	// IMP=0x0000000100003970
@property(retain, nonatomic) TVCRDConferenceRoomDisplayViewController *crdViewController; // @synthesize crdViewController=_crdViewController;
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000366c
- (void)viewServiceUpdatePresentationWithOptions:(id)arg1;	// IMP=0x00000001000035e4
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x00000001000032a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
