/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactChangesObserver;
@class NSArray, CNContact;

@interface CNContactChangesObserverProxy : NSObject {

	BOOL _unify;
	id<CNContactChangesObserver> _observer;
	NSArray* _keysToFetch;
	CNContact* _contactSnapshot;

}
@end

