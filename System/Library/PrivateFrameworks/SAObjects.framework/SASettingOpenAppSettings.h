/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingOpenSettings.h>
#import <SAObjects/SASettingAppSettingCommand.h>

@class NSString, NSArray;

@interface SASettingOpenAppSettings : SASettingOpenSettings <SASettingAppSettingCommand>

@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)openAppSettings;
+(id)openAppSettingsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appWithSettingsId;
-(void)setAppWithSettingsId:(NSString *)arg1 ;
@end

