/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKUIViewControllerRootView.h>

@class NSLayoutConstraint, UIView;

@interface _MKStackingContentView : _MKUIViewControllerRootView {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _middleConstraint;
	NSLayoutConstraint* _bottomConstraint;
	UIView* _topView;
	UIView* _bottomView;

}

@property (nonatomic,retain) UIView * topView;                                     //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                  //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint; 
-(void)updateConstraints;
-(id)initWithViewController:(id)arg1 ;
-(void)setBottomView:(UIView *)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setTopView:(UIView *)arg1 ;
-(id)vibrancyGroupName;
-(UIView *)topView;
-(UIView *)bottomView;
@end

