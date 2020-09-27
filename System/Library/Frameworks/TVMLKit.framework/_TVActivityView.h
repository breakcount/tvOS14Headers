/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface _TVActivityView : UIView {

	UIView* _activityView;
	UIView* _textView;

}

@property (nonatomic,retain) UIView * activityView;              //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UIView * textView;                  //@synthesize textView=_textView - In the implementation block
-(UIView *)textView;
-(void)setTextView:(UIView *)arg1 ;
-(UIView *)activityView;
-(void)setActivityView:(UIView *)arg1 ;
-(void)layoutSubviews;
@end

