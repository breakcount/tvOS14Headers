/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface ICMusicAccountNotificationsSettingsResponse : NSObject {

	NSDictionary* _responseDictionary;
	BOOL _wasSuccessful;

}

@property (nonatomic,readonly) NSArray * settingsSwitches; 
@property (nonatomic,readonly) BOOL wasSuccessful;                      //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
+(id)createResponseBodyWithSwitches:(id)arg1 ;
-(BOOL)wasSuccessful;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)settingsSwitches;
@end

