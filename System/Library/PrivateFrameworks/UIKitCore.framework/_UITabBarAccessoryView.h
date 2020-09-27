/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UITabBarAccessoryView : UIView {

	UIView* _contentView;
	CGSize _preferredSize;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                //@synthesize preferredSize=_preferredSize - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(UIView *)contentView;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
@end

