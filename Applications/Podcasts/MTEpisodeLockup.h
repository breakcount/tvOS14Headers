//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MTReachabilityObserver-Protocol.h"

@class IMActionSheetAction, MTColorTheme, MTEpisode, MTEpisodeArtworkView, MTEpisodeStateView, MTNowPlayingIndicatorView, MTTVEpisodeActionController, MTTouchInsetsButton, NSMutableDictionary, NSOperation, NSString, UIButton, UIImage, UIImageView, UILabel, UITextView;
@protocol MTEpisodeLockupDelegate;

@interface MTEpisodeLockup : UIView <MTReachabilityObserver>
{
    _Bool _initialized;	// 8 = 0x8
    NSMutableDictionary *_sizeCache;	// 16 = 0x10
    struct CGSize _descriptionSize;	// 24 = 0x18
    _Bool _editing;	// 40 = 0x28
    _Bool _expanded;	// 41 = 0x29
    _Bool _currentPlayerItem;	// 42 = 0x2a
    _Bool _shouldShowNowPlaying;	// 43 = 0x2b
    _Bool _showsPubDate;	// 44 = 0x2c
    _Bool _showsPlayState;	// 45 = 0x2d
    _Bool _showsDescriptionButton;	// 46 = 0x2e
    _Bool _showsFooterTextView;	// 47 = 0x2f
    _Bool _showsExplicitIcon;	// 48 = 0x30
    _Bool _showsStreamingIcon;	// 49 = 0x31
    _Bool _showsDocumentIcon;	// 50 = 0x32
    _Bool _showsErrorIcon;	// 51 = 0x33
    _Bool _showsAirplaneModeIcon;	// 52 = 0x34
    _Bool _showsArtwork;	// 53 = 0x35
    _Bool _showsMoreButton;	// 54 = 0x36
    MTEpisode *_episode;	// 56 = 0x38
    id <MTEpisodeLockupDelegate> _delegate;	// 64 = 0x40
    MTTVEpisodeActionController *_actionController;	// 72 = 0x48
    MTColorTheme *_colorTheme;	// 80 = 0x50
    unsigned long long _style;	// 88 = 0x58
    MTTouchInsetsButton *_moreButton;	// 96 = 0x60
    MTTouchInsetsButton *_descriptionButton;	// 104 = 0x68
    UIImage *_titleImage;	// 112 = 0x70
    NSOperation *_imageLoadingOperation;	// 120 = 0x78
    IMActionSheetAction *_moreAction;	// 128 = 0x80
    MTNowPlayingIndicatorView *_barsView;	// 136 = 0x88
    UITextView *_titleTextView;	// 144 = 0x90
    UILabel *_metadataLabel;	// 152 = 0x98
    UITextView *_descriptionTextView;	// 160 = 0xa0
    UITextView *_footerTextView;	// 168 = 0xa8
    MTEpisodeArtworkView *_artworkView;	// 176 = 0xb0
    UIImageView *_playStatusView;	// 184 = 0xb8
    UIImageView *_explicitIconView;	// 192 = 0xc0
    MTEpisodeStateView *_iconView;	// 200 = 0xc8
    MTEpisodeStateView *_buttonView;	// 208 = 0xd0
    unsigned long long _disabledReason;	// 216 = 0xd8
    struct UIEdgeInsets __layoutMargins;	// 224 = 0xe0
}

+ (id)metadataFooterFont;	// IMP=0x00000001000ff9a8
+ (id)descriptionFont;	// IMP=0x00000001000ff944
+ (id)metadataHeaderFont;	// IMP=0x00000001000ff8dc
+ (id)titleFont;	// IMP=0x00000001000ff878
+ (id)footerTextStyle;	// IMP=0x00000001000ff868
+ (id)descriptionTextStyle;	// IMP=0x00000001000ff858
+ (id)titleTextStyle;	// IMP=0x00000001000ff848
+ (double)descriptionMaxHeightForCurrentOrientation;	// IMP=0x00000001000ff7d0
+ (double)leadingMarginForViewWidth:(double)arg1;	// IMP=0x00000001000ff798
+ (_Bool)useSelfSizingCells;	// IMP=0x00000001000ff790
+ (_Bool)useLayoutForSkinnyPhones;	// IMP=0x00000001000ff728
+ (id)dependentPropertyKeys;	// IMP=0x00000001000ff598
+ (id)mockEpisode;	// IMP=0x00000001000ff224
+ (_Bool)showsArtworkForStyle:(unsigned long long)arg1;	// IMP=0x00000001000ff214
+ (id)defaultArtworkWithSize:(struct CGSize)arg1;	// IMP=0x00000001000ff17c
+ (id)defaultArtworkForStyle:(unsigned long long)arg1;	// IMP=0x00000001000ff148
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x00000001000fef00
+ (double)artworkHeightForStyle:(unsigned long long)arg1 sizeType:(unsigned long long)arg2;	// IMP=0x00000001000fec54
+ (struct CGRect)frameForContentViewSize:(struct CGSize)arg1 style:(unsigned long long)arg2;	// IMP=0x00000001000febd4
+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x00000001000febc4
+ (double)maximumContentWidthForStyle:(unsigned long long)arg1 showsPlayState:(_Bool)arg2;	// IMP=0x00000001000feb18
+ (unsigned long long)descriptionNumberOfLinesForStyle:(unsigned long long)arg1 isTitleMultipleLines:(_Bool)arg2;	// IMP=0x00000001000fea98
+ (unsigned long long)titleNumberOfLinesForStyle:(unsigned long long)arg1;	// IMP=0x00000001000fea34
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x00000001000fe97c
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x00000001000fe934
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x00000001000fe900
- (void).cxx_destruct;	// IMP=0x0000000100108558
@property(nonatomic) _Bool showsMoreButton; // @synthesize showsMoreButton=_showsMoreButton;
@property(nonatomic) _Bool showsArtwork; // @synthesize showsArtwork=_showsArtwork;
@property(nonatomic) unsigned long long disabledReason; // @synthesize disabledReason=_disabledReason;
@property(retain, nonatomic) MTEpisodeStateView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) MTEpisodeStateView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *explicitIconView; // @synthesize explicitIconView=_explicitIconView;
@property(retain, nonatomic) UIImageView *playStatusView; // @synthesize playStatusView=_playStatusView;
@property(retain, nonatomic) MTEpisodeArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) IMActionSheetAction *moreAction; // @synthesize moreAction=_moreAction;
@property(nonatomic) _Bool showsAirplaneModeIcon; // @synthesize showsAirplaneModeIcon=_showsAirplaneModeIcon;
@property(nonatomic) _Bool showsErrorIcon; // @synthesize showsErrorIcon=_showsErrorIcon;
@property(nonatomic) _Bool showsDocumentIcon; // @synthesize showsDocumentIcon=_showsDocumentIcon;
@property(nonatomic) _Bool showsStreamingIcon; // @synthesize showsStreamingIcon=_showsStreamingIcon;
@property(nonatomic) _Bool showsExplicitIcon; // @synthesize showsExplicitIcon=_showsExplicitIcon;
@property(nonatomic) _Bool showsFooterTextView; // @synthesize showsFooterTextView=_showsFooterTextView;
@property(nonatomic) _Bool showsDescriptionButton; // @synthesize showsDescriptionButton=_showsDescriptionButton;
@property(retain, nonatomic) NSOperation *imageLoadingOperation; // @synthesize imageLoadingOperation=_imageLoadingOperation;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) MTTouchInsetsButton *descriptionButton; // @synthesize descriptionButton=_descriptionButton;
@property(retain, nonatomic) MTTouchInsetsButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) struct UIEdgeInsets _layoutMargins; // @synthesize _layoutMargins=__layoutMargins;
@property(nonatomic) _Bool showsPlayState; // @synthesize showsPlayState=_showsPlayState;
@property(nonatomic) _Bool showsPubDate; // @synthesize showsPubDate=_showsPubDate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(nonatomic) _Bool shouldShowNowPlaying; // @synthesize shouldShowNowPlaying=_shouldShowNowPlaying;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) MTTVEpisodeActionController *actionController; // @synthesize actionController=_actionController;
@property(nonatomic) __weak id <MTEpisodeLockupDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTEpisode *episode; // @synthesize episode=_episode;
- (void)_setNumberOfLinesForDescription:(unsigned long long)arg1;	// IMP=0x0000000100108094
- (id)_currentDescriptionColor;	// IMP=0x0000000100107fc4
- (id)_currentTitleColor;	// IMP=0x0000000100107ef4
- (id)_currentDescriptionFont;	// IMP=0x0000000100107e5c
- (id)_currentTitleFont;	// IMP=0x0000000100107dc4
- (_Bool)_isRTL;	// IMP=0x0000000100107d7c
- (void)updateIconView;	// IMP=0x0000000100107b9c
- (void)updateAssetStatusIcons;	// IMP=0x0000000100107a88
- (void)updateStateForBarsView:(id)arg1;	// IMP=0x00000001001079e4
- (void)updatePlayStatusIcons;	// IMP=0x0000000100107890
- (_Bool)updateIsCurrentPlayerItemState;	// IMP=0x00000001001077a4
- (void)updateIcons;	// IMP=0x00000001001076a8
- (void)playbackStateDidChange;	// IMP=0x0000000100107664
- (void)stopObservingPlaybackState;	// IMP=0x0000000100107604
- (void)startObservingPlaybackState;	// IMP=0x000000010010759c
- (void)updateTitleIncludingIcons;	// IMP=0x00000001001071b4
- (_Bool)updateTitleFontIfNeeded;	// IMP=0x0000000100107048
- (void)updateFooterTextViewVisbility;	// IMP=0x0000000100106f90
- (void)updateMoreButtonVisibility;	// IMP=0x0000000100106dec
- (void)beginLoadingArtwork;	// IMP=0x0000000100106954
- (_Bool)updateDisabledReason;	// IMP=0x0000000100106640
- (void)updateDescriptionText;	// IMP=0x0000000100106438
- (void)updateFooterText;	// IMP=0x0000000100106228
- (void)updateMetadataText;	// IMP=0x0000000100106140
- (void)update;	// IMP=0x000000010010605c
- (struct CGRect)footerFrameForDescriptionButtonFrame:(struct CGRect)arg1 descriptionFrame:(struct CGRect)arg2;	// IMP=0x0000000100105e58
- (struct CGRect)descriptionButtonFrameForDescriptionFrame:(struct CGRect)arg1;	// IMP=0x0000000100105b9c
- (struct CGRect)buttonsFrameForActionButtonFrame:(struct CGRect)arg1 downloadButtonFrame:(struct CGRect)arg2;	// IMP=0x0000000100105af0
- (struct CGRect)actionButtonFrameForViewWidth:(double)arg1 titleOriginY:(double)arg2;	// IMP=0x00000001001059d0
- (struct CGRect)downloadButtonFrameForActionButtonFrame:(struct CGRect)arg1 titleOriginY:(double)arg2;	// IMP=0x00000001001059bc
- (struct CGRect)playStatusViewFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 artworkFrame:(struct CGRect)arg3;	// IMP=0x00000001001057e8
- (struct CGRect)iconsViewFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 metadataFrame:(struct CGRect *)arg3 style:(unsigned long long)arg4;	// IMP=0x0000000100105454
- (struct CGRect)moreButtonFrameForDescriptionFrame:(struct CGRect)arg1;	// IMP=0x00000001001051ec
- (struct CGRect)metadataFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 style:(unsigned long long)arg3;	// IMP=0x0000000100104ec8
- (_Bool)isLabelMultipleLinesWithFrame:(struct CGRect)arg1 font:(id)arg2;	// IMP=0x0000000100104df4
- (id)descriptionExclusionPathsForOrigin:(struct CGPoint)arg1 descriptionWidth:(double)arg2 buttonsFrame:(struct CGRect)arg3 titleFrame:(struct CGRect)arg4;	// IMP=0x0000000100104cb0
- (id)titleExclusionPathsForExplicitIconFrame:(struct CGRect)arg1 viewWidth:(double)arg2;	// IMP=0x0000000100104b00
- (id)titleExclusionPathsForButtonViewFrame:(struct CGRect)arg1;	// IMP=0x00000001001049a8
- (double)descriptionWidthForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 style:(unsigned long long)arg3;	// IMP=0x00000001001048c8
- (struct CGSize)exactDescriptionSizeForOrigin:(struct CGPoint)arg1 viewWidth:(double)arg2 titleFrame:(struct CGRect)arg3 actionButtonFrame:(struct CGRect)arg4 downloadButtonFrame:(struct CGRect)arg5 style:(unsigned long long)arg6;	// IMP=0x0000000100104558
- (struct CGPoint)descriptionOriginForViewWidth:(double)arg1 artworkFrame:(struct CGRect)arg2 buttonViewFrame:(struct CGRect)arg3 titleFrame:(struct CGRect)arg4 metadataFrame:(struct CGRect)arg5 iconViewFrame:(struct CGRect)arg6 style:(unsigned long long)arg7;	// IMP=0x00000001001040b0
- (double)titleOriginYForArtworkFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100103f84
- (struct CGSize)titleSizeForViewWidth:(double)arg1 titleOrigin:(struct CGPoint)arg2 artworkFrame:(struct CGRect)arg3 buttonViewFrame:(struct CGRect)arg4 style:(unsigned long long)arg5;	// IMP=0x0000000100103cd8
- (double)titleOriginXForViewWidth:(double)arg1 artworkFrame:(struct CGRect)arg2 buttonFrame:(struct CGRect)arg3 style:(unsigned long long)arg4;	// IMP=0x0000000100103bcc
- (struct CGRect)artworkFrameForStyle:(unsigned long long)arg1 forViewWidth:(double)arg2;	// IMP=0x0000000100103b08
- (double)heightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010010348c
- (struct UIEdgeInsets)_layoutMarginsForViewWidth:(double)arg1;	// IMP=0x000000010010332c
- (void)layoutMarginsDidChange;	// IMP=0x0000000100103264
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000001001031b8
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010010310c
- (void)fixEmptyTextContainers;	// IMP=0x0000000100102ed8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100102d10
- (struct CGRect)explicitIconFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2;	// IMP=0x00000001001029ec
- (void)layoutSubviews;	// IMP=0x00000001001020a0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100101f38
- (void)dismissActionSheetsAndPopovers;	// IMP=0x0000000100101e60
- (void)updateActionSheetsAndPopovers;	// IMP=0x0000000100101d88
- (void)invalidateLayoutMargins;	// IMP=0x0000000100101d68
- (void)invalidateSizeMetrics;	// IMP=0x0000000100101d1c
- (void)prepareForReuse;	// IMP=0x0000000100101b70
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x00000001001015d8
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010010155c
- (void)airplaneModeChanged:(id)arg1;	// IMP=0x00000001001014f4
- (void)descriptionButtonTapped:(id)arg1;	// IMP=0x0000000100101444
- (void)moreButtonTapped:(id)arg1;	// IMP=0x00000001001013d4
- (void)updateColorsForBarsView:(id)arg1;	// IMP=0x000000010010132c
- (void)updateColors;	// IMP=0x0000000100100f9c
@property(readonly, nonatomic) UIButton *actionButton;
- (void)configureSubviews;	// IMP=0x00000001000ffc8c
- (void)dealloc;	// IMP=0x00000001000ffbd4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000ffa0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

