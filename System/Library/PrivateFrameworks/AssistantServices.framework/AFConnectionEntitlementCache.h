/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _bundleIDToPIDMap;

}
+(id)sharedCache;
-(id)init;
-(BOOL)hasEntitlement:(id)arg1 forPID:(int)arg2 ;
-(void)cacheEntitlement:(id)arg1 forPID:(int)arg2 bundleID:(id)arg3 ;
@end

