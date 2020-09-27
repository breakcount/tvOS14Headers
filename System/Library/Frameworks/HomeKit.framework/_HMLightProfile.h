/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMAccessoryProfile.h>

@class HMLightProfileSettings, HMLightProfile;

@interface _HMLightProfile : _HMAccessoryProfile {

	HMLightProfileSettings* _settings;

}

@property (readonly) HMLightProfile * lightProfile; 
@property (retain) HMLightProfileSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(HMLightProfileSettings *)settings;
-(void)setSettings:(HMLightProfileSettings *)arg1 ;
-(void)_registerNotificationHandlers;
-(HMLightProfile *)lightProfile;
-(void)handleSettingsDidUpdate:(id)arg1 ;
-(id)initWithUUID:(id)arg1 services:(id)arg2 settings:(id)arg3 ;
@end
