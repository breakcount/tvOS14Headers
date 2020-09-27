/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class NSArray, UIView, NSString;

@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController> {

	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                          //@synthesize customView=_customView - In the implementation block
@property (nonatomic,readonly) NSArray * displayedCandidates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCustomView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(UIView *)customView;
-(BOOL)hidesExpandableButton;
-(NSArray *)displayedCandidates;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
@end

