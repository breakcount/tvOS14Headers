/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIUserNotificationAction.h>

@class NSString, NSDictionary;

@interface UIMutableUserNotificationAction : UIUserNotificationAction

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned long long behavior; 
@property (nonatomic,copy) NSDictionary * parameters; 
@property (assign,nonatomic) unsigned long long activationMode; 
@property (assign,getter=isAuthenticationRequired,nonatomic) BOOL authenticationRequired; 
@property (assign,getter=isDestructive,nonatomic) BOOL destructive; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

