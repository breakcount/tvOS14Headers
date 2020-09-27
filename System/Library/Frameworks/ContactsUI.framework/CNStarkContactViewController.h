/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup, NSArray, CNStarkContactNameView;

@interface CNStarkContactViewController : CNContactContentViewController <CNPropertyBestIDSValueQueryDelegate> {

	CNPropertyBestIDSValueQuery* _bestiMessageQuery;
	CNCardiMessageEmailGroup* _iMessageEmailGroup;
	NSArray* _activatedConstraints;
	CNStarkContactNameView* _contactNameView;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestiMessageQuery;              //@synthesize bestiMessageQuery=_bestiMessageQuery - In the implementation block
@property (nonatomic,retain) CNCardiMessageEmailGroup * iMessageEmailGroup;                //@synthesize iMessageEmailGroup=_iMessageEmailGroup - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                               //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) CNStarkContactNameView * contactNameView;                     //@synthesize contactNameView=_contactNameView - In the implementation block
+(BOOL)enablesTransportButtons;
-(void)dealloc;
-(id)title;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)viewWillLayoutSubviews;
-(id)initWithContact:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setupConstraints;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(void)loadContactViewControllerViews;
-(BOOL)shouldDisplayAvatarHeaderView;
-(void)setupTableHeaderView;
-(void)initializeTableViewsForHeaderHeight;
-(BOOL)hasTableViewHeaderFirstSection;
-(void)queryComplete;
-(void)_initiateBestiMessagePropertyQuery;
-(CNPropertyBestIDSValueQuery *)bestiMessageQuery;
-(CNStarkContactNameView *)contactNameView;
-(void)setContactNameView:(CNStarkContactNameView *)arg1 ;
-(void)setBestiMessageQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
-(CNCardiMessageEmailGroup *)iMessageEmailGroup;
-(void)setIMessageEmailGroup:(CNCardiMessageEmailGroup *)arg1 ;
@end

