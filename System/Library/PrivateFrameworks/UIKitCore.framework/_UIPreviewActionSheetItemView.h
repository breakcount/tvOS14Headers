/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIPreviewAction, UILabel, UIImageView;

@interface _UIPreviewActionSheetItemView : UIView {

	BOOL _selected;
	UIPreviewAction* _action;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (assign,nonatomic,__weak) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL selected;                               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) UIPreviewAction * action;                      //@synthesize action=_action - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIPreviewAction *)action;
-(void)setAction:(UIPreviewAction *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)_updateConstraints;
-(void)_contentSizeChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 action:(id)arg2 ;
-(void)_updateLabelFont;
-(void)_updateTitleFromAction;
-(void)_updateImageFromAction;
@end

