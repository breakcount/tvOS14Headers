/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _MRPlaybackQueueContextProtobuf, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	_MRPlaybackQueueContextProtobuf* _context;
	int _location;
	NSString* _queueIdentifier;
	NSString* _requestID;
	_MRNowPlayingPlayerPathProtobuf* _resolvedPlayerPath;
	BOOL _sendingPlaybackQueueTransaction;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItems;                                     //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) _MRPlaybackQueueContextProtobuf * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestID; 
@property (nonatomic,retain) NSString * requestID;                                              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) BOOL hasResolvedPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * resolvedPlayerPath;              //@synthesize resolvedPlayerPath=_resolvedPlayerPath - In the implementation block
@property (assign,nonatomic) BOOL hasSendingPlaybackQueueTransaction; 
@property (assign,nonatomic) BOOL sendingPlaybackQueueTransaction;                              //@synthesize sendingPlaybackQueueTransaction=_sendingPlaybackQueueTransaction - In the implementation block
@property (nonatomic,readonly) BOOL hasQueueIdentifier; 
@property (nonatomic,retain) NSString * queueIdentifier;                                        //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
+(Class)contentItemType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(_MRPlaybackQueueContextProtobuf *)context;
-(void)setContext:(_MRPlaybackQueueContextProtobuf *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)location;
-(void)setLocation:(int)arg1 ;
-(BOOL)hasContext;
-(BOOL)hasLocation;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentItems;
-(_MRNowPlayingPlayerPathProtobuf *)resolvedPlayerPath;
-(NSString *)queueIdentifier;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(void)setResolvedPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasSendingPlaybackQueueTransaction;
-(BOOL)sendingPlaybackQueueTransaction;
-(void)setSendingPlaybackQueueTransaction:(BOOL)arg1 ;
-(BOOL)hasRequestID;
-(BOOL)hasQueueIdentifier;
-(unsigned long long)contentItemsCount;
-(void)clearContentItems;
-(BOOL)hasResolvedPlayerPath;
-(void)setHasSendingPlaybackQueueTransaction:(BOOL)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(id)contentItemAtIndex:(unsigned long long)arg1 ;
@end

