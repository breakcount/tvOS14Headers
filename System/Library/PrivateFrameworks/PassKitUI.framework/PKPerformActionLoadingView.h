/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface PKPerformActionLoadingView : UIView {

	UIActivityIndicatorView* _spinner;
	UILabel* _loadingLabel;

}

@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) UILabel * loadingLabel;                         //@synthesize loadingLabel=_loadingLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)spinner;
-(UILabel *)loadingLabel;
@end

