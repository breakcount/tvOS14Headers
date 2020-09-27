/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue, AVRoutePickerViewDelegate;
@class NSObject, UIColor, UIButton, UIViewPropertyAnimator, AVObservationController, AVOutputContext, AVMicaPackage, NSString;

@interface AVRoutePickerView : UIView {

	NSObject*<OS_dispatch_queue> _getAirPlayStatusQueue;
	UIColor* _activeTintColor;
	UIButton* _routePickerButton;
	UIButton* _customButton;
	CGSize _oldSize;
	UIViewPropertyAnimator* _buttonHighlightAnimator;
	AVObservationController* _observationController;
	AVOutputContext* _outputContext;
	BOOL _airPlayActive;
	BOOL _prioritizesVideoDevices;
	AVMicaPackage* _routePickerButtonMicaPackage;
	long long _routePickerButtonStyle;
	id<AVRoutePickerViewDelegate> _delegate;
	NSString* _overrideRoutingContextUID;

}

@property (nonatomic,copy) NSString * overrideRoutingContextUID;                         //@synthesize overrideRoutingContextUID=_overrideRoutingContextUID - In the implementation block
@property (assign,nonatomic,__weak) id<AVRoutePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * activeTintColor; 
@property (assign,nonatomic) long long routePickerButtonStyle; 
@property (assign,nonatomic) BOOL prioritizesVideoDevices; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<AVRoutePickerViewDelegate>)delegate;
-(void)setDelegate:(id<AVRoutePickerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setAirPlayActive:(BOOL)arg1 ;
-(BOOL)isAirPlayActive;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_registerNotifications;
-(UIColor *)activeTintColor;
-(void)setActiveTintColor:(UIColor *)arg1 ;
-(id)customButton;
-(void)setCustomButton:(id)arg1 ;
-(void)updateButtonAppearance;
-(BOOL)prioritizesVideoDevices;
-(void)setPrioritizesVideoDevices:(BOOL)arg1 ;
-(long long)routePickerButtonStyle;
-(void)setRoutePickerButtonStyle:(long long)arg1 ;
-(void)_createOrUpdateRoutePickerButton;
-(void)_routePickerButtonTapped:(id)arg1 ;
-(void)_updateAirPlayActive;
-(void)_setupOutputContext;
-(BOOL)_isAirPlayActive;
-(id)_defaultActiveTintColor;
-(CGRect)_normalizedRectInWindow;
-(NSString *)overrideRoutingContextUID;
-(void)setOverrideRoutingContextUID:(NSString *)arg1 ;
@end

