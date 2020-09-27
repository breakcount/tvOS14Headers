/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, AAUIProfilePictureStore, NSString;

@interface ASKProfilePictureStore : NSObject {

	BOOL _hasRequestedImages;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	ACAccountStore* _accountStore;
	AAUIProfilePictureStore* _profilePictureStore;
	NSString* _primaryAccountName;
	NSString* _storeAccountName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                    //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                               //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) AAUIProfilePictureStore * profilePictureStore;               //@synthesize profilePictureStore=_profilePictureStore - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountName;                                 //@synthesize primaryAccountName=_primaryAccountName - In the implementation block
@property (nonatomic,copy) NSString * storeAccountName;                                   //@synthesize storeAccountName=_storeAccountName - In the implementation block
@property (assign) BOOL hasRequestedImages;                                               //@synthesize hasRequestedImages=_hasRequestedImages - In the implementation block
+(id)sharedStore;
-(id)init;
-(void)dealloc;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStoreAccountName:(NSString *)arg1 ;
-(NSString *)storeAccountName;
-(void)appleAccountsDidChange:(id)arg1 ;
-(void)storeAccountsDidChange:(id)arg1 ;
-(void)profilePictureStoreDidChange:(id)arg1 ;
-(void)configureProfilePictureStoreAndNotifyIfNeeded;
-(NSString *)primaryAccountName;
-(AAUIProfilePictureStore *)profilePictureStore;
-(void)setPrimaryAccountName:(NSString *)arg1 ;
-(void)setProfilePictureStore:(AAUIProfilePictureStore *)arg1 ;
-(void)notifyIfNeeded;
-(BOOL)hasRequestedImages;
-(void)_markAsHasRequestedImages;
-(id)_profilePictureForFamilyMember:(id)arg1 withProfilePictureStore:(id)arg2 usingMonogrammer:(id)arg3 ;
-(void)setHasRequestedImages:(BOOL)arg1 ;
-(void)profilePictureForAccountOwnerWithoutMonogramFallbackWithPictureDiameter:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)profilePictureWithMonogramFallbackForFamilyMember:(id)arg1 pictureDiameter:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)profilePictureWithMonogramFallbackForFamilyMembers:(id)arg1 pictureDiameter:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateMonogrammerWithDiameter:(double)arg1 ;
@end

