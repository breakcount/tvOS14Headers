/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AMSMediaToken, AMSMediaTokenServiceKeychainStore, AMSMediaTokenServiceUserDefaultsStore;

@interface AMSMediaTokenServiceStore : NSObject {

	NSString* _clientIdentifier;
	NSString* _keychainAccessGroup;
	AMSMediaToken* _memoryMediaToken;
	AMSMediaTokenServiceKeychainStore* _keychainStore;
	AMSMediaTokenServiceUserDefaultsStore* _userDefaultsStore;

}

@property (nonatomic,retain) AMSMediaToken * memoryMediaToken;                                       //@synthesize memoryMediaToken=_memoryMediaToken - In the implementation block
@property (nonatomic,retain) AMSMediaTokenServiceKeychainStore * keychainStore;                      //@synthesize keychainStore=_keychainStore - In the implementation block
@property (nonatomic,retain) AMSMediaTokenServiceUserDefaultsStore * userDefaultsStore;              //@synthesize userDefaultsStore=_userDefaultsStore - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                                          //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup;                                         //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
-(void)dealloc;
-(NSString *)clientIdentifier;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(NSString *)keychainAccessGroup;
-(id)_keychainAccessGroup;
-(AMSMediaTokenServiceKeychainStore *)keychainStore;
-(void)setKeychainStore:(AMSMediaTokenServiceKeychainStore *)arg1 ;
-(void)storeToken:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 ;
-(id)retrieveToken;
-(void)_setupKeychainNotifications;
-(void)_teardownKeychainNotifications;
-(void)setMemoryMediaToken:(AMSMediaToken *)arg1 ;
-(AMSMediaToken *)memoryMediaToken;
-(AMSMediaTokenServiceUserDefaultsStore *)userDefaultsStore;
-(void)_postMediaTokenChangedNotification;
-(BOOL)_hasAppleGroupEnabled;
-(id)_mediaTokenChangedNotificationName;
-(void)_mediaTokenChanged;
-(void)setUserDefaultsStore:(AMSMediaTokenServiceUserDefaultsStore *)arg1 ;
@end

