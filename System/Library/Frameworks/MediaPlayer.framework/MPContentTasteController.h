/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, ICUserIdentity;

@interface MPContentTasteController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _pendingUpdateRecordByPlaylistGlobalID;
	NSMutableDictionary* _pendingUpdateRecordByStoreAdamID;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,readonly) ICUserIdentity * userIdentity;              //@synthesize userIdentity=_userIdentity - In the implementation block
+(id)controllers;
+(id)sharedController;
+(id)globalSerialQueue;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 ;
+(id)controllerWithUserIdentity:(id)arg1 ;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3 ;
+(id)_tasteControllerWithUserIdentity:(id)arg1 isSingleton:(BOOL)arg2 createIfRequired:(BOOL)arg3 ;
-(id)init;
-(id)_initWithUserIdentity:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(id)_mediaLibrary;
-(void)setTasteType:(long long)arg1 forModel:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setTasteType:(long long)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setTasteType:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setTasteType:(long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)tasteTypeForModel:(id)arg1 ;
-(long long)tasteTypeForMediaEntity:(id)arg1 ;
-(long long)tasteTypeForPlaylistGlobalID:(id)arg1 ;
-(long long)tasteTypeForStoreAdamID:(long long)arg1 ;
-(void)_libraryPathDidChangeForTasteController:(id)arg1 ;
-(void)_deviceMediaLibraryDidChangeNotification:(id)arg1 ;
-(id)_libraryEntityForModel:(id)arg1 ;
-(id)_libraryPlaylistWithGlobalID:(id)arg1 ;
-(id)_libraryEntityWithStoreID:(long long)arg1 contentType:(long long)arg2 ;
-(id)_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(long long)arg3 ;
-(id)_addPendingUpdateRecord:(id)arg1 withKey:(id)arg2 inDictionary:(id)arg3 ;
-(id)_addPendingUpdateRecordForPlaylistGlobalID:(id)arg1 contentTasteType:(long long)arg2 ;
-(id)_addPendingUpdateRecordForStoreAdamID:(long long)arg1 contentTasteType:(long long)arg2 ;
-(void)_removePendingUpdateRecordForPlaylistGlobalID:(id)arg1 token:(id)arg2 ;
-(void)_removePendingUpdateRecordForStoreAdamID:(long long)arg1 token:(id)arg2 ;
-(id)_pendingUpdateRecordForKey:(id)arg1 inDictionary:(id)arg2 ;
-(id)_pendingUpdateRecordForStoreAdamID:(long long)arg1 ;
-(id)_pendingUpdateRecordForPlaylistGlobalID:(id)arg1 ;
@end

