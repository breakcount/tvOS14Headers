//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DMDActivationPredicateObserverDelegate-Protocol.h"
#import "DMDEventStreamDispatcherRegistration-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol DMDActivationPredicateObserverManagerDelegate;

@interface DMDActivationPredicateObserverManager : NSObject <DMDActivationPredicateObserverDelegate, DMDEventStreamDispatcherRegistration>
{
    id <DMDActivationPredicateObserverManagerDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_activationPredicateObserversByIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100011220
@property(retain, nonatomic) NSMutableDictionary *activationPredicateObserversByIdentifier; // @synthesize activationPredicateObserversByIdentifier=_activationPredicateObserversByIdentifier;
@property(nonatomic) __weak id <DMDActivationPredicateObserverManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleNotifyMatchingNotificationWithName:(id)arg1;	// IMP=0x00000001000110a8
- (void)handleAlarmWithIdentifier:(id)arg1;	// IMP=0x0000000100010f70
@property(readonly, nonatomic) NSArray *notifyMatchingNotifications;
@property(readonly, nonatomic) _Bool alarms;
- (id)_subPredicateObserversForCompoundSubPredicates:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x0000000100010cdc
- (id)_predicateObserverForPredicate:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x00000001000108ac
- (void)_updateAllActivationPredicateObserverRegistrations;	// IMP=0x0000000100010800
- (void)_reportChangeToObserver:(id)arg1;	// IMP=0x000000010001066c
- (void)activationPredicateObserverDidTrigger:(id)arg1;	// IMP=0x0000000100010660
- (id)activationPredicateObserverForIdentifier:(id)arg1;	// IMP=0x000000010001059c
- (void)removeActivationPredicateObserverWithUniqueIdentifier:(id)arg1;	// IMP=0x000000010001048c
- (id)addActivationPredicateObserverForPredicate:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x0000000100010340
- (id)init;	// IMP=0x00000001000102dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *distributedNotificationNames;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

