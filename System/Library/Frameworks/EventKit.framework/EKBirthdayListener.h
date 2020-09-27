/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalContactsProviderDelegate.h>

@protocol OS_dispatch_queue;
@class CalLimitingQueue, NSObject;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {

	CalLimitingQueue* _updateQueue;
	NSObject*<OS_dispatch_queue> _updateJobQueue;
	BOOL _needsReset;

}
+(id)sharedListener;
+(BOOL)areBirthdaysEnabled;
+(id)eventStoreProvider;
-(void)reset;
-(void)contactsReset;
-(void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3 ;
-(void)addBirthdayCalendars;
-(void)disableBirthdayCalendars;
-(id)eventStore;
-(id)initSingleton;
-(id)birthdayCalendarsInStore:(id)arg1 ;
-(void)resetAllBirthdaysInStore:(id)arg1 ;
-(void)disableBirthdayCalendarsInStore:(id)arg1 ;
-(void)_localeChanged;
-(void)checkForFailures;
-(void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4 ;
-(id)birthdayCalendarsCreateIfNeeded:(BOOL)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(BOOL)arg5 ;
-(id)allContactsWithBirthdays;
-(void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3 ;
@end

