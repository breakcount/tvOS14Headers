/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AskPermission/AskPermission-Structs.h>
@interface APDefaults : NSObject
+(void)_setValue:(id)arg1 forKey:(id)arg2 ;
+(id)_valueForKey:(id)arg1 ;
+(void)_setInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 domain:(CFStringRef)arg3 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(CFStringRef)arg3 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(id)_valueForKey:(id)arg1 domain:(CFStringRef)arg2 ;
+(BOOL)APSDevelopmentEnvironment;
+(BOOL)isApprover;
+(BOOL)isRequester;
+(void)setAPSDevelopmentEnvironment:(BOOL)arg1 ;
+(void)setIsApprover:(BOOL)arg1 ;
+(void)setIsRequester:(BOOL)arg1 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
@end
