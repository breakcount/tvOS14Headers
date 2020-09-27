/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol NSObject;
@class GEOServiceURLsActiveTileGroupMigrator, GEOResourceManifestConfiguration, GEOTileGroup, GEOResources, GEOActiveTileGroup, GEODataSetDescription, GEOReportedProgress, GEOActiveTileGroupMigrationTaskOptions, NSProgress, NSString;

@interface _GEOServiceURLsActiveTileGroupMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {

	GEOServiceURLsActiveTileGroupMigrator* _migrator;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOTileGroup* _newTileGroup;
	GEOResources* _resourceManifest;
	GEOActiveTileGroup* _oldTileGroup;
	GEODataSetDescription* _dataSetDescription;
	GEOReportedProgress* _progress;
	GEOActiveTileGroupMigrationTaskOptions* _options;
	id<NSObject> _transaction;

}

@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction;                                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(NSProgress *)progress;
-(id<NSObject>)transaction;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)populateTileGroup:(id)arg1 ;
-(void)removeOldData:(id)arg1 ;
-(long long)estimatedWeight;
-(void)setTransaction:(id<NSObject>)arg1 ;
-(id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6 ;
@end

