/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PKObservableContentContainer.h>

@class UIVisualEffectView, NSHashTable, NSString;

@interface PKBlurredNavigationController : UINavigationController <PKObservableContentContainer> {

	UIVisualEffectView* _backdropView;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_observers;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)addContentContainerObserver:(id)arg1 ;
-(void)removeContentContainerObserver:(id)arg1 ;
@end
