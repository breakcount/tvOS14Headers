/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DRSProtoDecisionResult : PBCodable <NSCopying> {

	NSString* _rejectionReason;
	BOOL _accepted;
	SCD_Struct_DR1 _has;

}

@property (assign,nonatomic) BOOL hasAccepted; 
@property (assign,nonatomic) BOOL accepted;                           //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,readonly) BOOL hasRejectionReason; 
@property (nonatomic,retain) NSString * rejectionReason;              //@synthesize rejectionReason=_rejectionReason - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAccepted:(BOOL)arg1 ;
-(BOOL)accepted;
-(BOOL)hasAccepted;
-(void)setRejectionReason:(NSString *)arg1 ;
-(void)setHasAccepted:(BOOL)arg1 ;
-(BOOL)hasRejectionReason;
-(NSString *)rejectionReason;
@end

