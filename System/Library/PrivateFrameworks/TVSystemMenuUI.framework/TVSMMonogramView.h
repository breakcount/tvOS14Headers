/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <TVUIKit/TVLockupView.h>

@class NSPersonNameComponents, UIImage, _TVSMMonogramContentView, UIImageView, _TVSMVibrantHeaderFooterView, NSString;

@interface TVSMMonogramView : TVLockupView {

	BOOL _showSelection;
	NSPersonNameComponents* _personNameComponents;
	UIImage* _image;
	_TVSMMonogramContentView* _monogramContentView;
	UIImageView* _checkmarkView;
	_TVSMVibrantHeaderFooterView* _vibrantFooterView;

}

@property (nonatomic,readonly) _TVSMMonogramContentView * monogramContentView;                //@synthesize monogramContentView=_monogramContentView - In the implementation block
@property (nonatomic,readonly) UIImageView * checkmarkView;                                   //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,readonly) _TVSMVibrantHeaderFooterView * vibrantFooterView;              //@synthesize vibrantFooterView=_vibrantFooterView - In the implementation block
@property (nonatomic,retain) NSPersonNameComponents * personNameComponents;                   //@synthesize personNameComponents=_personNameComponents - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL showSelection;                                              //@synthesize showSelection=_showSelection - In the implementation block
+(void)_configureFloatingContentViewAppearance;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToSuperview;
-(NSPersonNameComponents *)personNameComponents;
-(void)setPersonNameComponents:(NSPersonNameComponents *)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setShowSelection:(BOOL)arg1 ;
-(BOOL)showSelection;
-(_TVSMMonogramContentView *)monogramContentView;
-(_TVSMVibrantHeaderFooterView *)vibrantFooterView;
@end

