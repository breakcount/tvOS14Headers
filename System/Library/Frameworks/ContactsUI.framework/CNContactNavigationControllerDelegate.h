/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactNavigationControllerDelegate <UINavigationControllerDelegate>
@optional
-(void)contactNavigationControllerDidComplete:(id)arg1;
-(void)contactNavigationControllerDidCancel:(id)arg1;
-(id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3;
-(BOOL)contactNavigationController:(id)arg1 presentContactViewController:(id)arg2 animated:(BOOL)arg3;
-(BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;
-(BOOL)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
-(BOOL)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
-(BOOL)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
-(BOOL)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
-(void)contactNavigationController:(id)arg1 didDeleteContact:(id)arg2;

@end

