/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDTransportHistoryRecord : PBCodable <NSCopying> {

	unsigned long long _timestampFailure;
	NSMutableArray* _connectionInfos;
	int _connectionMethod;
	int _transport;
	unsigned _transportSwitchReasonErrorCode;
	int _transportSwitchReasonErrorDomain;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTransport; 
@property (assign,nonatomic) int transport;                                         //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionMethod; 
@property (assign,nonatomic) int connectionMethod;                                  //@synthesize connectionMethod=_connectionMethod - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectionInfos;                      //@synthesize connectionInfos=_connectionInfos - In the implementation block
@property (assign,nonatomic) BOOL hasTransportSwitchReasonErrorDomain; 
@property (assign,nonatomic) int transportSwitchReasonErrorDomain;                  //@synthesize transportSwitchReasonErrorDomain=_transportSwitchReasonErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasTransportSwitchReasonErrorCode; 
@property (assign,nonatomic) unsigned transportSwitchReasonErrorCode;               //@synthesize transportSwitchReasonErrorCode=_transportSwitchReasonErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampFailure; 
@property (assign,nonatomic) unsigned long long timestampFailure;                   //@synthesize timestampFailure=_timestampFailure - In the implementation block
+(Class)connectionInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transport;
-(void)setTransport:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConnectionInfos:(NSMutableArray *)arg1 ;
-(void)addConnectionInfo:(id)arg1 ;
-(unsigned long long)connectionInfosCount;
-(void)clearConnectionInfos;
-(id)connectionInfoAtIndex:(unsigned long long)arg1 ;
-(void)setHasTransport:(BOOL)arg1 ;
-(BOOL)hasTransport;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(int)connectionMethod;
-(void)setConnectionMethod:(int)arg1 ;
-(void)setHasConnectionMethod:(BOOL)arg1 ;
-(BOOL)hasConnectionMethod;
-(id)connectionMethodAsString:(int)arg1 ;
-(int)StringAsConnectionMethod:(id)arg1 ;
-(int)transportSwitchReasonErrorDomain;
-(void)setTransportSwitchReasonErrorDomain:(int)arg1 ;
-(void)setHasTransportSwitchReasonErrorDomain:(BOOL)arg1 ;
-(BOOL)hasTransportSwitchReasonErrorDomain;
-(id)transportSwitchReasonErrorDomainAsString:(int)arg1 ;
-(int)StringAsTransportSwitchReasonErrorDomain:(id)arg1 ;
-(void)setTransportSwitchReasonErrorCode:(unsigned)arg1 ;
-(void)setHasTransportSwitchReasonErrorCode:(BOOL)arg1 ;
-(BOOL)hasTransportSwitchReasonErrorCode;
-(void)setTimestampFailure:(unsigned long long)arg1 ;
-(void)setHasTimestampFailure:(BOOL)arg1 ;
-(BOOL)hasTimestampFailure;
-(NSMutableArray *)connectionInfos;
-(unsigned)transportSwitchReasonErrorCode;
-(unsigned long long)timestampFailure;
@end

