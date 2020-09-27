/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFCore/AVPictureInPictureContentSource.h>
#import <AVFCore/AVKeyPathDependencyHost.h>
#import <AVFCore/AVWeakObservable.h>

@class UIWindow, AVPlayerLayerInternal, NSString, AVPlayer, NSDictionary;

@interface AVPlayerLayer : CALayer <AVPictureInPictureContentSource, AVKeyPathDependencyHost, AVWeakObservable> {

	AVPlayerLayerInternal* _playerLayer;

}

@property (nonatomic,readonly) CGRect avkit_videoRectInWindow; 
@property (nonatomic,readonly) BOOL avkit_isVisible; 
@property (nonatomic,readonly) UIWindow * avkit_window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AVPlayer * player; 
@property (copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
+(id)keyPathsForValuesAffectingVideoRect;
+(id)playerLayerWithPlayer:(id)arg1 ;
+(id)makeClosedCaptionLayer;
+(void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2 ;
-(id)avkit_makePlayerControllerIfNeeded:(id)arg1 ;
-(id)avkit_pictureInPictureViewController;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1 ;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1 ;
-(void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2 ;
-(void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2 ;
-(void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg1 ;
-(CGRect)avkit_videoRectInWindow;
-(BOOL)avkit_isVisible;
-(UIWindow *)avkit_window;
-(id)avkit_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setSublayers:(id)arg1 ;
-(void)removeFromSuperlayer;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addSublayer:(id)arg1 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(void)removeAllAnimations;
-(void)layoutSublayers;
-(void)setToneMapToStandardDynamicRange:(BOOL)arg1 ;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(BOOL)isForScrubbingOnly;
-(void)setForScrubbingOnly:(BOOL)arg1 ;
-(id)_videoLayer;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg1 ;
-(BOOL)_preventsChangesToSublayerHierarchy;
-(void)setVideoGravity:(NSString *)arg1 ;
-(id)videoPerformanceMetrics;
-(id)_maskLayer;
-(NSString *)videoGravity;
-(CGRect)videoRect;
-(void)setLegibleDisplayEnabled:(BOOL)arg1 ;
-(void)setLanczosFilterDownscaleFactor:(long long)arg1 ;
-(void)setLanczosFilterDownscalingEnabled:(BOOL)arg1 ;
-(BOOL)isReadyForDisplay;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(void)startRedirectingVideoToLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)setPlaceholderContentLayerDuringPIPMode:(id)arg1 ;
-(void)stopRedirectingVideoToLayer:(id)arg1 ;
-(BOOL)isPIPModeEnabled;
-(void)_forceLayout;
-(CGSize)_displaySize;
-(BOOL)isLegibleDisplayEnabled;
-(id)placeholderContentLayerDuringPIPMode;
-(NSEdgeInsets)legibleContentInsets;
-(void)hasEnqueuedVideoFrameChanged:(id)arg1 ;
-(void)_windowSceneDidEnterBackground:(id)arg1 ;
-(void)_getMaskLayer:(id*)arg1 videoLayer:(id*)arg2 subtitleLayer:(id*)arg3 closedCaptionLayer:(id*)arg4 ;
-(CGSize)_playerCurrentItemPresentationSize;
-(BOOL)isLanczosFilterDownscalingEnabled;
-(void)_notifyPlayerOfDisplaySize;
-(id)_closedCaptionLayer;
-(void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(CGSize)arg5 forKey:(id)arg6 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForVideoLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4 ;
-(void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3 ;
-(void)_stopObservingPlayer:(id)arg1 ;
-(void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(BOOL)arg1 ;
-(BOOL)_willManageSublayersAsSwappedLayers;
-(id)_subtitleLayer;
-(void)_updateReadyForDisplayForPlayerCurrentItem;
-(void)_setPlayer:(id)arg1 forPIP:(BOOL)arg2 ;
-(id)_associatedRemoteModeLayer;
-(long long)_activeMode;
-(void)_configurePlayerWhenLeavingPIP;
-(void)_startObservingPlayer:(id)arg1 ;
-(void)_configurePlayerWhenEnteringPIP;
-(void)_updateIsPartOfForegroundScene;
-(id)_sublayersForPIP;
-(void)_setSublayersForPIP:(id)arg1 ;
-(void)_setSublayersPreventChangesToSublayerHierarchy:(BOOL)arg1 ;
-(void)_setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
-(void)_setWillManageSublayersAsSwappedLayers:(BOOL)arg1 ;
-(void)_mergeClientLayersIntoMaskLayer:(id)arg1 ;
-(void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2 ;
-(void)_enterPIPModeRedirectingVideoToLayer:(id)arg1 ;
-(void)_leavePIPModeForLayer:(id)arg1 ;
-(void)_disassociateWithLayerForMode:(long long)arg1 ;
-(void)_associateWithLayer:(id)arg1 forMode:(long long)arg2 ;
-(BOOL)_currentWindowSceneIsForeground;
-(void)_setIsPartOfForegroundScene:(BOOL)arg1 ;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(long long)lanczosFilterDownscaleFactor;
-(CGRect)_videoRectForBounds:(CGRect)arg1 ;
-(void)setLegibleContentInsets:(NSEdgeInsets)arg1 ;
-(void)enterPIPModeRedirectingVideoToLayer:(id)arg1 ;
-(void)leavePIPMode;
-(void)setPIPModeEnabled:(BOOL)arg1 ;
-(BOOL)_isPartOfForegroundScene;
@end

