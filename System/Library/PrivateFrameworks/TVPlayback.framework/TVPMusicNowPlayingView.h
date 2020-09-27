/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TVPMusicNowPlayingViewDelegate, TVPMusicNowPlayingImage;
@class UIFocusGuide, _TVPMusicArtworkImageView, UIView, UILabel, MPRouteLabel, UIStackView, TVPRoundButton, UILayoutGuide, TVPCollectionView, NSLayoutConstraint, NSArray, TVPFloatingButton, MPAVRoute, NSString, TVPMusicNowPlayingBackgroundContainerView, UITapGestureRecognizer, TVPMusicNowPlayingCollectionViewFlowLayout, NSIndexPath;

@interface TVPMusicNowPlayingView : UIView <UIGestureRecognizerDelegate> {

	UIFocusGuide* _collectionViewFocusGuide;
	UIFocusGuide* _controlsContainerFocusGuide;
	UIFocusGuide* _nothingPlayingFocusGuide;
	_TVPMusicArtworkImageView* _placeholderImageView;
	UIView* _containerView;
	UILabel* _nothingPlayingLabel;
	UIView* _lastFocusedView;
	BOOL _forceFocusToPlaylistView;
	MPRouteLabel* _routePickerLabel;
	UIStackView* _rightControlsView;
	TVPRoundButton* _shuffleButton;
	TVPRoundButton* _repeatButton;
	BOOL _playlistVisible;
	BOOL _showControls;
	BOOL _nothingPlaying;
	BOOL _repeatVisible;
	BOOL _shuffleVisible;
	BOOL _shuffleEnabled;
	id<TVPMusicNowPlayingViewDelegate> _nowPlayingDelegate;
	UIView* _idleContentView;
	UILayoutGuide* _artworkLayoutGuide;
	TVPCollectionView* _playlistCollectionView;
	NSLayoutConstraint* _playlistCenterXConstraint;
	NSArray* _additionalRightControlItems;
	TVPFloatingButton* _routePickerControl;
	MPAVRoute* _audioRoute;
	NSString* _headerText;
	long long _repeatMode;
	id<TVPMusicNowPlayingImage> _backgroundImage;
	TVPMusicNowPlayingBackgroundContainerView* _backgroundView;
	UIView* _coverArtPlaceholder;
	UITapGestureRecognizer* _playPauseGestureRecognizer;
	UIView* _titleContainerView;
	UILabel* _headerLabel;

}

@property (nonatomic,retain) TVPMusicNowPlayingBackgroundContainerView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * coverArtPlaceholder;                                                         //@synthesize coverArtPlaceholder=_coverArtPlaceholder - In the implementation block
@property (nonatomic,readonly) TVPMusicNowPlayingCollectionViewFlowLayout * collectionViewFlowLayout; 
@property (nonatomic,readonly) UITapGestureRecognizer * playPauseGestureRecognizer;                                //@synthesize playPauseGestureRecognizer=_playPauseGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIView * titleContainerView;                                                        //@synthesize titleContainerView=_titleContainerView - In the implementation block
@property (nonatomic,readonly) UILabel * headerLabel;                                                              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (assign,nonatomic,__weak) id<TVPMusicNowPlayingViewDelegate> nowPlayingDelegate;                         //@synthesize nowPlayingDelegate=_nowPlayingDelegate - In the implementation block
@property (nonatomic,readonly) UIView * idleContentView;                                                           //@synthesize idleContentView=_idleContentView - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UILayoutGuide * artworkLayoutGuide;                                                 //@synthesize artworkLayoutGuide=_artworkLayoutGuide - In the implementation block
@property (assign,getter=isPlaylistVisible,nonatomic) BOOL playlistVisible;                                        //@synthesize playlistVisible=_playlistVisible - In the implementation block
@property (getter=isControlFocused,nonatomic,readonly) BOOL controlFocused; 
@property (nonatomic,retain) NSIndexPath * singleCoverIndexPath; 
@property (nonatomic,readonly) TVPCollectionView * playlistCollectionView;                                         //@synthesize playlistCollectionView=_playlistCollectionView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * playlistCenterXConstraint;                                     //@synthesize playlistCenterXConstraint=_playlistCenterXConstraint - In the implementation block
@property (assign,nonatomic) BOOL showControls;                                                                    //@synthesize showControls=_showControls - In the implementation block
@property (nonatomic,copy) NSArray * additionalRightControlItems;                                                  //@synthesize additionalRightControlItems=_additionalRightControlItems - In the implementation block
@property (nonatomic,retain) TVPFloatingButton * routePickerControl;                                               //@synthesize routePickerControl=_routePickerControl - In the implementation block
@property (nonatomic,retain) MPAVRoute * audioRoute;                                                               //@synthesize audioRoute=_audioRoute - In the implementation block
@property (assign,nonatomic) BOOL nothingPlaying;                                                                  //@synthesize nothingPlaying=_nothingPlaying - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                                                  //@synthesize headerText=_headerText - In the implementation block
@property (assign,nonatomic) BOOL repeatVisible;                                                                   //@synthesize repeatVisible=_repeatVisible - In the implementation block
@property (assign,nonatomic) long long repeatMode;                                                                 //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL shuffleVisible;                                                                  //@synthesize shuffleVisible=_shuffleVisible - In the implementation block
@property (assign,getter=isShuffleEnabled,nonatomic) BOOL shuffleEnabled;                                          //@synthesize shuffleEnabled=_shuffleEnabled - In the implementation block
@property (nonatomic,retain) id<TVPMusicNowPlayingImage> backgroundImage;                                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) id<TVPMusicNowPlayingBackgroundProvider> backgroundProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVPMusicNowPlayingImage>)backgroundImage;
-(void)setBackgroundImage:(id<TVPMusicNowPlayingImage>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MPAVRoute *)audioRoute;
-(void)setAudioRoute:(MPAVRoute *)arg1 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setShuffleEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(TVPMusicNowPlayingBackgroundContainerView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(TVPMusicNowPlayingBackgroundContainerView *)backgroundView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(TVPMusicNowPlayingCollectionViewFlowLayout *)collectionViewFlowLayout;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(UILabel *)headerLabel;
-(UITapGestureRecognizer *)playPauseGestureRecognizer;
-(BOOL)isShuffleEnabled;
-(id)initWithFrame:(CGRect)arg1 layout:(long long)arg2 ;
-(id<TVPMusicNowPlayingBackgroundProvider>)backgroundProvider;
-(void)setBackgroundProvider:(id<TVPMusicNowPlayingBackgroundProvider>)arg1 ;
-(void)setSingleCoverIndexPath:(NSIndexPath *)arg1 ;
-(void)setNothingPlaying:(BOOL)arg1 ;
-(void)setRoutePickerControl:(TVPFloatingButton *)arg1 ;
-(void)setShowControls:(BOOL)arg1 ;
-(void)setNowPlayingDelegate:(id<TVPMusicNowPlayingViewDelegate>)arg1 ;
-(void)setRepeatVisible:(BOOL)arg1 ;
-(void)setShuffleVisible:(BOOL)arg1 ;
-(TVPCollectionView *)playlistCollectionView;
-(void)setFocusToDataView;
-(NSIndexPath *)singleCoverIndexPath;
-(BOOL)isPlaylistVisible;
-(void)setPlaylistVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)nothingPlaying;
-(void)setPlaylistVisible:(BOOL)arg1 wasSelected:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(UIView *)idleContentView;
-(UILayoutGuide *)artworkLayoutGuide;
-(NSLayoutConstraint *)playlistCenterXConstraint;
-(void)setPlaylistVisible:(BOOL)arg1 wasSelected:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isControlFocused;
-(void)setArtworkVisible:(BOOL)arg1 ;
-(id)_addLabel;
-(id)_constraintsForLayout;
-(void)shuffleButtonAction;
-(void)repeatButtonAction;
-(void)_updateForNothingPlayingState:(BOOL)arg1 ;
-(void)_updateControlsPreferredFocus;
-(void)_playPausePressedGestureRecognized:(id)arg1 ;
-(BOOL)_isNothingPlaying;
-(void)_updateRoutePickerLabel;
-(id<TVPMusicNowPlayingViewDelegate>)nowPlayingDelegate;
-(UIView *)coverArtPlaceholder;
-(TVPFloatingButton *)routePickerControl;
-(void)_updateControlsVisibility;
-(void)_updateRoutePickerTextColorForCurrentFocusState;
-(BOOL)showControls;
-(id)_routePickerTextColorForFocusState:(BOOL)arg1 ;
-(void)setSingleCoverIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dissolveFromPlaylistWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldShowRoutePickerControl;
-(UIView *)titleContainerView;
-(void)setPlaylistVisible:(BOOL)arg1 ;
-(BOOL)isArtworkVisible;
-(BOOL)isRepeatVisible;
-(BOOL)isShuffleVisible;
-(void)setAdditionalRightControlItems:(NSArray *)arg1 ;
-(NSArray *)additionalRightControlItems;
-(BOOL)repeatVisible;
-(BOOL)shuffleVisible;
-(void)setCoverArtPlaceholder:(UIView *)arg1 ;
@end

