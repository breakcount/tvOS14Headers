/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IOKService, NSObject, IOKNotificationPort, IOKInterestNotification;

@interface TSgPTPPort : NSObject {

	IOKService* _service;
	NSObject*<OS_dispatch_queue> _notificationsQueue;
	IOKNotificationPort* _notificationPort;
	IOKInterestNotification* _interestNotification;
	IOKInterestNotification* _terminationNotification;
	NSObject*<OS_dispatch_queue> _internalPropertyUpdateQueue;
	unsigned short _portNumber;
	int _portRole;
	unsigned long long _clockIdentifier;
	NSObject*<OS_dispatch_queue> _propertyUpdateQueue;

}

@property (assign,nonatomic) unsigned short portNumber;                                     //@synthesize portNumber=_portNumber - In the implementation block
@property (assign,nonatomic) int portRole;                                                  //@synthesize portRole=_portRole - In the implementation block
@property (assign,nonatomic) unsigned long long clockIdentifier;                            //@synthesize clockIdentifier=_clockIdentifier - In the implementation block
@property (nonatomic,readonly) IOKService * service; 
@property (nonatomic,readonly) int portType; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyUpdateQueue;              //@synthesize propertyUpdateQueue=_propertyUpdateQueue - In the implementation block
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)gPTPPortWithService:(id)arg1 ;
+(id)diagnosticInfoForService:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(IOKService *)service;
-(id)_notificationPort;
-(id)initWithService:(id)arg1 ;
-(int)portType;
-(id)_notificationQueue;
-(unsigned short)portNumber;
-(void)setPortNumber:(unsigned short)arg1 ;
-(unsigned short)_portNumber;
-(unsigned long long)clockIdentifier;
-(void)setClockIdentifier:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyUpdateQueue;
-(void)setPropertyUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)_clockIdentifier;
-(int)_portRole;
-(void)serviceTerminated;
-(BOOL)_commonInitWithService:(id)arg1 ;
-(int)portRole;
-(void)setPortRole:(int)arg1 ;
-(void)updateProperties;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(BOOL)startAutomaticPropertyUpdates;
-(BOOL)stopAutomaticPropertyUpdates;
@end

