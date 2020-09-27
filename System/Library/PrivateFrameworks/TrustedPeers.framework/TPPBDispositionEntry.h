/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPPBDisposition, NSString;

@interface TPPBDispositionEntry : PBCodable <NSCopying> {

	TPPBDisposition* _disposition;
	NSString* _peerID;

}

@property (nonatomic,readonly) BOOL hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                          //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisposition; 
@property (nonatomic,retain) TPPBDisposition * disposition;              //@synthesize disposition=_disposition - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(TPPBDisposition *)disposition;
-(void)setDisposition:(TPPBDisposition *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(BOOL)hasPeerID;
-(BOOL)hasDisposition;
@end

