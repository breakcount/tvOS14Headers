/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIAtomTextViewAtomLayout.h>

@class UIColor, UILabel, UIImageView, _UISearchAtomBackgroundView, NSArray, NSLayoutConstraint, UIFont, NSString;

@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout> {

	SCD_Struct_UI29 _flags;
	UIColor* _atomBackgroundColor;
	UILabel* _textLabel;
	UIImageView* _leadingImage;
	_UISearchAtomBackgroundView* _backgroundView;
	NSArray* _defaultConstraints;
	NSLayoutConstraint* _imageBaselineConstraint;
	NSLayoutConstraint* _imageCenterYConstraint;
	NSArray* _withImageConstraints;
	NSArray* _withoutImageConstraints;

}

@property (nonatomic,retain) _UISearchAtomBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSArray * defaultConstraints;                                //@synthesize defaultConstraints=_defaultConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageBaselineConstraint;              //@synthesize imageBaselineConstraint=_imageBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageCenterYConstraint;               //@synthesize imageCenterYConstraint=_imageCenterYConstraint - In the implementation block
@property (nonatomic,copy) NSArray * withImageConstraints;                              //@synthesize withImageConstraints=_withImageConstraints - In the implementation block
@property (nonatomic,copy) NSArray * withoutImageConstraints;                           //@synthesize withoutImageConstraints=_withoutImageConstraints - In the implementation block
@property (retain) UILabel * textLabel;                                                 //@synthesize textLabel=_textLabel - In the implementation block
@property (retain) UIImageView * leadingImage;                                          //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,retain) UIColor * atomBackgroundColor;                             //@synthesize atomBackgroundColor=_atomBackgroundColor - In the implementation block
@property (nonatomic,retain) UIFont * atomFont; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(id)_defaultFont;
+(id)defaultAtomBackgroundColorForTraitCollection:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(void)setBackgroundView:(_UISearchAtomBackgroundView *)arg1 ;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)updateConstraints;
-(_UISearchAtomBackgroundView *)backgroundView;
-(void)tintColorDidChange;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)viewForLastBaselineLayout;
-(void)_updateColors;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setLeadingImage:(UIImageView *)arg1 ;
-(UIImageView *)leadingImage;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)selectionBounds;
-(void)setDefaultConstraints:(NSArray *)arg1 ;
-(void)setImageCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setWithImageConstraints:(NSArray *)arg1 ;
-(void)setWithoutImageConstraints:(NSArray *)arg1 ;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setAtomBackgroundColor:(UIColor *)arg1 ;
-(UIFont *)atomFont;
-(void)setAtomFont:(UIFont *)arg1 ;
-(UIColor *)atomBackgroundColor;
-(NSArray *)defaultConstraints;
-(NSLayoutConstraint *)imageBaselineConstraint;
-(NSLayoutConstraint *)imageCenterYConstraint;
-(NSArray *)withImageConstraints;
-(NSArray *)withoutImageConstraints;
@end

