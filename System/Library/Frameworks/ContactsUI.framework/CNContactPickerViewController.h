/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactPickerContentDelegate.h>

@protocol CNContactPickerDelegate, CNContactPickerContentViewController;
@class NSArray, NSPredicate, UIViewController, CNContact, NSString, UINavigationController;

@interface CNContactPickerViewController : UIViewController <CNContactPickerContentDelegate> {

	BOOL _ignoreViewWillBePresented;
	BOOL _hidesSearchableSources;
	BOOL _onlyRealContacts;
	BOOL _allowsEditing;
	BOOL _allowsCancel;
	BOOL _hidesPromptInLandscape;
	BOOL _defaultViewControllerVisible;
	BOOL _autocloses;
	NSArray* _displayedPropertyKeys;
	id<CNContactPickerDelegate> _delegate;
	NSPredicate* _predicateForEnablingContact;
	NSPredicate* _predicateForSelectionOfContact;
	NSPredicate* _predicateForSelectionOfProperty;
	UIViewController*<CNContactPickerContentViewController> _viewController;
	CNContact* _scrollContact;
	long long _mode;
	long long _behavior;
	long long _cardActions;
	NSString* _prompt;
	NSString* _bannerTitle;
	NSString* _bannerValue;

}

@property (nonatomic,retain) UIViewController*<CNContactPickerContentViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) CNContact * scrollContact;                                                           //@synthesize scrollContact=_scrollContact - In the implementation block
@property (assign,nonatomic) long long mode;                                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long behavior;                                                                  //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) long long cardActions;                                                               //@synthesize cardActions=_cardActions - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                                                         //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (assign,nonatomic) BOOL onlyRealContacts;                                                               //@synthesize onlyRealContacts=_onlyRealContacts - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                                  //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCancel;                                                                   //@synthesize allowsCancel=_allowsCancel - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                                     //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) BOOL hidesPromptInLandscape;                                                         //@synthesize hidesPromptInLandscape=_hidesPromptInLandscape - In the implementation block
@property (nonatomic,copy) NSString * bannerTitle;                                                                //@synthesize bannerTitle=_bannerTitle - In the implementation block
@property (nonatomic,copy) NSString * bannerValue;                                                                //@synthesize bannerValue=_bannerValue - In the implementation block
@property (getter=isDefaultViewControllerVisible,readonly) BOOL defaultViewControllerVisible;                     //@synthesize defaultViewControllerVisible=_defaultViewControllerVisible - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (assign,nonatomic) BOOL autocloses;                                                                     //@synthesize autocloses=_autocloses - In the implementation block
@property (nonatomic,copy) NSArray * displayedPropertyKeys;                                                       //@synthesize displayedPropertyKeys=_displayedPropertyKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPickerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForEnablingContact;                                             //@synthesize predicateForEnablingContact=_predicateForEnablingContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfContact;                                          //@synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfProperty;                                         //@synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CNContactPickerDelegate>)delegate;
-(void)setDelegate:(id<CNContactPickerDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setBehavior:(long long)arg1 ;
-(long long)behavior;
-(void)setViewController:(UIViewController*<CNContactPickerContentViewController>)arg1 ;
-(UIViewController*<CNContactPickerContentViewController>)viewController;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UINavigationController *)navigationController;
-(void)setAllowsCancel:(BOOL)arg1 ;
-(void)setAutocloses:(BOOL)arg1 ;
-(void)setCardActions:(long long)arg1 ;
-(NSPredicate *)predicateForSelectionOfContact;
-(NSPredicate *)predicateForSelectionOfProperty;
-(void)setPredicateForSelectionOfContact:(NSPredicate *)arg1 ;
-(void)setPredicateForSelectionOfProperty:(NSPredicate *)arg1 ;
-(void)setScrollContact:(CNContact *)arg1 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(void)_prepareViewController;
-(BOOL)_isDelayingPresentation;
-(void)_viewWillBePresented;
-(void)_endDelayingPresentation;
-(void)_setupViewController;
-(CNContact *)scrollContact;
-(void)_checkConsistencyFromOptions:(id)arg1 ;
-(id)_pickerPresentedViewController;
-(BOOL)_shouldBeOutOfProcess;
-(void)_setViewController:(id)arg1 ;
-(BOOL)autocloses;
-(void)closePickerIfNeeded;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)pickerDidCancel;
-(void)scrollToClosestContactMatching:(id)arg1 ;
-(void)popToDefaultViewController:(BOOL)arg1 ;
-(NSArray *)displayedPropertyKeys;
-(void)setDisplayedPropertyKeys:(NSArray *)arg1 ;
-(NSPredicate *)predicateForEnablingContact;
-(void)setPredicateForEnablingContact:(NSPredicate *)arg1 ;
-(long long)cardActions;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(BOOL)onlyRealContacts;
-(void)setOnlyRealContacts:(BOOL)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)allowsCancel;
-(BOOL)hidesPromptInLandscape;
-(void)setHidesPromptInLandscape:(BOOL)arg1 ;
-(NSString *)bannerTitle;
-(void)setBannerTitle:(NSString *)arg1 ;
-(NSString *)bannerValue;
-(void)setBannerValue:(NSString *)arg1 ;
-(BOOL)isDefaultViewControllerVisible;
@end

