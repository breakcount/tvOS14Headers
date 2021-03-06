/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {

	SSXPCConnection* _connection;
	long long _manifestType;

}

@property (readonly) long long manifestType; 
-(id)init;
-(void)dealloc;
-(id)initWithManifestType:(long long)arg1 ;
-(void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)manifestType;
-(void)rebuildManifestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeItemWithAssetPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

