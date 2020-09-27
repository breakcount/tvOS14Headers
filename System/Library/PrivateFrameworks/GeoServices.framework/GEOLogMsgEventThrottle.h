/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgEventThrottle : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _manifestEnv;
	NSString* _requestAppIdentifier;
	double _throttleDuration;
	NSString* _throttleReqType;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _networkService;
	unsigned _throttleCount;
	int _throttleMode;
	unsigned _throttleTriggerCount;
	unsigned _throttleTriggerDuration;
	int _throttleType;
	unsigned _tilesetId;
	struct {
		unsigned has_throttleDuration : 1;
		unsigned has_networkService : 1;
		unsigned has_throttleCount : 1;
		unsigned has_throttleMode : 1;
		unsigned has_throttleTriggerCount : 1;
		unsigned has_throttleTriggerDuration : 1;
		unsigned has_throttleType : 1;
		unsigned has_tilesetId : 1;
		unsigned read_manifestEnv : 1;
		unsigned read_requestAppIdentifier : 1;
		unsigned read_throttleReqType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasNetworkService; 
@property (assign,nonatomic) int networkService; 
@property (nonatomic,readonly) BOOL hasRequestAppIdentifier; 
@property (nonatomic,retain) NSString * requestAppIdentifier; 
@property (nonatomic,readonly) BOOL hasManifestEnv; 
@property (nonatomic,retain) NSString * manifestEnv; 
@property (assign,nonatomic) BOOL hasTilesetId; 
@property (assign,nonatomic) unsigned tilesetId; 
@property (assign,nonatomic) BOOL hasThrottleType; 
@property (assign,nonatomic) int throttleType; 
@property (assign,nonatomic) BOOL hasThrottleMode; 
@property (assign,nonatomic) int throttleMode; 
@property (nonatomic,readonly) BOOL hasThrottleReqType; 
@property (nonatomic,retain) NSString * throttleReqType; 
@property (assign,nonatomic) BOOL hasThrottleTriggerCount; 
@property (assign,nonatomic) unsigned throttleTriggerCount; 
@property (assign,nonatomic) BOOL hasThrottleTriggerDuration; 
@property (assign,nonatomic) unsigned throttleTriggerDuration; 
@property (assign,nonatomic) BOOL hasThrottleCount; 
@property (assign,nonatomic) unsigned throttleCount; 
@property (assign,nonatomic) BOOL hasThrottleDuration; 
@property (assign,nonatomic) double throttleDuration; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setNetworkService:(int)arg1 ;
-(void)setRequestAppIdentifier:(NSString *)arg1 ;
-(void)setTilesetId:(unsigned)arg1 ;
-(void)setManifestEnv:(NSString *)arg1 ;
-(void)setThrottleType:(int)arg1 ;
-(void)setThrottleMode:(int)arg1 ;
-(void)setThrottleReqType:(NSString *)arg1 ;
-(void)setThrottleTriggerCount:(unsigned)arg1 ;
-(void)setThrottleTriggerDuration:(unsigned)arg1 ;
-(void)setThrottleCount:(unsigned)arg1 ;
-(void)setThrottleDuration:(double)arg1 ;
-(NSString *)requestAppIdentifier;
-(NSString *)manifestEnv;
-(int)networkService;
-(void)setHasNetworkService:(BOOL)arg1 ;
-(BOOL)hasNetworkService;
-(id)networkServiceAsString:(int)arg1 ;
-(int)StringAsNetworkService:(id)arg1 ;
-(BOOL)hasRequestAppIdentifier;
-(BOOL)hasManifestEnv;
-(unsigned)tilesetId;
-(void)setHasTilesetId:(BOOL)arg1 ;
-(BOOL)hasTilesetId;
-(NSString *)throttleReqType;
-(int)throttleType;
-(void)setHasThrottleType:(BOOL)arg1 ;
-(BOOL)hasThrottleType;
-(id)throttleTypeAsString:(int)arg1 ;
-(int)StringAsThrottleType:(id)arg1 ;
-(int)throttleMode;
-(void)setHasThrottleMode:(BOOL)arg1 ;
-(BOOL)hasThrottleMode;
-(id)throttleModeAsString:(int)arg1 ;
-(int)StringAsThrottleMode:(id)arg1 ;
-(BOOL)hasThrottleReqType;
-(unsigned)throttleTriggerCount;
-(void)setHasThrottleTriggerCount:(BOOL)arg1 ;
-(BOOL)hasThrottleTriggerCount;
-(unsigned)throttleTriggerDuration;
-(void)setHasThrottleTriggerDuration:(BOOL)arg1 ;
-(BOOL)hasThrottleTriggerDuration;
-(unsigned)throttleCount;
-(void)setHasThrottleCount:(BOOL)arg1 ;
-(BOOL)hasThrottleCount;
-(double)throttleDuration;
-(void)setHasThrottleDuration:(BOOL)arg1 ;
-(BOOL)hasThrottleDuration;
@end

