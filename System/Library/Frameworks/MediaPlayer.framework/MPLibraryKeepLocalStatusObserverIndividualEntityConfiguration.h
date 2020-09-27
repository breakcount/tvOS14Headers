/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration {

	BOOL _collectionType;
	BOOL _hasNonPurgeableAsset;
	BOOL _storeRedownloadable;
	long long _managedStatus;

}

@property (assign,getter=isCollectionType,nonatomic) BOOL collectionType;                        //@synthesize collectionType=_collectionType - In the implementation block
@property (assign,nonatomic) long long managedStatus;                                            //@synthesize managedStatus=_managedStatus - In the implementation block
@property (assign,nonatomic) BOOL hasNonPurgeableAsset;                                          //@synthesize hasNonPurgeableAsset=_hasNonPurgeableAsset - In the implementation block
@property (assign,getter=isStoreRedownloadable,nonatomic) BOOL storeRedownloadable;              //@synthesize storeRedownloadable=_storeRedownloadable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setCollectionType:(BOOL)arg1 ;
-(BOOL)isStoreRedownloadable;
-(BOOL)isCollectionType;
-(long long)managedStatus;
-(void)setManagedStatus:(long long)arg1 ;
-(BOOL)hasNonPurgeableAsset;
-(void)setHasNonPurgeableAsset:(BOOL)arg1 ;
-(void)setStoreRedownloadable:(BOOL)arg1 ;
@end

