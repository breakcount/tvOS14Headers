/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVCoreSettings/TVCSUserProfilesAnalyticsEvent.h>

@class NSString;

@interface TVCSUserProfilesAnalyticsUsersStateEvent : NSObject <TVCSUserProfilesAnalyticsEvent> {

	BOOL _haveSharediTunesAccounts;
	BOOL _haveHomeUsers;
	long long _usersCount;
	long long _guestUsersCount;
	long long _usersWithiCloudAccountCount;
	long long _usersWithiTunesAccountCount;
	long long _usersWithGameCenterAccountCount;
	long long _homeUsersCount;
	long long _homeUsersWithiCloudAccountCount;
	long long _homeUsersWithGameCenterAccountCount;

}

@property (assign,nonatomic) long long usersCount;                                       //@synthesize usersCount=_usersCount - In the implementation block
@property (assign,nonatomic) long long guestUsersCount;                                  //@synthesize guestUsersCount=_guestUsersCount - In the implementation block
@property (assign,nonatomic) long long usersWithiCloudAccountCount;                      //@synthesize usersWithiCloudAccountCount=_usersWithiCloudAccountCount - In the implementation block
@property (assign,nonatomic) long long usersWithiTunesAccountCount;                      //@synthesize usersWithiTunesAccountCount=_usersWithiTunesAccountCount - In the implementation block
@property (assign,nonatomic) long long usersWithGameCenterAccountCount;                  //@synthesize usersWithGameCenterAccountCount=_usersWithGameCenterAccountCount - In the implementation block
@property (assign,nonatomic) long long homeUsersCount;                                   //@synthesize homeUsersCount=_homeUsersCount - In the implementation block
@property (assign,nonatomic) long long homeUsersWithiCloudAccountCount;                  //@synthesize homeUsersWithiCloudAccountCount=_homeUsersWithiCloudAccountCount - In the implementation block
@property (assign,nonatomic) long long homeUsersWithGameCenterAccountCount;              //@synthesize homeUsersWithGameCenterAccountCount=_homeUsersWithGameCenterAccountCount - In the implementation block
@property (assign,nonatomic) BOOL haveSharediTunesAccounts;                              //@synthesize haveSharediTunesAccounts=_haveSharediTunesAccounts - In the implementation block
@property (assign,nonatomic) BOOL haveHomeUsers;                                         //@synthesize haveHomeUsers=_haveHomeUsers - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)eventName;
-(id)buildPayload;
-(long long)usersCount;
-(void)setUsersCount:(long long)arg1 ;
-(long long)guestUsersCount;
-(void)setGuestUsersCount:(long long)arg1 ;
-(long long)usersWithiCloudAccountCount;
-(void)setUsersWithiCloudAccountCount:(long long)arg1 ;
-(long long)usersWithiTunesAccountCount;
-(void)setUsersWithiTunesAccountCount:(long long)arg1 ;
-(long long)usersWithGameCenterAccountCount;
-(void)setUsersWithGameCenterAccountCount:(long long)arg1 ;
-(long long)homeUsersCount;
-(void)setHomeUsersCount:(long long)arg1 ;
-(long long)homeUsersWithiCloudAccountCount;
-(void)setHomeUsersWithiCloudAccountCount:(long long)arg1 ;
-(long long)homeUsersWithGameCenterAccountCount;
-(void)setHomeUsersWithGameCenterAccountCount:(long long)arg1 ;
-(BOOL)haveSharediTunesAccounts;
-(void)setHaveSharediTunesAccounts:(BOOL)arg1 ;
-(BOOL)haveHomeUsers;
-(void)setHaveHomeUsers:(BOOL)arg1 ;
@end

