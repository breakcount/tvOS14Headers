/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBlendingHighlightView.h>
#import <UIKit/UIInterfaceActionVisualSeparatorDisplaying.h>
#import <UIKit/UIInterfaceActionVisualSectionSeparatorDisplaying.h>

@class _UIInterfaceActionSeparatorConstraintController, NSString;

@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> {

	double _horizontalLineLeadingInset;
	_UIInterfaceActionSeparatorConstraintController* _separatorViewConstraints;

}

@property (nonatomic,retain,readonly) _UIInterfaceActionSeparatorConstraintController * separatorViewConstraints;              //@synthesize separatorViewConstraints=_separatorViewConstraints - In the implementation block
@property (assign,nonatomic) double constantAxisDimension; 
@property (assign,nonatomic) double horizontalLineLeadingInset;                                                                //@synthesize horizontalLineLeadingInset=_horizontalLineLeadingInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateConstraints;
-(void)setHorizontalLineLeadingInset:(double)arg1 ;
-(void)setConstantAxisDimension:(double)arg1 ;
-(void)setConstantSizedAxis:(long long)arg1 ;
-(id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3 ;
-(double)constantAxisDimension;
-(long long)constantSizedAxis;
-(void)_updateContentDirectionalInsets;
-(double)horizontalLineLeadingInset;
-(_UIInterfaceActionSeparatorConstraintController *)separatorViewConstraints;
@end

