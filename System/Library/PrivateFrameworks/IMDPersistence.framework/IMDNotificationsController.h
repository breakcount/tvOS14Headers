/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMDPersistence/IMDPersistence-Structs.h>
@class UNUserNotificationCenter, UNNotificationCategory, IMBusinessNameManager, CNContact, NSSet;

@interface IMDNotificationsController : NSObject {

	long long _lastAlertedMessageDate;
	long long _lastAlertedFailedMessageDate;
	UNUserNotificationCenter* _notificationCenter;
	UNUserNotificationCenter* _notificationCenterCatalyst;
	UNNotificationCategory* _incomingMessageNotificationCategory;
	UNNotificationCategory* _incomingFilesNotificationCategory;
	IMBusinessNameManager* _businessNameManager;
	CNContact* _meContact;
	NSSet* _meTokens;
	NSSet* _activeAccountAliases;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;                             //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * notificationCenterCatalyst;                     //@synthesize notificationCenterCatalyst=_notificationCenterCatalyst - In the implementation block
@property (nonatomic,retain) UNNotificationCategory * incomingMessageNotificationCategory;              //@synthesize incomingMessageNotificationCategory=_incomingMessageNotificationCategory - In the implementation block
@property (nonatomic,retain) UNNotificationCategory * incomingFilesNotificationCategory;                //@synthesize incomingFilesNotificationCategory=_incomingFilesNotificationCategory - In the implementation block
@property (nonatomic,retain) IMBusinessNameManager * businessNameManager;                               //@synthesize businessNameManager=_businessNameManager - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                     //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSSet * meTokens;                                                          //@synthesize meTokens=_meTokens - In the implementation block
@property (nonatomic,retain) NSSet * activeAccountAliases;                                              //@synthesize activeAccountAliases=_activeAccountAliases - In the implementation block
@property (assign) long long lastAlertedMessageDate; 
@property (assign) long long lastAlertedFailedMessageDate; 
+(id)sharedInstance;
+(id)_addressForHandle:(IMDHandleRecordStructRef)arg1 ;
+(id)_truncateNameIfNeeded:(id)arg1 ;
+(int)validateAlertCount:(int)arg1 ;
+(int)reminderAlertCount;
+(id)_IMDCoreSpotlightCNContactForAddress:(id)arg1 ;
+(id)_uncanonicalizedAddressForHandle:(IMDHandleRecordStructRef)arg1 ;
+(id)_addressBookNameForAddress:(id)arg1 orContact:(id)arg2 ;
+(id)_countryCodeForHandle:(IMDHandleRecordStructRef)arg1 ;
+(id)_formattedDisplayStringForAddress:(id)arg1 countryCode:(id)arg2 ;
+(id)_displayNameForHandle:(IMDHandleRecordStructRef)arg1 andContact:(id)arg2 suggestionProvider:(/*^block*/id)arg3 ;
+(id)_displayNameForBusinessChatAddress:(id)arg1 businessNameManager:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)allTokens;
-(UNUserNotificationCenter *)notificationCenter;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(void)_setupFirstLoad;
-(void)_setUpNotificationCenter;
-(void)_setupBusinessNameManager;
-(void)_setupMeContactAndTokens;
-(void)setBusinessNameManager:(IMBusinessNameManager *)arg1 ;
-(id)_makeNotificationCategories;
-(id)madridCategoryWithIdentifier:(id)arg1 actions:(id)arg2 ;
-(id)madridGroupCategoryWithIdentifier:(id)arg1 actions:(id)arg2 ;
-(id)SMSCategoryWithIdentifier:(id)arg1 actions:(id)arg2 ;
-(void)setMeTokens:(NSSet *)arg1 ;
-(BOOL)_hasMigratedPreferences;
-(id)_legacyDatePreference;
-(long long)_legacyRowIDPreference;
-(long long)_legacyDateForMessageWithRowIDPreference:(long long)arg1 ;
-(void)_setLastPostedDateFromMigration:(id)arg1 ;
-(void)_setHasMigratedPreferenceTrue;
-(void)_migrateLastedPostedPreferencesIfNeeded;
-(void)_storeLastAlertedMessageDate:(long long)arg1 ;
-(void)setLastAlertedMessageDate:(long long)arg1 ;
-(void)_storeLastAlertedFailedMessageDate:(long long)arg1 ;
-(void)setLastAlertedFailedMessageDate:(long long)arg1 ;
-(id)_messages:(id)arg1 newerThanDate:(long long)arg2 ;
-(id)_messagesSortedByDate:(id)arg1 ;
-(id)_generateNotificationRequestForMessageRecord:(IMDMessageRecordStruct*)arg1 isUrgentMessage:(BOOL)arg2 isCarouselUITriggered:(BOOL)arg3 isMostActive:(BOOL)arg4 shouldAdvanceLastAlertedMessageDate:(BOOL*)arg5 ;
-(void)advanceLastAlertedMessageDate:(long long)arg1 ;
-(void)_shouldPostNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_generateNotificationRequestForDeliveryError:(IMDMessageRecordStruct*)arg1 isCarouselUITriggered:(BOOL)arg2 ;
-(void)advanceLastAlertedFailedMessageDate:(long long)arg1 ;
-(long long)lastAlertedMessageDate;
-(long long)lastAlertedFailedMessageDate;
-(void)_registerUserNotificationsForFailedDeliveryMessageRecords:(id)arg1 isCarouselUITriggered:(BOOL)arg2 ;
-(void)_registerUserNotificationsForMessageRecords:(id)arg1 newerThanDate:(long long)arg2 areUrgentMessages:(BOOL)arg3 isCarouselUITriggered:(BOOL)arg4 isMostActiveDevice:(BOOL)arg5 ;
-(void)_postNotifications;
-(void)__postNotificationsIsMostActiveDevice:(BOOL)arg1 ;
-(void)_isMostActiveDeviceWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setActiveAccountAliases:(NSSet *)arg1 ;
-(void)postNotificationsWithContext:(id)arg1 ;
-(id)defaultsSharedInstance;
-(BOOL)_messageIsBusiness:(id)arg1 ;
-(BOOL)_amIMentionedInMessage:(id)arg1 ;
-(BOOL)_isRaiseGestureEnabled;
-(id)_displayNameForHandle:(IMDHandleRecordStructRef)arg1 andContact:(id)arg2 ;
-(id)_displayNameForBusinessChatAddress:(id)arg1 ;
-(id)_previewFileURLForTransferURL:(id)arg1 utiType:(id)arg2 ;
-(BOOL)_chatHasDNDSet:(id)arg1 ;
-(BOOL)_handleIsSpokenMessageWhitelisted:(IMDHandleRecordStructRef)arg1 chat:(id)arg2 message:(id)arg3 ;
-(void)_proceedMostActiveDevice:(BOOL)arg1 isBlockCalled:(BOOL*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldUseOriginalURLForUTIType:(id)arg1 ;
-(unsigned long long)_getMessagesSpokenWhitelistLevel:(BOOL*)arg1 ;
-(BOOL)_messageIsFromKnownContact:(id)arg1 ;
-(BOOL)_messageIsFromFavorite:(id)arg1 ;
-(id)_lastTwoMessagesForChat:(IMDChatRecordStruct*)arg1 ;
-(id)_suggestedDisplayNameForAddress:(id)arg1 ;
-(id)_nicknameDisplayNameForID:(id)arg1 ;
-(id)_nicknameInfoForAddress:(id)arg1 ;
-(IMBusinessNameManager *)businessNameManager;
-(BOOL)_filteringSettingConfirmed;
-(BOOL)_deviceIsElgibileToBeForcedIntoFilteringUnknownSenders;
-(BOOL)_isUnknownSenderFilteringOn;
-(BOOL)_isSpamFilteringOn;
-(BOOL)_notificationIsFromAFilteredSender:(id)arg1 messageDictionary:(id)arg2 ;
-(NSSet *)meTokens;
-(NSSet *)activeAccountAliases;
-(BOOL)areMyTokens:(id)arg1 inMessage:(id)arg2 ;
-(BOOL)_overrideDNDForMessagesAddressingMe;
-(BOOL)_haveMigrated;
-(id)_messageDictionaryForMessageRecord:(IMDMessageRecordStruct*)arg1 copyThreadOriginator:(BOOL)arg2 ;
-(id)_chatDictionaryForMessageRecord:(IMDMessageRecordStruct*)arg1 ;
-(BOOL)_messageShouldBeSilentlyDeliveredForBusinessChat:(id)arg1 ;
-(BOOL)_shouldOverrideChatSilencingBecauseImMentioned:(id)arg1 ;
-(BOOL)_messageShouldBeSpoken:(id)arg1 chatDictionary:(id)arg2 isMostActive:(BOOL)arg3 ;
-(BOOL)_shouldPostNotificationForChat:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateBasicNotificationIdentifyingContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 isCarouselUITriggered:(BOOL)arg4 ;
-(void)_populateBodyForNotificationContent:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateTitleForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 ;
-(void)_populateSubtitleForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 ;
-(void)_populateSoundAndDisplayActivationForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 isMostActive:(BOOL)arg4 ;
-(void)_populateIgnoresDoNotDisturb:(id)arg1 messageDictionary:(id)arg2 isUrgentMessage:(BOOL)arg3 ;
-(void)_populateAttachmentsForNotificationContent:(id)arg1 messageDictionary:(id)arg2 messageRecord:(IMDMessageRecordStruct*)arg3 ;
-(void)_populateUserInfoOnContentForWatch:(id)arg1 messageDictionary:(id)arg2 chatDictionary:(id)arg3 isCarouselUITriggered:(BOOL)arg4 ;
-(void)_populateNotificationCategoryContent:(id)arg1 messageDictionary:(id)arg2 chatDictionary:(id)arg3 ;
-(void)_populateUserInfoForMessageContent:(id)arg1 messageDictionary:(id)arg2 messageIsAddressedToMe:(BOOL)arg3 ;
-(void)_populateRealertCountForNotificationContent:(id)arg1 ;
-(id)_messageDictionaryForMessageRecord:(IMDMessageRecordStruct*)arg1 ;
-(void)_populateBodyAndTitleForSendReceivedAsJunkNotificationContent:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateBodyAndTitleForSendFailedNotificationContent:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_setContactInMessageDictionary:(IMDHandleRecordStructRef)arg1 messageDictionary:(id)arg2 ;
-(BOOL)_chatHasDNDSetBasedOnChatGUID:(id)arg1 chatIdentifier:(id)arg2 groupID:(id)arg3 handles:(id)arg4 lastAddressedHandleString:(id)arg5 style:(long long)arg6 ;
-(id)_lastMessageTimeForChat:(IMDChatRecordStruct*)arg1 ;
-(BOOL)_chatHasDNDSetBasedOnDNDIdentifier:(id)arg1 ;
-(id)_groupHashForHandles:(id)arg1 lastAddressedHandle:(id)arg2 ;
-(void)retractNotificationsForReadMessages:(id)arg1 ;
-(void)repostNotificationsFromFirstUnlockWithContext:(id)arg1 ;
-(void)postUrgentNotificationForMessages:(id)arg1 withContext:(id)arg2 ;
-(void)postFirstUnlockMessage:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_previewFileURLForTransferURL:(id)arg1 ;
-(unsigned long long)_getSpokenMessageWhitelistLevelVersion;
-(void)_setSpokenMessageWhitelistLevelVersion:(unsigned long long)arg1 ;
-(void)_setMessagesSpokenWhitelistLevelInPreferences:(unsigned long long)arg1 ;
-(void)_setUpSuggestionService;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(UNUserNotificationCenter *)notificationCenterCatalyst;
-(void)setNotificationCenterCatalyst:(UNUserNotificationCenter *)arg1 ;
-(UNNotificationCategory *)incomingMessageNotificationCategory;
-(void)setIncomingMessageNotificationCategory:(UNNotificationCategory *)arg1 ;
-(UNNotificationCategory *)incomingFilesNotificationCategory;
-(void)setIncomingFilesNotificationCategory:(UNNotificationCategory *)arg1 ;
@end

