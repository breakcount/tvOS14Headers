/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <TVPlayback/TVPPlaybackViewController.h>
#import <libobjc.A.dylib/TVPPlaybackViewControllerDelegate.h>

@class TVLVideoPlayerElement, UIView, TVLRelatedContentLoadOperation, NSString;

@interface TVLPlaybackViewController : TVPPlaybackViewController <TVPPlaybackViewControllerDelegate> {

	TVLVideoPlayerElement* _videoPlayerElement;
	UIView* _javascriptOverlayContainer;
	UIView* _javascriptOverlay;
	TVLRelatedContentLoadOperation* _relatedContentLoadOperation;

}

@property (nonatomic,retain) TVLRelatedContentLoadOperation * relatedContentLoadOperation;              //@synthesize relatedContentLoadOperation=_relatedContentLoadOperation - In the implementation block
@property (nonatomic,retain) UIView * javascriptOverlay;                                                //@synthesize javascriptOverlay=_javascriptOverlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)currentFeedElement;
-(id)initWithVideoPlayerElement:(id)arg1 ;
-(void)setJavascriptOverlay:(UIView *)arg1 ;
-(void)_currentMediaItemDidChangeNotification:(id)arg1 ;
-(TVLRelatedContentLoadOperation *)relatedContentLoadOperation;
-(void)setRelatedContentLoadOperation:(TVLRelatedContentLoadOperation *)arg1 ;
-(id)_mediaItemFromFeedElement:(id)arg1 ;
-(void)playbackViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(UIView *)javascriptOverlay;
@end
