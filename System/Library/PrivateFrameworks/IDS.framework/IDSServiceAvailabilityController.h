/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_postNotificationForService:(id)arg1 availability:(long long)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(BOOL)_isValidServiceType:(id)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(id)arg1 create:(BOOL)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
-(BOOL)hasListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)addListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(id)arg2 ;
@end

