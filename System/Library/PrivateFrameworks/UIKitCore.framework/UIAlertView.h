/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, NSString, UIViewController;

@interface UIAlertView : UIView {

	UIAlertController* _alertController;
	_UIAlertControllerShimPresenter* _presenter;
	id _retainedSelf;
	NSMutableArray* _actions;
	long long _cancelIndex;
	long long _defaultButtonIndex;
	long long _firstOtherButtonIndex;
	NSString* _message;
	NSString* _subtitle;
	long long _alertViewStyle;
	BOOL _hasPreparedAlertActions;
	BOOL _isPresented;
	BOOL _alertControllerShouldDismiss;
	BOOL _handlingAlertActionShouldDismiss;
	BOOL _dismissingAlertController;
	id _delegate;
	id _context;
	UIViewController* _externalViewControllerForPresentation;

}

@property (nonatomic,retain) id context;                                                                                                                                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long defaultButtonIndex; 
@property (assign,nonatomic) long long numberOfRows; 
@property (nonatomic,retain) NSString * subtitle; 
@property (setter=_setExternalViewControllerForPresentation:,getter=_externalViewControllerForPresentation,nonatomic,retain) UIViewController * externalViewControllerForPresentation;              //@synthesize externalViewControllerForPresentation=_externalViewControllerForPresentation - In the implementation block
@property (nonatomic,retain) NSString * bodyText; 
@property (assign,nonatomic) BOOL groupsTextFields; 
@property (assign,nonatomic,__weak) id delegate;                                                                                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) long long alertViewStyle; 
+(id)_remoteAlertViewWithBlock:(/*^block*/id)arg1 ;
+(id)_alertViewForSessionWithRemoteViewController:(id)arg1 ;
+(id)_alertViewForWindow:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)layout;
-(NSString *)message;
-(void)dismiss;
-(void)setMessage:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(BOOL)isVisible;
-(void)dismissAnimated:(BOOL)arg1 ;
-(id)window;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(long long)defaultButtonIndex;
-(NSString *)bodyText;
-(void)setBodyText:(NSString *)arg1 ;
-(long long)numberOfRows;
-(void)setNumberOfRows:(long long)arg1 ;
-(void)setGroupsTextFields:(BOOL)arg1 ;
-(BOOL)groupsTextFields;
-(id)titleLabel;
-(id)textField;
-(id)tableView;
-(id)_titleLabel;
-(id)_alertController;
-(BOOL)_isAnimating;
-(id)keyboard;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(long long)cancelButtonIndex;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(id)_addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(id)textFieldAtIndex:(long long)arg1 ;
-(int)buttonCount;
-(int)textFieldCount;
-(void)setAlertViewStyle:(long long)arg1 ;
-(long long)alertViewStyle;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)backgroundSize;
-(id)addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(long long)firstOtherButtonIndex;
-(void)_setFirstOtherButtonIndex:(long long)arg1 ;
-(void)_setIsPresented:(BOOL)arg1 ;
-(void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_dismissForTappedIndex:(long long)arg1 ;
-(BOOL)_prepareToDismissForTappedIndex:(long long)arg1 ;
-(void)_prepareAlertActions;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(long long)numberOfButtons;
-(id)_preparedAlertActionAtIndex:(unsigned long long)arg1 ;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(void)_updateMessageAndSubtitle;
-(long long)_maximumNumberOfTextFieldsForCurrentStyle;
-(void)_textDidChangeInTextField:(id)arg1 ;
-(void)_updateFirstOtherButtonEnabledState;
-(void)_showAnimated:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6 ;
-(void)_updateButtonTitle:(id)arg1 buttonIndex:(unsigned long long)arg2 ;
-(id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2 ;
-(void)_setAccessoryView:(id)arg1 ;
-(id)_addButtonWithTitle:(id)arg1 ;
-(void)setTableShouldShowMinimumContent:(BOOL)arg1 ;
-(id)_externalViewControllerForPresentation;
-(void)_setExternalViewControllerForPresentation:(id)arg1 ;
@end

