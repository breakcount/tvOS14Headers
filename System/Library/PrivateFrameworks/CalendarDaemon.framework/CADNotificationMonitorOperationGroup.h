/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADNotificationMonitorInterface.h>

@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(/*^block*/id)arg1 ;
-(void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetResourceChanges:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetInviteReplyNotifications:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:(BOOL)arg1 calculateEarliestExpirationDate:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg1 excludingDelegateSources:(BOOL)arg2 filteredByShowsNotificationsFlag:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseGetInboxRepliedSectionItems:(/*^block*/id)arg1 ;
-(void)CADEvent:(id)arg1 setAlertedWithError:(/*^block*/id)arg2 ;
-(void)CADCalendar:(id)arg1 setAlertedWithError:(/*^block*/id)arg2 ;
-(void)CADResourceChange:(id)arg1 setAlertedWithError:(/*^block*/id)arg2 ;
-(void)CADInviteReplyNotification:(id)arg1 setAlertedWithError:(/*^block*/id)arg2 ;
-(void)CADEventSetInvitationStatus:(int)arg1 forEvent:(id)arg2 error:(/*^block*/id)arg3 ;
@end

