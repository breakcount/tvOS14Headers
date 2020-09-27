/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, NSArray, UILabel, UIView;

@interface TVMusicArtworkInfoView : UIView {

	BOOL _isTitleMultipleLines;
	NSString* _artworkTitle;
	NSString* _artworkSubtitle;
	NSArray* _artworkDescriptions;
	UILabel* _artworkTitleLabel;
	UILabel* _artworkSubtitleLabel;
	UIView* _artworkDescriptionContainer;

}

@property (nonatomic,retain) UILabel * artworkTitleLabel;                       //@synthesize artworkTitleLabel=_artworkTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * artworkSubtitleLabel;                    //@synthesize artworkSubtitleLabel=_artworkSubtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * artworkDescriptionContainer;              //@synthesize artworkDescriptionContainer=_artworkDescriptionContainer - In the implementation block
@property (nonatomic,retain) NSString * artworkTitle;                           //@synthesize artworkTitle=_artworkTitle - In the implementation block
@property (nonatomic,retain) NSString * artworkSubtitle;                        //@synthesize artworkSubtitle=_artworkSubtitle - In the implementation block
@property (nonatomic,retain) NSArray * artworkDescriptions;                     //@synthesize artworkDescriptions=_artworkDescriptions - In the implementation block
@property (assign,nonatomic) BOOL isTitleMultipleLines;                         //@synthesize isTitleMultipleLines=_isTitleMultipleLines - In the implementation block
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_mainTextColor;
-(id)_descriptiveLabelForDescription:(id)arg1 ;
-(void)_setTextColors;
-(id)_infoTextColor;
-(void)setArtworkTitle:(NSString *)arg1 ;
-(void)setArtworkSubtitle:(NSString *)arg1 ;
-(void)setArtworkDescriptions:(NSArray *)arg1 ;
-(void)setIsTitleMultipleLines:(BOOL)arg1 ;
-(NSString *)artworkTitle;
-(NSString *)artworkSubtitle;
-(NSArray *)artworkDescriptions;
-(BOOL)isTitleMultipleLines;
-(UILabel *)artworkTitleLabel;
-(void)setArtworkTitleLabel:(UILabel *)arg1 ;
-(UILabel *)artworkSubtitleLabel;
-(void)setArtworkSubtitleLabel:(UILabel *)arg1 ;
-(UIView *)artworkDescriptionContainer;
-(void)setArtworkDescriptionContainer:(UIView *)arg1 ;
@end

