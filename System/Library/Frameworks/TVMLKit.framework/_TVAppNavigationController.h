/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <TVMLKit/TVAppRootViewController.h>
#import <libobjc.A.dylib/IKAppNavigationController.h>

@protocol _TVAppNavigationControllerDelegate, NSObject;
@class UINavigationController, UIViewController, IKAppTabBar, TVApplicationController, UITapGestureRecognizer, NSString;

@interface _TVAppNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVApplicationInspectorDocumentProvider, UINavigationControllerDelegate, TVAppRootViewController, IKAppNavigationController> {

	struct {
		unsigned willLoadAppDocumentWithController : 1;
		unsigned willDisappear : 1;
	}  _ancDelegateFlags;
	TVApplicationController* _appController;
	id<_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
	unsigned long long _maxNavControllerStackDepth;
	UITapGestureRecognizer* _menuRecognizer;
	UIViewController* _presentedModalViewController;
	id<NSObject> _modalPresenterObserverToken;

}

@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                                    //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController * presentedModalViewController;                                            //@synthesize presentedModalViewController=_presentedModalViewController - In the implementation block
@property (nonatomic,retain) id<NSObject> modalPresenterObserverToken;                                                   //@synthesize modalPresenterObserverToken=_modalPresenterObserverToken - In the implementation block
@property (nonatomic,__weak,readonly) TVApplicationController * appController;                                           //@synthesize appController=_appController - In the implementation block
@property (assign,nonatomic,__weak) id<_TVAppNavigationControllerDelegate> appNavigationControllerDelegate;              //@synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long maxNavControllerStackDepth;                                              //@synthesize maxNavControllerStackDepth=_maxNavControllerStackDepth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UINavigationController * currentNavigationController; 
@property (nonatomic,readonly) UIViewController * currentViewController; 
@property (nonatomic,readonly) id<IKAppNavigationController> appNavigationController; 
@property (nonatomic,readonly) IKAppTabBar * appTabBar; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)clear;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)activeDocument;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(id)documents;
-(void)setDocuments:(id)arg1 options:(id)arg2 ;
-(void)presentModal:(id)arg1 options:(id)arg2 ;
-(void)dismissModal;
-(IKAppTabBar *)appTabBar;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIViewController *)currentViewController;
-(void)dismissed;
-(id<_TVAppNavigationControllerDelegate>)appNavigationControllerDelegate;
-(void)_handleMenuAction:(id)arg1 ;
-(id<NSObject>)modalPresenterObserverToken;
-(void)setAppNavigationControllerDelegate:(id<_TVAppNavigationControllerDelegate>)arg1 ;
-(UIViewController *)presentedModalViewController;
-(void)_doWillLoadAppDocumentWithController:(id)arg1 ;
-(void)_presentModalDocumentController:(id)arg1 options:(id)arg2 ;
-(void)setModalPresenterObserverToken:(id<NSObject>)arg1 ;
-(void)setPresentedModalViewController:(UIViewController *)arg1 ;
-(void)dismissModal:(BOOL)arg1 ;
-(id)popToRootDocument:(BOOL)arg1 ;
-(void)setAppNavigationControllersDelegate:(id)arg1 ;
-(UINavigationController *)currentNavigationController;
-(id<IKAppNavigationController>)appNavigationController;
-(id)initWithApplicationController:(id)arg1 ;
-(void)setMaxNavControllerStackDepth:(unsigned long long)arg1 ;
-(void)dismissAllModals:(/*^block*/id)arg1 ;
-(TVApplicationController *)appController;
-(unsigned long long)maxNavControllerStackDepth;
@end

