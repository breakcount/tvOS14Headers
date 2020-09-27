/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMEventListener.h>

@class NSString;

@interface IMNotificationCenterEventListener : IMEventListener {

	NSString* _registeredNotificationName;
	NSString* _notificationName;
	id _notificationObject;

}

@property (nonatomic,readonly) NSString * registeredNotificationName;              //@synthesize registeredNotificationName=_registeredNotificationName - In the implementation block
@property (readonly) BOOL isRegisteredForNotification; 
@property (copy,readonly) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
@property (__weak,readonly) id notificationObject;                                 //@synthesize notificationObject=_notificationObject - In the implementation block
+(id)eventListenerForNotificationName:(id)arg1 object:(id)arg2 ;
+(id)eventListenerForNotificationName:(id)arg1 ;
-(void)dealloc;
-(void)_notification:(id)arg1 ;
-(BOOL)isListening;
-(NSString *)notificationName;
-(id)notificationObject;
-(void)willStartListening;
-(void)willStopListening;
-(void)willReset;
-(void)registerForNotificationName:(id)arg1 object:(id)arg2 ;
-(void)registerForNotificationName:(id)arg1 ;
-(BOOL)isRegisteredForNotification;
-(NSString *)registeredNotificationName;
@end

