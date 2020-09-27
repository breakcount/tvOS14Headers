/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol TVPMainVideoViewControllerDelegate, TVPAVFPlayback;
@class NSObject, AVPlayerViewController, _UIFloatingContentView, TVPVideoView, UIView, TVVideoBorderView;

@interface TVPMainVideoViewController : UIViewController {

	BOOL _acceptsFocus;
	BOOL _videoViewHidden;
	id<TVPMainVideoViewControllerDelegate> _delegate;
	NSObject*<TVPAVFPlayback> _player;
	AVPlayerViewController* _avPlayerViewController;
	double _videoViewAlpha;
	_UIFloatingContentView* _floatingContentView;
	TVPVideoView* _videoView;
	UIView* _playbackView;
	TVVideoBorderView* _borderView;

}

@property (nonatomic,retain) _UIFloatingContentView * floatingContentView;                        //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,retain) TVPVideoView * videoView;                                            //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) UIView * playbackView;                                               //@synthesize playbackView=_playbackView - In the implementation block
@property (nonatomic,retain) TVVideoBorderView * borderView;                                      //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) NSObject*<TVPAVFPlayback> player;                                    //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<TVPMainVideoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL acceptsFocus;                                                   //@synthesize acceptsFocus=_acceptsFocus - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;                     //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (assign,getter=isVideoViewHidden,nonatomic) BOOL videoViewHidden;                       //@synthesize videoViewHidden=_videoViewHidden - In the implementation block
@property (assign,nonatomic) double videoViewAlpha;                                               //@synthesize videoViewAlpha=_videoViewAlpha - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<TVPMainVideoViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVPMainVideoViewControllerDelegate>)arg1 ;
-(NSObject*<TVPAVFPlayback>)player;
-(void)setPlayer:(NSObject*<TVPAVFPlayback>)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(TVPVideoView *)videoView;
-(void)setAcceptsFocus:(BOOL)arg1 ;
-(BOOL)acceptsFocus;
-(void)setVideoView:(TVPVideoView *)arg1 ;
-(AVPlayerViewController *)avPlayerViewController;
-(TVVideoBorderView *)borderView;
-(void)setBorderView:(TVVideoBorderView *)arg1 ;
-(_UIFloatingContentView *)floatingContentView;
-(void)setFloatingContentView:(_UIFloatingContentView *)arg1 ;
-(void)_didSelect;
-(void)preserveVideoViewForReuse;
-(void)_addPlaybackView:(id)arg1 ;
-(void)setPlaybackView:(UIView *)arg1 ;
-(void)_handleSelectButton:(id)arg1 ;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(BOOL)isVideoViewHidden;
-(void)setVideoViewHidden:(BOOL)arg1 ;
-(double)videoViewAlpha;
-(void)setVideoViewAlpha:(double)arg1 ;
-(UIView *)playbackView;
@end

