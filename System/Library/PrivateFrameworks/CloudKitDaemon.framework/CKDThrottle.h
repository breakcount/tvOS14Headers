/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKThrottle.h>

@interface CKDThrottle : CKThrottle
+(void)initialize;
+(BOOL)addThrottle:(id)arg1 ;
+(void)throttleWillBeRemoved:(id)arg1 ;
+(void)invalidateAdopterThrottles;
-(id)initWithDefaultsKey:(id)arg1 ;
-(void)throttleDataWasChanged;
-(void)removeDefaultsData;
-(void)saveToDefaults;
@end

