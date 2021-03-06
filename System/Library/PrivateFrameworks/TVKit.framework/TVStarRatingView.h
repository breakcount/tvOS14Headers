/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImageView, UILabel, NSAttributedString;

@interface TVStarRatingView : UIView {

	UIColor* _starColor;
	double _starSize;
	double _ratingValue;
	double _spacing;
	UIImageView* _starImageView;
	UILabel* _label;

}

@property (nonatomic,retain) UIImageView * starImageView;                    //@synthesize starImageView=_starImageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) UIColor * starColor;                              //@synthesize starColor=_starColor - In the implementation block
@property (assign,nonatomic) double starSize;                                //@synthesize starSize=_starSize - In the implementation block
@property (assign,nonatomic) double ratingValue;                             //@synthesize ratingValue=_ratingValue - In the implementation block
@property (assign,nonatomic) double spacing;                                 //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText; 
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(double)ratingValue;
-(void)setRatingValue:(double)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)layoutSubviews;
-(id)_starImage;
-(void)setStarSize:(double)arg1 ;
-(void)setStarColor:(UIColor *)arg1 ;
-(UIColor *)starColor;
-(double)starSize;
-(UIImageView *)starImageView;
-(void)setStarImageView:(UIImageView *)arg1 ;
@end

