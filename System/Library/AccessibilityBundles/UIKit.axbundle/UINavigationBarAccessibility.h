/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UINavigationBarAccessibility_super.h>

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityIdentifier;
-(void)addSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)insertSubview:(id)arg1 belowSubview:(id)arg2 ;
-(void)insertSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSubview:(id)arg1 aboveSubview:(id)arg2 ;
-(id)accessibilityElements;
-(unsigned long long)_accessibilityAutomationType;
-(long long)accessibilityContainerType;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldGroupAccessibilityChildren;
-(double)_accessibilityAllowedGeometryOverlap;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityStaticBarButtonItemWithContents:(id)arg1 ;
-(id)_accessibilityFetchCachedNavBarElements;
-(id)_accessibilityLeftButtonElements;
-(id)_accessibilityRightButtonElements;
-(id)_axGetCachedStaticNavBarButton;
-(id)_accessibilityStaticBarButtonItem;
-(BOOL)_accessibilityHasLeftRightButtonCountChanged;
-(BOOL)_accessibilityHasTitleViewChanged;
-(BOOL)_accessibilityHasStaticNavBarButtonChanged;
-(id)_accessibilityFauxBackButton;
-(void)_accessibilitySetFauxBackButton:(id)arg1 ;
-(void)_axSetCachedStaticNavBarButton:(id)arg1 ;
-(void)_accessibilitySetNavBarElements:(id)arg1 ;
-(void)_accessibility_navigationBarContentsDidChange;
-(id)_accessibilityNavBarElements;
@end

