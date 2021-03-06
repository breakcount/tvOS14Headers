//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PHLivePhotoViewDelegate-Protocol.h"

@class ISAnimatedImageView, ISWrappedAVPlayer, NSString, PHLivePhotoView, PXRoundProgressView, PXVideoPlayerView, UIActivityIndicatorView, UIGestureRecognizer, UIImageView;

@interface TVPPhotoView : UIView <PHLivePhotoViewDelegate>
{
    _Bool _isVideoView;	// 8 = 0x8
    int _currentRequestID;	// 12 = 0xc
    double _progress;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UIImageView *_badgeImageView;	// 40 = 0x28
    PHLivePhotoView *_playerView;	// 48 = 0x30
    ISAnimatedImageView *_animatedImageView;	// 56 = 0x38
    PXVideoPlayerView *_videoPlayerView;	// 64 = 0x40
    ISWrappedAVPlayer *_videoPlayer;	// 72 = 0x48
    UIView *_overlayView;	// 80 = 0x50
    UIView *_currentView;	// 88 = 0x58
    PXRoundProgressView *_progressView;	// 96 = 0x60
    UIImageView *_errorView;	// 104 = 0x68
    long long _progressStyle;	// 112 = 0x70
    UIView *_irisGestureRecognizerView;	// 120 = 0x78
    struct CGSize _imageSize;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000100085e60
@property(nonatomic) _Bool isVideoView; // @synthesize isVideoView=_isVideoView;
@property(nonatomic) __weak UIView *irisGestureRecognizerView; // @synthesize irisGestureRecognizerView=_irisGestureRecognizerView;
@property(nonatomic) long long progressStyle; // @synthesize progressStyle=_progressStyle;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) PXRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) PXVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) ISAnimatedImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(retain, nonatomic) PHLivePhotoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) int currentRequestID; // @synthesize currentRequestID=_currentRequestID;
- (unsigned long long)_autoresizingMask;	// IMP=0x0000000100085c74
- (void)_removeLivePhotoGesture;	// IMP=0x0000000100085bdc
@property(readonly, nonatomic) UIGestureRecognizer *livePhotoGestureRecognizer;
- (void)_removeVideoOverlayViews;	// IMP=0x0000000100085b48
- (void)_removeAllSubviews;	// IMP=0x0000000100085aac
- (void)displayError;	// IMP=0x0000000100085a78
- (void)hideProgress;	// IMP=0x00000001000858c8
- (void)_hideError;	// IMP=0x00000001000857cc
- (struct CGRect)_rectForProgressIndicator;	// IMP=0x00000001000856b0
- (void)setUpErrorView;	// IMP=0x000000010008555c
- (void)setUpProgressIndicator;	// IMP=0x0000000100085420
- (void)setUpVideoOverlayWithSpinner;	// IMP=0x000000010008530c
- (void)setUpBadgeImageViewWithImage:(id)arg1;	// IMP=0x0000000100085114
- (void)setUpVideoOverlayWithImage:(id)arg1;	// IMP=0x0000000100084e2c
- (void)layoutSubviews;	// IMP=0x00000001000848e8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100084884
- (void)didAnimateToFullScreenMode;	// IMP=0x00000001000847f0
- (void)didAnimateToCaptionMode;	// IMP=0x000000010008475c
- (void)willAnimateToFullScreenMode;	// IMP=0x0000000100084740
- (void)willAnimateToCaptionMode;	// IMP=0x0000000100084724
- (id)displayedImage;	// IMP=0x00000001000846ac
- (void)removeBadgeImageView;	// IMP=0x0000000100084634
- (void)playVitalityHint;	// IMP=0x0000000100084590
- (void)seekForVitalityHintIfNeeded;	// IMP=0x000000010008458c
- (void)prepareForReuse;	// IMP=0x0000000100084548
- (void)displayAutoloopVideo:(id)arg1 placeholderImage:(id)arg2;	// IMP=0x0000000100084348
- (void)displayAnimatedImage:(id)arg1;	// IMP=0x00000001000841cc
- (void)displayLivePhoto:(id)arg1;	// IMP=0x00000001000840a4
- (void)displayVideoOverlayIcon:(id)arg1 isVideoBadge:(_Bool)arg2;	// IMP=0x0000000100084020
- (void)displayVideoLoadingSpinnerOverlay;	// IMP=0x0000000100083fdc
- (void)displayImage:(id)arg1;	// IMP=0x0000000100083eb4
- (void)displaySpinner;	// IMP=0x0000000100083dc4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100083db0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100083d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

