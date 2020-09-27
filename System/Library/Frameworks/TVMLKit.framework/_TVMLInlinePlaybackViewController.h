/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPlayerViewController.h>
#import <TVMLKit/TVPlayingUI.h>

@class UIViewController, _TVMLPlayer, NSString;

@interface _TVMLInlinePlaybackViewController : AVPlayerViewController <TVPlayingUI> {

	UIViewController* overlayViewController;
	long long resumeMenuBehavior;
	_TVMLPlayer* _tvmlPlayer;

}

@property (nonatomic,readonly) _TVMLPlayer * tvmlPlayer;              //@synthesize tvmlPlayer=_tvmlPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithPlayer:(id)arg1 ;
-(id)overlayViewController;
-(long long)resumeMenuBehavior;
-(void)setResumeMenuBehavior:(long long)arg1 ;
-(void)setOverlayViewController:(id)arg1 ;
-(BOOL)showsVideoControls;
-(void)setShowsVideoControls:(BOOL)arg1 ;
-(_TVMLPlayer *)tvmlPlayer;
-(void)_updateAVPlayer;
@end

