/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentAssociatedAccountSetupDelegate.h>

@class PKPaymentService, PKPeerPaymentService, PKPeerPaymentAccount, NSArray, PKFamilyMember, NSString;

@interface PKPeerPaymentFamilyCircleViewController : UITableViewController <PKPeerPaymentAssociatedAccountSetupDelegate> {

	PKPaymentService* _paymentService;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _account;
	BOOL _loadingFamily;
	NSArray* _sortedRows;
	PKFamilyMember* _viewer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithPKFamilyMembers:(id)arg1 ;
-(id)initWithFamilyMembers:(id)arg1 altDSIDToImageData:(id)arg2 ;
-(id)initWithPKFamilyMembers:(id)arg1 altDSIDToImageData:(id)arg2 ;
-(void)_processFamilyMembers:(id)arg1 ;
-(void)_processAltDSIDToImageData:(id)arg1 ;
-(void)_loadFamilyIfNecessary;
-(void)_peerPaymentAccountChanged:(id)arg1 ;
-(void)_handleRowTapped:(id)arg1 ;
-(id)_pendingInvitations;
-(void)_reloadSortedRows;
-(id)_dsidsMissingImages;
-(void)_loadFamilyMembers;
-(void)_loadFamilyMemberImagesForDSIDs:(id)arg1 ;
-(id)_familyMemberWithDSID:(id)arg1 ;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3 ;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1 ;
-(id)initWithFamilyMembers:(id)arg1 ;
@end

