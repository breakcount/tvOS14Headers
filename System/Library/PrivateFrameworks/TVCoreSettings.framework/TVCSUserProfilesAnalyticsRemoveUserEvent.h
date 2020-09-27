/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVCoreSettings/TVCSUserProfilesAnalyticsEvent.h>

@class NSString;

@interface TVCSUserProfilesAnalyticsRemoveUserEvent : NSObject <TVCSUserProfilesAnalyticsEvent> {

	long long _actionType;
	long long _userType;

}

@property (assign,nonatomic) long long actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) long long userType;                    //@synthesize userType=_userType - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSString *)eventName;
-(long long)userType;
-(void)setUserType:(long long)arg1 ;
-(id)buildPayload;
-(id)_actionString;
@end
