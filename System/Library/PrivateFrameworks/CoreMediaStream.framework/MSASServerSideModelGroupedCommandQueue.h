/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSASGroupedQueue.h>

@class MSASEnqueuedCommand;

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue {

	MSASEnqueuedCommand* _lastEnqueuedCommand;

}

@property (nonatomic,retain) MSASEnqueuedCommand * lastEnqueuedCommand;              //@synthesize lastEnqueuedCommand=_lastEnqueuedCommand - In the implementation block
+(/*^block*/id)calloutBlockForCommand:(id)arg1 ;
-(BOOL)hasEnqueuedItems;
-(void)flushQueue;
-(void)workQueueFlushQueue;
-(void)workQueueEnqueueCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindDeletedAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindDeletedAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindNewAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindDeletedAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindNewInvitation:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindDeletedInvitation:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 ;
-(void)MSASModel:(id)arg1 didDeleteComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 ;
-(MSASEnqueuedCommand *)lastEnqueuedCommand;
-(void)setLastEnqueuedCommand:(MSASEnqueuedCommand *)arg1 ;
@end

