/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNAvatarCardActionsViewDelegate.h>
#import <libobjc.A.dylib/CNContactActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNCardTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNAvatarCardViewControllerDelegate;
@class CNAvatarCardController, UIView, CNAvatarCardActionsView, CNContactActionsViewController, NSLayoutConstraint, NSArray, NSString, UIImage;

@interface CNAvatarCardViewController : UIViewController <CNAvatarCardActionsViewDelegate, CNContactActionsViewControllerDelegate, CNCardTransitioning, UIGestureRecognizerDelegate> {

	BOOL _visible;
	BOOL _hasBackgroundColor;
	BOOL _hasHeader;
	BOOL _headerOnTop;
	CNAvatarCardController* _cardController;
	id<CNAvatarCardViewControllerDelegate> _delegate;
	UIView* _sourceView;
	UIView* _headerContainerView;
	CNAvatarCardActionsView* _legacyContactActionsView;
	CNContactActionsViewController* _actionsViewController;
	NSLayoutConstraint* _actionsViewControllerHeightConstraint;
	UIView* _effectView;
	NSArray* _verticalConstraints;

}

@property (nonatomic,retain) UIView * headerContainerView;                                            //@synthesize headerContainerView=_headerContainerView - In the implementation block
@property (nonatomic,retain) CNAvatarCardActionsView * legacyContactActionsView;                      //@synthesize legacyContactActionsView=_legacyContactActionsView - In the implementation block
@property (nonatomic,retain) CNContactActionsViewController * actionsViewController;                  //@synthesize actionsViewController=_actionsViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * actionsViewControllerHeightConstraint;              //@synthesize actionsViewControllerHeightConstraint=_actionsViewControllerHeightConstraint - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                           //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                                     //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) NSArray * verticalConstraints;                                           //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories; 
@property (assign,nonatomic,__weak) CNAvatarCardController * cardController;                          //@synthesize cardController=_cardController - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarCardViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundColor;                                                 //@synthesize hasBackgroundColor=_hasBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hasHeader;                                                          //@synthesize hasHeader=_hasHeader - In the implementation block
@property (assign,nonatomic) BOOL headerOnTop;                                                        //@synthesize headerOnTop=_headerOnTop - In the implementation block
@property (assign,nonatomic) BOOL actionsReversed; 
@property (assign,nonatomic) BOOL dismissesBeforePerforming; 
@property (assign,nonatomic) BOOL bypassActionValidation; 
@property (nonatomic,readonly) id<CNAvatarCardActionList> actionList; 
@property (nonatomic,retain) UIView * sourceView;                                                     //@synthesize sourceView=_sourceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitioningView; 
@property (nonatomic,readonly) CGRect transitioningFrame; 
@property (nonatomic,readonly) CGRect transitioningContentFrame; 
@property (nonatomic,readonly) UIImage * transitioningImage; 
@property (nonatomic,readonly) CGRect transitioningImageFrame; 
@property (assign) BOOL transitioningImageVisible; 
@property (nonatomic,readonly) UIView * transitioningContentView; 
-(id<CNAvatarCardViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNAvatarCardViewControllerDelegate>)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)hasBackgroundColor;
-(void)setSourceView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(id)initWithContacts:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(UIView *)effectView;
-(BOOL)bypassActionValidation;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)refreshActions;
-(CNAvatarCardController *)cardController;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(NSArray *)actionCategories;
-(CGRect)transitioningFrame;
-(UIView *)transitioningView;
-(CGRect)transitioningContentFrame;
-(UIImage *)transitioningImage;
-(CGRect)transitioningImageFrame;
-(BOOL)transitioningImageVisible;
-(void)setTransitioningImageVisible:(BOOL)arg1 ;
-(UIView *)sourceView;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(CNContactActionsViewController *)actionsViewController;
-(void)setActionsViewController:(CNContactActionsViewController *)arg1 ;
-(void)setLegacyContactActionsView:(CNAvatarCardActionsView *)arg1 ;
-(void)willAddActionsViewToHierarchy;
-(BOOL)hasHeader;
-(void)setHeaderContainerView:(UIView *)arg1 ;
-(id)actionsView;
-(void)didAddActionsViewToHierarchy;
-(void)setEffectView:(UIView *)arg1 ;
-(NSArray *)verticalConstraints;
-(UIView *)headerContainerView;
-(BOOL)headerOnTop;
-(void)setVerticalConstraints:(NSArray *)arg1 ;
-(CNAvatarCardActionsView *)legacyContactActionsView;
-(id<CNAvatarCardActionList>)actionList;
-(void)setActionsReversed:(BOOL)arg1 ;
-(BOOL)actionsReversed;
-(void)setDismissesBeforePerforming:(BOOL)arg1 ;
-(BOOL)dismissesBeforePerforming;
-(NSLayoutConstraint *)actionsViewControllerHeightConstraint;
-(void)setActionsViewControllerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateActionsControllerHeightConstraint;
-(void)_updatePreferredSize;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)viewControllerForCardActionsView:(id)arg1 ;
-(id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)cardActionsView:(id)arg1 willShowActions:(id)arg2 ;
-(void)cardActionsView:(id)arg1 didShowActions:(id)arg2 ;
-(void)dismissViewControllerForCardActionsView:(id)arg1 animated:(BOOL)arg2 ;
-(void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setHeaderOnTop:(BOOL)arg1 ;
-(CGRect)_photoFrameInView:(id)arg1 ;
-(void)setHasBackgroundColor:(BOOL)arg1 ;
-(void)setHasHeader:(BOOL)arg1 ;
@end

