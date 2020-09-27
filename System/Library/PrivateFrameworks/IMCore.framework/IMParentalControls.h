/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMParentalControls : NSObject {

	BOOL _shouldPostNotifications;
	BOOL _active;
	BOOL _disableAV;
	BOOL _forceChatLogging;
	NSMutableDictionary* _parentalControls;

}

@property (nonatomic,readonly) NSMutableDictionary * _parentalControls;              //@synthesize parentalControls=_parentalControls - In the implementation block
@property (nonatomic,readonly) BOOL _disableAV;                                      //@synthesize disableAV=_disableAV - In the implementation block
@property (nonatomic,readonly) BOOL _forceChatLogging;                               //@synthesize forceChatLogging=_forceChatLogging - In the implementation block
@property (nonatomic,readonly) BOOL active;                                          //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL disableAV; 
@property (nonatomic,readonly) BOOL forceChatLogging; 
@property (assign,nonatomic) BOOL shouldPostNotifications;                           //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
+(id)objectForKey:(id)arg1 ;
+(id)standardControls;
-(id)init;
-(void)dealloc;
-(BOOL)active;
-(BOOL)disableService:(id)arg1 ;
-(BOOL)disableAccount:(id)arg1 ;
-(BOOL)okToConnectAccount:(id)arg1 ;
-(void)setShouldPostNotifications:(BOOL)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(BOOL)disableAV;
-(BOOL)forceChatLogging;
-(id)whitelistForService:(id)arg1 ;
-(BOOL)forceWhitelistForService:(id)arg1 ;
-(BOOL)accountIsEnabled:(id)arg1 ;
-(id)whitelistForAccount:(id)arg1 ;
-(BOOL)forceWhitelistForAccount:(id)arg1 ;
-(BOOL)accountHasWhitelist:(id)arg1 ;
-(BOOL)shouldPostNotifications;
-(NSMutableDictionary *)_parentalControls;
-(BOOL)_disableAV;
-(BOOL)_forceChatLogging;
@end

