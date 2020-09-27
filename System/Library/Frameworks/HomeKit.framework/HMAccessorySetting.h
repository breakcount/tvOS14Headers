/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMSetting.h>
#import <libobjc.A.dylib/_HMAccesorySettingDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class _HMAccessorySetting, HMAccessorySettingGroup, NSString, NSUUID;

@interface HMAccessorySetting : HMSetting <_HMAccesorySettingDelegate, HMFLogging> {

	_HMAccessorySetting* _internal;
	HMAccessorySettingGroup* _group;

}

@property (readonly) _HMAccessorySetting * internal;                 //@synthesize internal=_internal - In the implementation block
@property (__weak) HMAccessorySettingGroup * group;                  //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (readonly) Class valueClass; 
@property (copy,readonly) NSUUID * identifier; 
@property (getter=isReflected,readonly) BOOL reflected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
+(id)settingForInternal:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(NSUUID *)identifier;
-(void)setGroup:(HMAccessorySettingGroup *)arg1 ;
-(id)value;
-(NSString *)keyPath;
-(HMAccessorySettingGroup *)group;
-(_HMAccessorySetting *)internal;
-(Class)valueClass;
-(BOOL)isWritable;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)logIdentifier;
-(id)initWithInternal:(id)arg1 ;
-(BOOL)isReflected;
-(void)updateReflected:(BOOL)arg1 ;
-(void)_settingWillUpdateValue:(id)arg1 ;
-(void)_settingDidUpdateValue:(id)arg1 ;
-(void)settingWillUpdateReflected;
-(void)settingDidUpdateReflected;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
@end

