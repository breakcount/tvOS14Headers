/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVImageView, UILabel, NSString, UIImage, TVImageProxy;

@interface TVHeaderView : UIView {

	TVImageView* _headerImageView;
	long long _horizontalAlignment;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	BOOL _useUberImageLayout;
	UIEdgeInsets _imageInsets;

}

@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * subtitleLabel; 
@property (nonatomic,readonly) TVImageView * headerImageView; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) long long horizontalAlignment;                //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                     //@synthesize imageInsets=_imageInsets - In the implementation block
@property (assign,nonatomic) BOOL useUberImageLayout;                      //@synthesize useUberImageLayout=_useUberImageLayout - In the implementation block
@property (nonatomic,retain) UIImage * headerImage; 
@property (nonatomic,retain) TVImageProxy * headerImageProxy; 
+(id)subtitleColor;
+(id)titleColor;
+(id)subtitleFont;
+(id)titleFont;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(TVImageView *)headerImageView;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(long long)horizontalAlignment;
-(void)setHeaderImageProxy:(TVImageProxy *)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)setHeaderImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(TVImageProxy *)headerImageProxy;
-(BOOL)useUberImageLayout;
-(void)setUseUberImageLayout:(BOOL)arg1 ;
@end

