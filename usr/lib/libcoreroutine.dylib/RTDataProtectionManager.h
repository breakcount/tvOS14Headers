/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class RTDarwinNotificationHelper, RTKeybagMonitor;

@interface RTDataProtectionManager : RTNotifier {

	BOOL _unlockedSinceBoot;
	RTDarwinNotificationHelper* _notificationHelper;
	RTKeybagMonitor* _keybagMonitor;
	long long _encryptedDataAvailability;

}

@property (nonatomic,retain) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
@property (nonatomic,retain) RTKeybagMonitor * keybagMonitor;                              //@synthesize keybagMonitor=_keybagMonitor - In the implementation block
@property (assign,nonatomic) long long encryptedDataAvailability;                          //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL unlockedSinceBoot;                                       //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
+(id)dataProtectionLockStateToString:(long long)arg1 ;
+(id)encryptedDataAvailabilityToString:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)unlockedSinceBoot;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithKeybagMonitor:(id)arg1 notificationHelper:(id)arg2 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(RTKeybagMonitor *)keybagMonitor;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)handleKeybagLockStatusChange:(long long)arg1 ;
-(void)handleUnlockedSinceBoot;
-(void)setKeybagMonitor:(RTKeybagMonitor *)arg1 ;
@end

