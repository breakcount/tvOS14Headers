/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics
+(id)databasePath;
+(id)logger;
-(void)logSuccessForEvent:(id)arg1 ;
-(void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(void)noteEvent:(id)arg1 ;
-(id)dateOfLastSuccessForEvent:(id)arg1 ;
@end

