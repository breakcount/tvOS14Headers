/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSCKNotificationInfo : NSObject {

	BOOL _shouldSendContentAvailable;
	NSString* _alertLocalizationKey;

}

@property (nonatomic,copy) NSString * alertLocalizationKey;                //@synthesize alertLocalizationKey=_alertLocalizationKey - In the implementation block
@property (assign,nonatomic) BOOL shouldSendContentAvailable;              //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setShouldSendContentAvailable:(BOOL)arg1 ;
-(void)setAlertLocalizationKey:(NSString *)arg1 ;
-(NSString *)alertLocalizationKey;
-(BOOL)shouldSendContentAvailable;
@end

