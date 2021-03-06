//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUIKeyline, SiriUIPassThroughHitTestView;
@protocol SRSirilandViewDelegate;

@interface SRSirilandView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    SiriUIPassThroughHitTestView *_clipView;	// 16 = 0x10
    UIView *_conversationView;	// 24 = 0x18
    SiriUIKeyline *_keyline;	// 32 = 0x20
    _Bool _showingDeviceLockView;	// 40 = 0x28
    _Bool _masksContent;	// 41 = 0x29
    _Bool _pageTransitionKeylineVisible;	// 42 = 0x2a
    id <SRSirilandViewDelegate> _delegate;	// 48 = 0x30
    struct UIOffset _topChevronOffset;	// 56 = 0x38
}

+ (id)sirilandView;	// IMP=0x0000000100080018
- (void).cxx_destruct;	// IMP=0x0000000100080740
@property(nonatomic, getter=isPageTransitionKeylineVisible) _Bool pageTransitionKeylineVisible; // @synthesize pageTransitionKeylineVisible=_pageTransitionKeylineVisible;
@property(nonatomic) _Bool masksContent; // @synthesize masksContent=_masksContent;
@property(nonatomic) __weak id <SRSirilandViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isShowingDeviceLockView) _Bool showingDeviceLockView; // @synthesize showingDeviceLockView=_showingDeviceLockView;
@property(retain, nonatomic) UIView *conversationView; // @synthesize conversationView=_conversationView;
@property(nonatomic) struct UIOffset topChevronOffset; // @synthesize topChevronOffset=_topChevronOffset;
- (void)statusBarFrameDidChange;	// IMP=0x00000001000805d0
- (_Bool)_keylineIsVisible;	// IMP=0x0000000100080598
- (void)layoutSubviews;	// IMP=0x0000000100080280
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008002c

@end

