/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSettingMetadata;


@protocol INGetSettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (assign,nonatomic) long long confirmationValue; 
@required
-(id)init;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;
-(long long)confirmationValue;
-(void)setConfirmationValue:(long long)arg1;

@end

