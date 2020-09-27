/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface _UIDynamicCaretAlternatives : UIView {

	UIView* _verticalDivider;
	UIView* _horizontalDivider;
	NSArray* _alternativesButtons;

}

@property (nonatomic,retain) UIView * verticalDivider;                   //@synthesize verticalDivider=_verticalDivider - In the implementation block
@property (nonatomic,retain) UIView * horizontalDivider;                 //@synthesize horizontalDivider=_horizontalDivider - In the implementation block
@property (nonatomic,retain) NSArray * alternativesButtons;              //@synthesize alternativesButtons=_alternativesButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setVerticalDivider:(UIView *)arg1 ;
-(UIView *)verticalDivider;
-(void)setHorizontalDivider:(UIView *)arg1 ;
-(UIView *)horizontalDivider;
-(void)setAlternativesButtons:(NSArray *)arg1 ;
-(NSArray *)alternativesButtons;
-(void)setButtonLabels:(id)arg1 ;
-(long long)indexOfButtonForPoint:(CGPoint)arg1 ;
-(void)highlightButtonAtIndex:(long long)arg1 ;
@end

