/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPrintFormatter.h>

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {

	UIView* _view;

}

@property (nonatomic,readonly) UIView * view;              //@synthesize view=_view - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIView *)view;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_initWithView:(id)arg1 ;
@end

