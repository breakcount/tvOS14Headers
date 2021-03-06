/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, UIMoreListCellLayoutManager, UIBarButtonItem, NSString;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	BOOL _allowsCustomizing;
	BOOL _disableCustomizing;
	BOOL _hideNavigationBar;
	NSArray* _moreViewControllers;
	UIMoreListCellLayoutManager* _layoutManager;
	UIBarButtonItem* _moreEditButtonItem;
	BOOL _moreViewControllersChanged;

}

@property (nonatomic,retain) NSArray * moreViewControllers; 
@property (assign,nonatomic) BOOL allowsCustomizing; 
@property (assign,nonatomic) BOOL moreViewControllersChanged; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)table;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(id)tabBarItem;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)_layoutCells;
-(BOOL)allowsCustomizing;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)_updateEditButton;
-(id)_targetNavigationController;
-(NSArray *)moreViewControllers;
-(void)setMoreViewControllers:(NSArray *)arg1 ;
-(BOOL)moreViewControllersChanged;
-(void)setMoreViewControllersChanged:(BOOL)arg1 ;
-(void)setAllowsCustomizing:(BOOL)arg1 ;
-(BOOL)_viewControllerWasSelected;
@end

