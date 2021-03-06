//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SATVLegalPresentationWarrantyDelegate;

@interface SATVLegalPresentation : NSObject
{
    id <SATVLegalPresentationWarrantyDelegate> _warrantyDelegate;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000098f4
- (void).cxx_destruct;	// IMP=0x000000010000a090
@property(nonatomic) __weak id <SATVLegalPresentationWarrantyDelegate> warrantyDelegate; // @synthesize warrantyDelegate=_warrantyDelegate;
- (void)_warrantyAccepted;	// IMP=0x000000010000a018
- (void)displayWarrantyChallengeWithTerms:(id)arg1 navigationController:(id)arg2;	// IMP=0x0000000100009b6c
- (_Bool)needsWarrantyChallenge;	// IMP=0x0000000100009b10
- (void)displayLegalNoticeWithTitle:(id)arg1 terms:(id)arg2 navigationController:(id)arg3;	// IMP=0x0000000100009960

@end

