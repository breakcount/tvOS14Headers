/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface RUIStyle : NSObject {

	UIColor* _backgroundColor;
	UIColor* _radioGroupSelectedColor;
	UIColor* _buttonRowTextColor;
	UIColor* _labelRowTextColor;
	UIColor* _selectPageDetailTextColor;
	UIColor* _titleLabelTextColor;
	UIColor* _headerLabelTextColor;
	UIColor* _subHeaderLabelTextColor;
	UIColor* _detailHeaderLabelTextColor;
	UIColor* _footerLabelTextColor;
	UIColor* _focusedRowTextColor;
	long long _labelRowTextAlignment;
	long long _headerLabelAlignment;
	long long _subHeaderLabelAlignment;
	long long _footerLabelAlignment;
	long long _footerLinkAlignment;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * radioGroupSelectedColor;                     //@synthesize radioGroupSelectedColor=_radioGroupSelectedColor - In the implementation block
@property (nonatomic,retain) UIColor * labelRowTextColor;                           //@synthesize labelRowTextColor=_labelRowTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonRowTextColor;                          //@synthesize buttonRowTextColor=_buttonRowTextColor - In the implementation block
@property (nonatomic,retain) UIColor * selectPageDetailTextColor;                   //@synthesize selectPageDetailTextColor=_selectPageDetailTextColor - In the implementation block
@property (nonatomic,retain) UIColor * titleLabelTextColor;                         //@synthesize titleLabelTextColor=_titleLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * headerLabelTextColor;                        //@synthesize headerLabelTextColor=_headerLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * subHeaderLabelTextColor;                     //@synthesize subHeaderLabelTextColor=_subHeaderLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * detailHeaderLabelTextColor;                  //@synthesize detailHeaderLabelTextColor=_detailHeaderLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * footerLabelTextColor;                        //@synthesize footerLabelTextColor=_footerLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * focusedRowTextColor;                         //@synthesize focusedRowTextColor=_focusedRowTextColor - In the implementation block
@property (assign,nonatomic) long long labelRowTextAlignment;                       //@synthesize labelRowTextAlignment=_labelRowTextAlignment - In the implementation block
@property (assign,nonatomic) long long headerLabelAlignment;                        //@synthesize headerLabelAlignment=_headerLabelAlignment - In the implementation block
@property (assign,nonatomic) long long subHeaderLabelAlignment;                     //@synthesize subHeaderLabelAlignment=_subHeaderLabelAlignment - In the implementation block
@property (assign,nonatomic) long long footerLabelAlignment;                        //@synthesize footerLabelAlignment=_footerLabelAlignment - In the implementation block
@property (assign,nonatomic) long long footerLinkAlignment;                         //@synthesize footerLinkAlignment=_footerLinkAlignment - In the implementation block
@property (nonatomic,readonly) long long navBarActivityIndicatorStyle; 
@property (nonatomic,retain) UIColor * tintColor;                                   //@synthesize tintColor=_tintColor - In the implementation block
+(id)sharedInstance;
+(id)defaultStyle;
+(id)frontRowStyle;
+(id)setupAssistantStyle;
+(id)setupAssistantModalStyle;
-(id)init;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)setTitleLabelTextColor:(UIColor *)arg1 ;
-(long long)footerLinkAlignment;
-(long long)footerLabelAlignment;
-(UIColor *)footerLabelTextColor;
-(long long)navBarActivityIndicatorStyle;
-(void)applyToLabel:(id)arg1 ;
-(void)applyToObjectModel:(id)arg1 ;
-(void)applyToNavigationController:(id)arg1 ;
-(UIColor *)radioGroupSelectedColor;
-(void)setRadioGroupSelectedColor:(UIColor *)arg1 ;
-(UIColor *)buttonRowTextColor;
-(void)setButtonRowTextColor:(UIColor *)arg1 ;
-(UIColor *)labelRowTextColor;
-(void)setLabelRowTextColor:(UIColor *)arg1 ;
-(UIColor *)selectPageDetailTextColor;
-(void)setSelectPageDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)titleLabelTextColor;
-(UIColor *)headerLabelTextColor;
-(void)setHeaderLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)subHeaderLabelTextColor;
-(void)setSubHeaderLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)detailHeaderLabelTextColor;
-(void)setDetailHeaderLabelTextColor:(UIColor *)arg1 ;
-(void)setFooterLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)focusedRowTextColor;
-(void)setFocusedRowTextColor:(UIColor *)arg1 ;
-(long long)labelRowTextAlignment;
-(void)setLabelRowTextAlignment:(long long)arg1 ;
-(long long)headerLabelAlignment;
-(void)setHeaderLabelAlignment:(long long)arg1 ;
-(long long)subHeaderLabelAlignment;
-(void)setSubHeaderLabelAlignment:(long long)arg1 ;
-(void)setFooterLabelAlignment:(long long)arg1 ;
-(void)setFooterLinkAlignment:(long long)arg1 ;
@end

