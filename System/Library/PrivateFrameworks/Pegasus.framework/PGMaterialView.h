/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/PGLayoutContainerView.h>

@class UIView, PGCABackdropLayerView, UIColor;

@interface PGMaterialView : PGLayoutContainerView {

	UIView* _contentView;
	PGCABackdropLayerView* _backdropLayerView;
	UIColor* _backgroundColor;

}

@property (nonatomic,readonly) UIView * contentView; 
@property (assign,getter=isBackdropHidden,nonatomic) BOOL backdropHidden; 
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(double)_cornerRadius;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(BOOL)PG_preferredVisibilityForView:(id)arg1 ;
-(void)setBackdropHidden:(BOOL)arg1 ;
-(BOOL)isBackdropHidden;
@end

