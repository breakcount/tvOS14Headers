/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationAction.h>

@class NSString;

@interface UNTextInputNotificationAction : UNNotificationAction

@property (nonatomic,copy,readonly) NSString * textInputButtonTitle; 
@property (nonatomic,copy,readonly) NSString * textInputPlaceholder; 
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

