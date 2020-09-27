/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _MRPlaybackQueueContextProtobuf, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {

	double _artworkHeight;
	double _artworkWidth;
	int _cachingPolicy;
	NSMutableArray* _contentItemIdentifiers;
	_MRPlaybackQueueContextProtobuf* _context;
	NSString* _label;
	int _length;
	int _location;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSString* _requestID;
	BOOL _includeInfo;
	BOOL _includeLanguageOptions;
	BOOL _includeLyrics;
	BOOL _includeMetadata;
	BOOL _includeSections;
	BOOL _isLegacyNowPlayingInfoRequest;
	BOOL _returnContentItemAssetsInUserCompletion;
	SCD_Struct_MR3 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) int length;                                                   //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeMetadata; 
@property (assign,nonatomic) BOOL includeMetadata;                                         //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkWidth; 
@property (assign,nonatomic) double artworkWidth;                                          //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkHeight; 
@property (assign,nonatomic) double artworkHeight;                                         //@synthesize artworkHeight=_artworkHeight - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeLyrics; 
@property (assign,nonatomic) BOOL includeLyrics;                                           //@synthesize includeLyrics=_includeLyrics - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSections; 
@property (assign,nonatomic) BOOL includeSections;                                         //@synthesize includeSections=_includeSections - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeInfo; 
@property (assign,nonatomic) BOOL includeInfo;                                             //@synthesize includeInfo=_includeInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeLanguageOptions; 
@property (assign,nonatomic) BOOL includeLanguageOptions;                                  //@synthesize includeLanguageOptions=_includeLanguageOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) _MRPlaybackQueueContextProtobuf * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestID; 
@property (nonatomic,retain) NSString * requestID;                                         //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItemIdentifiers;                      //@synthesize contentItemIdentifiers=_contentItemIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasReturnContentItemAssetsInUserCompletion; 
@property (assign,nonatomic) BOOL returnContentItemAssetsInUserCompletion;                 //@synthesize returnContentItemAssetsInUserCompletion=_returnContentItemAssetsInUserCompletion - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                 //@synthesize playerPath=_playerPath - In the implementation block
@property (assign,nonatomic) BOOL hasCachingPolicy; 
@property (assign,nonatomic) int cachingPolicy;                                            //@synthesize cachingPolicy=_cachingPolicy - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasIsLegacyNowPlayingInfoRequest; 
@property (assign,nonatomic) BOOL isLegacyNowPlayingInfoRequest;                           //@synthesize isLegacyNowPlayingInfoRequest=_isLegacyNowPlayingInfoRequest - In the implementation block
+(Class)contentItemIdentifiersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)length;
-(void)setLength:(int)arg1 ;
-(id)dictionaryRepresentation;
-(_MRPlaybackQueueContextProtobuf *)context;
-(void)setContext:(_MRPlaybackQueueContextProtobuf *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(BOOL)hasLength;
-(BOOL)hasLabel;
-(int)location;
-(void)setLocation:(int)arg1 ;
-(BOOL)hasContext;
-(BOOL)hasLocation;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(NSMutableArray *)contentItemIdentifiers;
-(double)artworkWidth;
-(double)artworkHeight;
-(BOOL)includeInfo;
-(BOOL)includeLyrics;
-(BOOL)includeLanguageOptions;
-(BOOL)includeSections;
-(void)addContentItemIdentifiers:(id)arg1 ;
-(unsigned long long)contentItemIdentifiersCount;
-(void)clearContentItemIdentifiers;
-(id)contentItemIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(void)setHasIncludeMetadata:(BOOL)arg1 ;
-(BOOL)hasIncludeMetadata;
-(void)setArtworkWidth:(double)arg1 ;
-(void)setHasArtworkWidth:(BOOL)arg1 ;
-(BOOL)hasArtworkWidth;
-(void)setArtworkHeight:(double)arg1 ;
-(void)setHasArtworkHeight:(BOOL)arg1 ;
-(BOOL)hasArtworkHeight;
-(void)setIncludeLyrics:(BOOL)arg1 ;
-(void)setHasIncludeLyrics:(BOOL)arg1 ;
-(BOOL)hasIncludeLyrics;
-(void)setIncludeSections:(BOOL)arg1 ;
-(void)setHasIncludeSections:(BOOL)arg1 ;
-(BOOL)hasIncludeSections;
-(void)setIncludeInfo:(BOOL)arg1 ;
-(void)setHasIncludeInfo:(BOOL)arg1 ;
-(BOOL)hasIncludeInfo;
-(void)setIncludeLanguageOptions:(BOOL)arg1 ;
-(void)setHasIncludeLanguageOptions:(BOOL)arg1 ;
-(BOOL)hasIncludeLanguageOptions;
-(BOOL)hasRequestID;
-(void)setReturnContentItemAssetsInUserCompletion:(BOOL)arg1 ;
-(void)setHasReturnContentItemAssetsInUserCompletion:(BOOL)arg1 ;
-(BOOL)hasReturnContentItemAssetsInUserCompletion;
-(BOOL)hasPlayerPath;
-(void)setCachingPolicy:(int)arg1 ;
-(void)setHasCachingPolicy:(BOOL)arg1 ;
-(BOOL)hasCachingPolicy;
-(void)setIsLegacyNowPlayingInfoRequest:(BOOL)arg1 ;
-(void)setHasIsLegacyNowPlayingInfoRequest:(BOOL)arg1 ;
-(BOOL)hasIsLegacyNowPlayingInfoRequest;
-(BOOL)includeMetadata;
-(void)setContentItemIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)returnContentItemAssetsInUserCompletion;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(int)cachingPolicy;
-(BOOL)isLegacyNowPlayingInfoRequest;
@end

