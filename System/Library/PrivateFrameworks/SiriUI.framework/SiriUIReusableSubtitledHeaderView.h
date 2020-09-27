/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@class NSAttributedString, UILabel, NSString;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView {

	NSAttributedString* _attributedSubtitleText;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitleText;              //@synthesize attributedSubtitleText=_attributedSubtitleText - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)setAttributedSubtitleText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitleText;
-(void)_configureSubTitleLabelForBounds:(CGRect)arg1 ;
@end
