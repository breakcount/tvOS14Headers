/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVCoreSettings/TVCSUserProfilesAnalyticsEvent.h>

@class NSString;

@interface TVCSUserProfilesAnalyticsEditUserServiceEvent : NSObject <TVCSUserProfilesAnalyticsEvent> {

	BOOL _isHomeUser;
	long long _serviceType;
	long long _actionType;

}

@property (assign,nonatomic) long long serviceType;                 //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) long long actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL isHomeUser;                       //@synthesize isHomeUser=_isHomeUser - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSString *)eventName;
-(id)buildPayload;
-(BOOL)isHomeUser;
-(void)setIsHomeUser:(BOOL)arg1 ;
-(id)_serviceTypeString;
@end

