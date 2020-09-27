/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, NSArray;

@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject {

	NSString* _loadingTileGroupUniqueIdentifier;
	NSArray* _pendingTileGroupMigrationTasks;
	id<NSObject> _transaction;

}

@property (nonatomic,readonly) NSString * loadingTileGroupUniqueIdentifier;              //@synthesize loadingTileGroupUniqueIdentifier=_loadingTileGroupUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * pendingTileGroupMigrationTasks;                     //@synthesize pendingTileGroupMigrationTasks=_pendingTileGroupMigrationTasks - In the implementation block
-(id)init;
-(id)initWithTileGroupUniqueIdentifier:(id)arg1 transactionName:(id)arg2 ;
-(NSString *)loadingTileGroupUniqueIdentifier;
-(NSArray *)pendingTileGroupMigrationTasks;
-(void)setPendingTileGroupMigrationTasks:(NSArray *)arg1 ;
@end

