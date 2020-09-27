/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel;

@interface __TVSUIDigitView : UIView {

	UIVisualEffectView* _backgroundView;
	UILabel* _textLabel;

}

@property (nonatomic,readonly) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(CGSize)intrinsicContentSize;
-(void)_setupConstraints;
@end

