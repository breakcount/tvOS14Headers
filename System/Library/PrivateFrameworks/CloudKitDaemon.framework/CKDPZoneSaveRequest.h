/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPZone, NSString;

@interface CKDPZoneSaveRequest : PBRequest <NSCopying> {

	CKDPZone* _recordZone;
	NSString* _zoneProtectionInfoTag;

}

@property (nonatomic,readonly) BOOL hasRecordZone; 
@property (nonatomic,retain) CKDPZone * recordZone;                         //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneProtectionInfoTag; 
@property (nonatomic,retain) NSString * zoneProtectionInfoTag;              //@synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(CKDPZone *)recordZone;
-(void)setRecordZone:(CKDPZone *)arg1 ;
-(BOOL)hasRecordZone;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZoneProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasZoneProtectionInfoTag;
-(NSString *)zoneProtectionInfoTag;
@end

