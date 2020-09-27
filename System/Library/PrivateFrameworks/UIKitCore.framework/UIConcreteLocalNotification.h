/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILocalNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSData;

@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding> {

	NSDate* fireDate;
	NSTimeZone* timeZone;
	unsigned long long repeatInterval;
	NSCalendar* repeatCalendar;
	CLRegion* region;
	BOOL regionTriggersOnce;
	NSString* alertBody;
	BOOL hasAction;
	NSString* alertAction;
	NSString* alertLaunchImage;
	NSString* alertTitle;
	NSString* soundName;
	long long applicationIconBadgeNumber;
	NSData* userInfoData;
	NSString* category;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)userInfo;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)fireDate;
-(void)setFireDate:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)timeZone;
-(void)setUserInfo:(id)arg1 ;
-(id)category;
-(void)setCategory:(id)arg1 ;
-(void)validate;
-(unsigned long long)repeatInterval;
-(id)region;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(void)setRegion:(id)arg1 ;
-(id)repeatCalendar;
-(void)setRepeatCalendar:(id)arg1 ;
-(void)setRepeatInterval:(unsigned long long)arg1 ;
-(void)setAlertBody:(id)arg1 ;
-(void)setAlertLaunchImage:(id)arg1 ;
-(void)setSoundName:(id)arg1 ;
-(id)alertBody;
-(id)alertLaunchImage;
-(id)soundName;
-(id)alertAction;
-(id)alertTitle;
-(void)setAlertTitle:(id)arg1 ;
-(BOOL)isTriggeredByRegion;
-(BOOL)regionTriggersOnce;
-(long long)applicationIconBadgeNumber;
-(BOOL)isTriggeredByDate;
-(void)setAlertAction:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(long long)arg1 ;
-(void)_setUserInfoData:(id)arg1 ;
-(void)setRegionTriggersOnce:(BOOL)arg1 ;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(long long)compareFireDates:(id)arg1 ;
@end

