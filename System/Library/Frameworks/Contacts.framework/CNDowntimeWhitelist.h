/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDowntimeWhitelistContainerFetching, NSObject;
@class CNContactStore, NSNotificationCenter;

@interface CNDowntimeWhitelist : NSObject {

	id<CNDowntimeWhitelistContainerFetching> _containerFetcher;
	CNContactStore* _contactStore;
	NSNotificationCenter* _notificationCenter;
	id<NSObject> _contactStoreDidChangeNotificationToken;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                          //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<NSObject> contactStoreDidChangeNotificationToken;                    //@synthesize contactStoreDidChangeNotificationToken=_contactStoreDidChangeNotificationToken - In the implementation block
@property (nonatomic,readonly) id<CNDowntimeWhitelistContainerFetching> containerFetcher;              //@synthesize containerFetcher=_containerFetcher - In the implementation block
+(id)os_log;
+(BOOL)isWhitelistedContact:(id)arg1 ;
+(BOOL)anyContactIsWhitelisted:(id)arg1 ;
+(id)keyDescriptor;
-(id)init;
-(void)dealloc;
-(id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3 ;
-(void)beginObservingChangeNotifications;
-(CNContactStore *)contactStore;
-(NSNotificationCenter *)notificationCenter;
-(id)initWithContactStore:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 notificationCenter:(id)arg2 ;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg1 error:(id*)arg2 ;
-(id)requestForContactsInPermittedContainersWithHandles:(id)arg1 ;
-(BOOL)isHandleStringWhitelisted:(id)arg1 error:(id*)arg2 ;
-(id)allWhitelistedHandleStrings:(id*)arg1 ;
-(id)allWhitelistedContacts:(id*)arg1 ;
-(id)requestForContactsInPermittedContainers;
-(id<CNDowntimeWhitelistContainerFetching>)containerFetcher;
-(id)requestForNonUnifiedContacts;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg1 ;
-(BOOL)isHandleStringWhitelisted:(id)arg1 ;
-(id)allWhitelistedHandleStrings;
-(void)setTestContainerFetcher:(id)arg1 ;
-(id<NSObject>)contactStoreDidChangeNotificationToken;
@end

