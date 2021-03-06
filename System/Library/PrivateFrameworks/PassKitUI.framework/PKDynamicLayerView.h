/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPass, PKDynamicContentView, UIImageView, PKDynamicLayerConfiguration, PKDynamicLayerTransactionEffectConfiguration, UIImage, NSData, CAEmitterLayer, CALayer;

@interface PKDynamicLayerView : UIView {

	PKPass* _pass;
	PKDynamicContentView* _backgroundParallaxView;
	PKDynamicContentView* _neutralView;
	PKDynamicContentView* _foregroundParallaxView;
	PKDynamicContentView* _staticOverlayView;
	UIImageView* _staticFallbackView;
	PKDynamicLayerConfiguration* _dynamicLayerConfiguration;
	PKDynamicLayerTransactionEffectConfiguration* _transactionEffectConfiguration;
	UIImage* _transactionEffectEmitterImage;
	NSData* _transactionEffectShapeData;
	CAEmitterLayer* _transactionEffectLayer;
	CALayer* _dimmingLayer;
	BOOL _invalidated;
	BOOL _paused;
	BOOL _loaded;
	BOOL _automaticallyLoadContent;
	BOOL _reduceMotionEnabled;

}

@property (assign,nonatomic) BOOL automaticallyLoadContent;                                      //@synthesize automaticallyLoadContent=_automaticallyLoadContent - In the implementation block
@property (assign,getter=isReduceMotionEnabled,nonatomic) BOOL reduceMotionEnabled;              //@synthesize reduceMotionEnabled=_reduceMotionEnabled - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPaused;
-(BOOL)isLoaded;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setReduceMotionEnabled:(BOOL)arg1 ;
-(void)_configureViews;
-(void)_updateVisibility;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
-(void)runTransactionEffect;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 automaticallyLoadContent:(BOOL)arg3 ;
-(void)loadContent;
-(BOOL)isReduceMotionEnabled;
-(void)_updateDynamicElements;
-(void)_configureDynamicViewsWithImageSet:(id)arg1 ;
-(void)_removeParallaxMotionEffect;
-(void)_addParallaxMotionEffect;
-(id)_dimmingLayerAnimationWithDuration:(double)arg1 ;
-(void)setAutomaticallyLoadContent:(BOOL)arg1 ;
-(BOOL)automaticallyLoadContent;
@end

