/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {

	NSString* _extensionName;
	NSData* _extensionPayload;
	unsigned _typeCode;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasExtensionName; 
@property (nonatomic,retain) NSString * extensionName;                //@synthesize extensionName=_extensionName - In the implementation block
@property (assign,nonatomic) BOOL hasTypeCode; 
@property (assign,nonatomic) unsigned typeCode;                       //@synthesize typeCode=_typeCode - In the implementation block
@property (nonatomic,readonly) BOOL hasExtensionPayload; 
@property (nonatomic,retain) NSData * extensionPayload;               //@synthesize extensionPayload=_extensionPayload - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)typeCode;
-(void)setTypeCode:(unsigned)arg1 ;
-(NSString *)extensionName;
-(BOOL)hasTypeCode;
-(BOOL)hasExtensionPayload;
-(NSData *)extensionPayload;
-(void)setExtensionName:(NSString *)arg1 ;
-(void)setExtensionPayload:(NSData *)arg1 ;
-(BOOL)hasExtensionName;
-(void)setHasTypeCode:(BOOL)arg1 ;
@end

