/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <libobjc.A.dylib/NUIWidgetGridViewCell.h>

@protocol NUIWidgetGridViewCell
@property (nonatomic,readonly) unsigned long long index; 
@required
-(unsigned long long)index;
-(CGSize*)donatableSpaceAllowRemeasure:(BOOL)arg1;
-(id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3;
-(CGSize*)donatableSpace;

@end


@class NUIWidgetGridView, UIImageView, UILabel, NSString;

@interface NUIWidgetGridViewCell : NUIContainerStackView <NUIContainerViewDelegate, NUIWidgetGridViewCell> {

	double _width;
	CGSize _measuredSize;
	unsigned long long _index;
	BOOL _donatableSpaceIsValid;
	BOOL _accessibilityEnabled;
	CGSize _donatableSpace;
	NUIWidgetGridView* _gridView;

}

@property (nonatomic,__weak,readonly) NUIWidgetGridView * gridView;              //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * subtitleLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long index; 
-(unsigned long long)index;
-(UIImageView *)imageView;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(NUIWidgetGridView *)gridView;
-(void)invalidateIntrinsicContentSize;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)_didTapButton;
-(CGSize)donatableSpaceAllowRemeasure:(BOOL)arg1 ;
-(id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3 ;
-(CGSize)donatableSpace;
@end

