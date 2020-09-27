/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSArray;

@interface UIMovieScrubberEditingView : UIView {

	UIImageView* _leftImageView;
	UIImageView* _middleImageView;
	UIImageView* _rightImageView;
	NSArray* _activeImages;
	NSArray* _activeNoEditImages;
	NSArray* _inactiveImages;
	BOOL _enabled;
	BOOL _editing;
	double _edgeInset;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) double edgeInset;                           //@synthesize edgeInset=_edgeInset - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isEditing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setEdgeInset:(double)arg1 ;
-(void)bounce;
-(int)handleForPoint:(CGPoint)arg1 hitOffset:(double*)arg2 ;
-(double)edgeInset;
-(void)_updateHandleImages;
-(id)_handleImages;
-(CGRect)_leftHandleRect;
-(CGRect)_rightHandleRect;
-(double)_bounceValueForFraction:(double)arg1 ;
-(BOOL)pointInsideLeftHandle:(CGPoint)arg1 ;
-(BOOL)pointInsideRightHandle:(CGPoint)arg1 ;
@end

