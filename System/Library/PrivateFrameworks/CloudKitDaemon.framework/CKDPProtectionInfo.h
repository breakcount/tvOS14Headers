/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable <NSCopying> {

	NSData* _protectionInfo;
	NSString* _protectionInfoTag;

}

@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) NSData * protectionInfo;                   //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfoTag; 
@property (nonatomic,retain) NSString * protectionInfoTag;              //@synthesize protectionInfoTag=_protectionInfoTag - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)protectionInfo;
-(void)setProtectionInfo:(NSData *)arg1 ;
-(void)setProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasProtectionInfo;
-(BOOL)hasProtectionInfoTag;
-(NSString *)protectionInfoTag;
@end

