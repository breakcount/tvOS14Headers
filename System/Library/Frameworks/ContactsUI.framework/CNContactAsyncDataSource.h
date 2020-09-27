/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNContactDataSource.h>

@protocol CNCancelable, CNSchedulerProvider;
@class CNContactDataSourceSafeDelegate, CNContactFormatter, CNContactStore, CNContactStoreFilter, NSArray, CNManualObservable, NSMutableArray, NSString, NSDictionary, CNContactFilter, CNContact;

@interface CNContactAsyncDataSource : NSObject <CNContactDataSource> {

	CNContactDataSourceSafeDelegate* _delegate;
	CNContactFormatter* _contactFormatter;
	CNContactStore* _store;
	CNContactStoreFilter* _filter;
	NSArray* _allKeysToFetchForTransientContacts;
	id<CNCancelable> _searchCancelationToken;
	id<CNSchedulerProvider> _reloadSchedulerProvider;
	CNManualObservable* _reloadStream;
	NSMutableArray* _resultingContacts;

}

@property (nonatomic,retain) CNContactStore * store;                                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<CNCancelable> searchCancelationToken;                                      //@synthesize searchCancelationToken=_searchCancelationToken - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> reloadSchedulerProvider;                              //@synthesize reloadSchedulerProvider=_reloadSchedulerProvider - In the implementation block
@property (nonatomic,retain) CNManualObservable * reloadStream;                                            //@synthesize reloadStream=_reloadStream - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultingContacts;                                           //@synthesize resultingContacts=_resultingContacts - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter;                                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSArray * allKeysToFetchForTransientContacts;                                 //@synthesize allKeysToFetchForTransientContacts=_allKeysToFetchForTransientContacts - In the implementation block
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSString * meContactIdentifier; 
@property (nonatomic,readonly) NSDictionary * contactMatchInfos; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL canReload; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,readonly) CNContact * meContact; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                        //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(NSString *)displayName;
-(CNContactStoreFilter *)filter;
-(id)initWithStore:(id)arg1 ;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNContactStore *)store;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(NSArray *)sections;
-(void)reload;
-(NSArray *)indexSections;
-(NSArray *)contacts;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(BOOL)canReload;
-(id)indexPathForContact:(id)arg1 ;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(NSString *)meContactIdentifier;
-(void)setAllKeysToFetchForTransientContacts:(NSArray *)arg1 ;
-(BOOL)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
-(NSDictionary *)contactMatchInfos;
-(CNContactFilter *)effectiveFilter;
-(void)setResultingContacts:(NSMutableArray *)arg1 ;
-(void)setReloadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)setReloadStream:(CNManualObservable *)arg1 ;
-(CNManualObservable *)reloadStream;
-(id<CNSchedulerProvider>)reloadSchedulerProvider;
-(void)reloadWithRequest:(id)arg1 ;
-(NSMutableArray *)resultingContacts;
-(NSArray *)allKeysToFetchForTransientContacts;
-(void)invalidateSearch;
-(void)invalidateResults;
-(void)setSearchCancelationToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)searchCancelationToken;
@end

