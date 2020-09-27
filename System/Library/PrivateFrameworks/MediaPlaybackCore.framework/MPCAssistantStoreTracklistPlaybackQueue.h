/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSArray, MPIdentifierSet;

@interface MPCAssistantStoreTracklistPlaybackQueue : MPCAssistantPlaybackQueue {

	NSArray* _storeItemIDs;
	long long _shuffleType;
	MPIdentifierSet* _collectionIdentifierSet;

}

@property (nonatomic,readonly) NSArray * storeItemIDs;                                 //@synthesize storeItemIDs=_storeItemIDs - In the implementation block
@property (assign,nonatomic) long long shuffleType;                                    //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) MPIdentifierSet * collectionIdentifierSet;              //@synthesize collectionIdentifierSet=_collectionIdentifierSet - In the implementation block
+(id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3 ;
-(id)description;
-(long long)shuffleType;
-(MPIdentifierSet *)collectionIdentifierSet;
-(void)setShuffleType:(long long)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3 ;
-(NSArray *)storeItemIDs;
@end

