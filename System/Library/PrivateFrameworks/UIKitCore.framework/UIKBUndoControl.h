/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIKBUndoStyling, UIView, UILabel, UIImageView, NSLayoutConstraint;

@interface UIKBUndoControl : UIControl {

	long long _type;
	UIKBUndoStyling* _style;
	UIView* _springCoverView;
	UILabel* _label;
	UIImageView* _icon;
	NSLayoutConstraint* _coverConstraintLeftAnchor;
	NSLayoutConstraint* _coverConstraintRightAnchor;
	NSLayoutConstraint* _coverConstraintTopAnchor;
	NSLayoutConstraint* _coverConstraintBottomAnchor;

}

@property (assign,nonatomic) long long type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIKBUndoStyling * style;                                       //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView * springCoverView;                                      //@synthesize springCoverView=_springCoverView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * coverConstraintLeftAnchor;                //@synthesize coverConstraintLeftAnchor=_coverConstraintLeftAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * coverConstraintRightAnchor;               //@synthesize coverConstraintRightAnchor=_coverConstraintRightAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * coverConstraintTopAnchor;                 //@synthesize coverConstraintTopAnchor=_coverConstraintTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * coverConstraintBottomAnchor;              //@synthesize coverConstraintBottomAnchor=_coverConstraintBottomAnchor - In the implementation block
+(id)controlLableTextByType:(long long)arg1 style:(id)arg2 available:(BOOL)arg3 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(UIKBUndoStyling *)style;
-(void)setStyle:(UIKBUndoStyling *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIImageView *)icon;
-(void)setIcon:(UIImageView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(id)imageSymbolConfiguration;
-(void)layoutControlForType:(long long)arg1 andStyling:(id)arg2 ;
-(UIView *)springCoverView;
-(NSLayoutConstraint *)coverConstraintLeftAnchor;
-(NSLayoutConstraint *)coverConstraintRightAnchor;
-(id)controlImageByType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 andStyling:(id)arg2 ;
-(void)updateUndoControlStyleForState:(unsigned long long)arg1 ;
-(void)updateCoverWithTavelProcess:(double)arg1 isRTL:(BOOL)arg2 ;
-(id)controlLabelImageNameByType:(long long)arg1 isRTL:(BOOL)arg2 ;
-(void)setSpringCoverView:(UIView *)arg1 ;
-(void)setCoverConstraintLeftAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setCoverConstraintRightAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)coverConstraintTopAnchor;
-(void)setCoverConstraintTopAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)coverConstraintBottomAnchor;
-(void)setCoverConstraintBottomAnchor:(NSLayoutConstraint *)arg1 ;
@end

