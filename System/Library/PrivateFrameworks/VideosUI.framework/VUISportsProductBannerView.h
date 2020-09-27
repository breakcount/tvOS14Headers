/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUISportsProductBannerLayout, VUILabel, NSArray, _TVImageView, UIFocusContainerGuide;

@interface VUISportsProductBannerView : UIView {

	VUISportsProductBannerLayout* _layout;
	VUILabel* _titleLabel;
	NSArray* _rowLabels;
	NSArray* _scoreLabels;
	NSArray* _descriptionLabels;
	VUILabel* _footerLabel;
	NSArray* _buttonViews;
	VUILabel* _availabilityTextView;
	_TVImageView* _availabilityImageView;
	UIFocusContainerGuide* _containerGuide;

}

@property (nonatomic,retain) UIFocusContainerGuide * containerGuide;              //@synthesize containerGuide=_containerGuide - In the implementation block
@property (nonatomic,retain) VUISportsProductBannerLayout * layout;               //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * rowLabels;                                 //@synthesize rowLabels=_rowLabels - In the implementation block
@property (nonatomic,retain) NSArray * scoreLabels;                               //@synthesize scoreLabels=_scoreLabels - In the implementation block
@property (nonatomic,retain) NSArray * descriptionLabels;                         //@synthesize descriptionLabels=_descriptionLabels - In the implementation block
@property (nonatomic,retain) VUILabel * footerLabel;                              //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttonViews;                               //@synthesize buttonViews=_buttonViews - In the implementation block
@property (nonatomic,retain) VUILabel * availabilityTextView;                     //@synthesize availabilityTextView=_availabilityTextView - In the implementation block
@property (nonatomic,retain) _TVImageView * availabilityImageView;                //@synthesize availabilityImageView=_availabilityImageView - In the implementation block
-(VUISportsProductBannerLayout *)layout;
-(void)setLayout:(VUISportsProductBannerLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)footerLabel;
-(void)setFooterLabel:(VUILabel *)arg1 ;
-(UIFocusContainerGuide *)containerGuide;
-(void)setContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(NSArray *)rowLabels;
-(NSArray *)buttonViews;
-(void)setButtonViews:(NSArray *)arg1 ;
-(VUILabel *)availabilityTextView;
-(_TVImageView *)availabilityImageView;
-(void)setAvailabilityTextView:(VUILabel *)arg1 ;
-(void)setAvailabilityImageView:(_TVImageView *)arg1 ;
-(void)_tvOS_layoutSubviews;
-(double)_totalMaxScoreWidthWithAvailableWidth:(double)arg1 ;
-(double)_maxScoreWidthForColumn:(unsigned long long)arg1 availableWidth:(double)arg2 ;
-(void)setRowLabels:(NSArray *)arg1 ;
-(void)setScoreLabels:(NSArray *)arg1 ;
-(void)setDescriptionLabels:(NSArray *)arg1 ;
-(NSArray *)scoreLabels;
-(NSArray *)descriptionLabels;
@end

