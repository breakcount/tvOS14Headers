/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKWrapperViewController.h>

@class PKCompactNavigationContainerController;

@interface PKCompactNavigationContainedNavigationWrapperViewController : PKWrapperViewController {

	PKCompactNavigationContainerController* _parentViewController;
	BOOL _useParentSafeAreaInsets;

}

@property (assign,nonatomic) BOOL useParentSafeAreaInsets;              //@synthesize useParentSafeAreaInsets=_useParentSafeAreaInsets - In the implementation block
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(id)initWithWrappedViewController:(id)arg1 parentViewController:(id)arg2 ;
-(BOOL)useParentSafeAreaInsets;
-(void)setUseParentSafeAreaInsets:(BOOL)arg1 ;
@end
