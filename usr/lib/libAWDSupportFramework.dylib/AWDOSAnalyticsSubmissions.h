/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDOSAnalyticsSubmissions : PBCodable <NSCopying> {

	unsigned long long _logs;
	unsigned long long _seconds;
	unsigned long long _sizeBytes;
	unsigned long long _timestamp;
	NSString* _connection;
	int _response;
	NSString* _routing;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResponse; 
@property (assign,nonatomic) int response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasConnection; 
@property (nonatomic,retain) NSString * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL hasRouting; 
@property (nonatomic,retain) NSString * routing;                        //@synthesize routing=_routing - In the implementation block
@property (assign,nonatomic) BOOL hasSizeBytes; 
@property (assign,nonatomic) unsigned long long sizeBytes;              //@synthesize sizeBytes=_sizeBytes - In the implementation block
@property (assign,nonatomic) BOOL hasLogs; 
@property (assign,nonatomic) unsigned long long logs;                   //@synthesize logs=_logs - In the implementation block
@property (assign,nonatomic) BOOL hasSeconds; 
@property (assign,nonatomic) unsigned long long seconds;                //@synthesize seconds=_seconds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setResponse:(int)arg1 ;
-(int)response;
-(id)dictionaryRepresentation;
-(unsigned long long)seconds;
-(unsigned long long)timestamp;
-(NSString *)connection;
-(void)setConnection:(NSString *)arg1 ;
-(unsigned long long)logs;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRouting:(NSString *)arg1 ;
-(void)setHasResponse:(BOOL)arg1 ;
-(BOOL)hasResponse;
-(BOOL)hasConnection;
-(BOOL)hasRouting;
-(void)setSizeBytes:(unsigned long long)arg1 ;
-(void)setHasSizeBytes:(BOOL)arg1 ;
-(BOOL)hasSizeBytes;
-(void)setLogs:(unsigned long long)arg1 ;
-(void)setHasLogs:(BOOL)arg1 ;
-(BOOL)hasLogs;
-(void)setSeconds:(unsigned long long)arg1 ;
-(void)setHasSeconds:(BOOL)arg1 ;
-(BOOL)hasSeconds;
-(NSString *)routing;
-(unsigned long long)sizeBytes;
@end

