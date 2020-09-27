/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIHostActivityProxy, UILabel, UIImageView, UIView, UIVisualEffectView, NSArray;

@interface UIShareGroupActivityCell : UICollectionViewCell {

	BOOL _disabled;
	BOOL _longPressable;
	_UIHostActivityProxy* _activityProxy;
	UILabel* _titleLabel;
	UIImageView* _activityImageView;
	UIView* _imageSlotView;
	UIView* _titleSlotView;
	UIView* _badgeSlotView;
	UIVisualEffectView* _vibrantLabelView;
	UILabel* _labelForPositioning;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;

}

@property (nonatomic,retain) UIVisualEffectView * vibrantLabelView;                  //@synthesize vibrantLabelView=_vibrantLabelView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * labelForPositioning;                          //@synthesize labelForPositioning=_labelForPositioning - In the implementation block
@property (nonatomic,retain) UIImageView * activityImageView;                        //@synthesize activityImageView=_activityImageView - In the implementation block
@property (nonatomic,retain) UIView * imageSlotView;                                 //@synthesize imageSlotView=_imageSlotView - In the implementation block
@property (nonatomic,retain) UIView * titleSlotView;                                 //@synthesize titleSlotView=_titleSlotView - In the implementation block
@property (nonatomic,retain) UIView * badgeSlotView;                                 //@synthesize badgeSlotView=_badgeSlotView - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                           //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                         //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) _UIHostActivityProxy * activityProxy;                   //@synthesize activityProxy=_activityProxy - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                        //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isLongPressable,nonatomic) BOOL longPressable;              //@synthesize longPressable=_longPressable - In the implementation block
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isDisabled;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupConstraints;
-(NSArray *)regularConstraints;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(void)setActivityImageView:(UIImageView *)arg1 ;
-(UIImageView *)activityImageView;
-(void)setActivityProxy:(_UIHostActivityProxy *)arg1 ;
-(_UIHostActivityProxy *)activityProxy;
-(void)setLabelForPositioning:(UILabel *)arg1 ;
-(UILabel *)labelForPositioning;
-(void)setImageSlotView:(UIView *)arg1 ;
-(UIView *)imageSlotView;
-(void)setTitleSlotView:(UIView *)arg1 ;
-(UIView *)titleSlotView;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(NSArray *)largeTextConstraints;
-(void)_updateForCurrentSizeCategory;
-(void)updateDarkening;
-(BOOL)isLongPressable;
-(void)setLongPressable:(BOOL)arg1 ;
-(UIView *)badgeSlotView;
-(UIVisualEffectView *)vibrantLabelView;
-(void)setBadgeSlotView:(UIView *)arg1 ;
-(void)setVibrantLabelView:(UIVisualEffectView *)arg1 ;
@end

