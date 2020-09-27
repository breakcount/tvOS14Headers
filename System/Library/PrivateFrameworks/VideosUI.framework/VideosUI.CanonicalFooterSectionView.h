/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface VideosUI.CanonicalFooterSectionView : UIView {

	 sectionLayout;
	 headerView;
	 footerView;
	 itemViews;
	 prototypeItemHeaderLabel;
	 defaultFocusView;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(NSArray *)preferredFocusEnvironments;
@end

