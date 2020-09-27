/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface BSUIEmojiLabelView : UIView {

	UILabel* _emojiLabel;
	NSString* _rawText;
	UILabel* _contentLabel;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (nonatomic,readonly) UILabel * contentLabel;                    //@synthesize contentLabel=_contentLabel - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(long long)numberOfLines;
-(long long)textAlignment;
-(BOOL)adjustsFontSizeToFitWidth;
-(double)_firstLineBaselineOffsetFromBoundsTop;
-(UILabel *)contentLabel;
@end

