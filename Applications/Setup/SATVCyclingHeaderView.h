//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SATVPulsingAnimationDelegate-Protocol.h"
#import "TVSKCyclingView-Protocol.h"

@class NSArray, NSObject, NSString, SATVHeaderView, SATVPulsingHeaderView;
@protocol OS_dispatch_source;

@interface SATVCyclingHeaderView : UIView <SATVPulsingAnimationDelegate, TVSKCyclingView>
{
    NSObject<OS_dispatch_source> *_autoAdvanceTimer;	// 8 = 0x8
    double _autoAdvanceInterval;	// 16 = 0x10
    _Bool _manualMode;	// 24 = 0x18
    NSArray *_titleStrings;	// 32 = 0x20
    NSArray *_subtitleStrings;	// 40 = 0x28
    NSArray *_languageCodes;	// 48 = 0x30
    SATVPulsingHeaderView *_firstPulsingHeaderView;	// 56 = 0x38
    SATVPulsingHeaderView *_secondPulsingHeaderView;	// 64 = 0x40
    SATVHeaderView *_manualHeaderView;	// 72 = 0x48
    unsigned long long _currentStringIndex;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100018fa8
@property(nonatomic) _Bool manualMode; // @synthesize manualMode=_manualMode;
@property(nonatomic) unsigned long long currentStringIndex; // @synthesize currentStringIndex=_currentStringIndex;
@property(retain, nonatomic) SATVHeaderView *manualHeaderView; // @synthesize manualHeaderView=_manualHeaderView;
@property(retain, nonatomic) SATVPulsingHeaderView *secondPulsingHeaderView; // @synthesize secondPulsingHeaderView=_secondPulsingHeaderView;
@property(retain, nonatomic) SATVPulsingHeaderView *firstPulsingHeaderView; // @synthesize firstPulsingHeaderView=_firstPulsingHeaderView;
@property(retain, nonatomic) NSArray *languageCodes; // @synthesize languageCodes=_languageCodes;
@property(retain, nonatomic) NSArray *subtitleStrings; // @synthesize subtitleStrings=_subtitleStrings;
@property(retain, nonatomic) NSArray *titleStrings; // @synthesize titleStrings=_titleStrings;
- (void)didFinishAnimationPulsingAnimation:(id)arg1;	// IMP=0x0000000100018b7c
- (void)setManualTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00000001000189a0
- (unsigned long long)_nextUniqueStringIndex;	// IMP=0x0000000100018750
- (_Bool)_supportsCycling;	// IMP=0x0000000100018700
- (void)_stopAutoAdvanceTimer;	// IMP=0x00000001000186bc
- (void)_startAutoAdvanceTimer;	// IMP=0x0000000100018540
- (void)_cycleAtBeginTime:(double)arg1;	// IMP=0x00000001000183a8
- (void)cycleAtBeginTime:(double)arg1;	// IMP=0x0000000100018364
- (void)cycleWithInterval:(double)arg1;	// IMP=0x000000010001834c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000182e4
- (void)layoutSubviews;	// IMP=0x000000010001823c
- (void)dealloc;	// IMP=0x000000010001819c
- (id)initWithTitleStrings:(id)arg1 subtitleStrings:(id)arg2 languageCodes:(id)arg3;	// IMP=0x0000000100017c1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

