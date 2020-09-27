/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UISwitchControl;
@class NSString;

@interface UISwitchVisualElement : UIView {

	BOOL _enabled;
	NSString* _title;
	id<UISwitchControl> _switchControl;
	double _enabledAlpha;

}

@property (assign,nonatomic) double enabledAlpha;                                   //@synthesize enabledAlpha=_enabledAlpha - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<UISwitchControl> switchControl;              //@synthesize switchControl=_switchControl - In the implementation block
+(CGSize)preferredContentSize;
+(BOOL)isFixedSize;
+(UIEdgeInsets)preferredAlignmentRectInsets;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tintColorDidChange;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setOnTintColor:(id)arg1 ;
-(void)setThumbTintColor:(id)arg1 ;
-(void)setOnImage:(id)arg1 ;
-(void)setOffImage:(id)arg1 ;
-(void)setSwitchControl:(id<UISwitchControl>)arg1 ;
-(void)setShowsOnOffLabel:(BOOL)arg1 ;
-(id<UISwitchControl>)switchControl;
-(void)setEnabledAlpha:(double)arg1 ;
-(double)enabledAlpha;
@end

