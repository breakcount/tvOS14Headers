/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity {

	SSPersistentCache* _persistentCache;

}
+(id)databaseTable;
+(id)allPropertyKeys;
+(unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2 ;
-(void)setPersistentCache:(id)arg1 ;
-(id)dataBlob:(BOOL*)arg1 ;
@end

