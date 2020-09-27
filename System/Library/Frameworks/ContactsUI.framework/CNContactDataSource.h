/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, NSDictionary, CNContactStore, CNContactFilter, CNContact, CNContactFormatter;


@protocol CNContactDataSource <NSObject,NSCopying>
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSString * meContactIdentifier; 
@property (nonatomic,readonly) NSDictionary * contactMatchInfos; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL canReload; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) CNContactStore * store; 
@property (nonatomic,copy) CNContactFilter * filter; 
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,readonly) CNContact * meContact; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter; 
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
@optional
-(void)invalidate;
-(void)reset;
-(NSString *)displayName;
-(CNContactFilter *)filter;
-(CNContactStore *)store;
-(void)setFilter:(id)arg1;
-(void)reload;
-(BOOL)isLoading;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(id)arg1;
-(CNContact *)meContact;
-(BOOL)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
-(id)meContactWithKeysToFetch:(id)arg1;
-(CNContactFilter *)effectiveFilter;

@required
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSArray *)sections;
-(NSArray *)indexSections;
-(NSArray *)contacts;
-(BOOL)canReload;
-(id)indexPathForContact:(id)arg1;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3;
-(NSString *)meContactIdentifier;
-(NSDictionary *)contactMatchInfos;

@end

