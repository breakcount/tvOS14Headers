/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVInfoPanelContentViewController.h>
#import <AVKit/AVInfoPanelMediaOptionSelectionDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol AVInfoPanelSubtitlesDelegate;
@class AVInfoPanelSubtitleCollectionViewController, NSArray, NSLayoutConstraint, NSString;

@interface AVInfoPanelSubtitlesViewController : AVInfoPanelContentViewController <AVInfoPanelMediaOptionSelectionDelegate, UICollectionViewDelegateFlowLayout> {

	AVInfoPanelSubtitleCollectionViewController* _subtitleCollectionViewController;
	NSArray* _subtitleOptions;
	NSLayoutConstraint* _subtitleCollectionViewWidthConstraint;
	id<AVInfoPanelSubtitlesDelegate> _delegate;
	unsigned long long _selectedSubtitleOptionIndex;

}

@property (assign,nonatomic,__weak) id<AVInfoPanelSubtitlesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSubtitleOptionIndex;                //@synthesize selectedSubtitleOptionIndex=_selectedSubtitleOptionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(id<AVInfoPanelSubtitlesDelegate>)delegate;
-(void)setDelegate:(id<AVInfoPanelSubtitlesDelegate>)arg1 ;
-(BOOL)hasContent;
-(void)loadView;
-(void)mediaOptionCollectionViewController:(id)arg1 didSelectMediaOption:(id)arg2 ;
-(void)setSelectedSubtitleOptionIndex:(unsigned long long)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 externalSubtitleOptions:(id)arg2 ;
-(id)_subtitleFlowLayout;
-(void)_createOrUpdateSubtitleCollectionViewWidthConstraint;
-(unsigned long long)selectedSubtitleOptionIndex;
@end

