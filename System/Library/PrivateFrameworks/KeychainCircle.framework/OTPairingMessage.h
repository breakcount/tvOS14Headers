/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OTSponsorToApplicantRound1M2, OTApplicantToSponsorRound2M1, OTSupportOctagonMessage, OTSupportSOSMessage, OTSponsorToApplicantRound2M2;

@interface OTPairingMessage : PBCodable <NSCopying> {

	OTSponsorToApplicantRound1M2* _epoch;
	OTApplicantToSponsorRound2M1* _prepare;
	OTSupportOctagonMessage* _supportsOctagon;
	OTSupportSOSMessage* _supportsSOS;
	OTSponsorToApplicantRound2M2* _voucher;

}

@property (nonatomic,readonly) BOOL hasEpoch; 
@property (nonatomic,retain) OTSponsorToApplicantRound1M2 * epoch;                   //@synthesize epoch=_epoch - In the implementation block
@property (nonatomic,readonly) BOOL hasPrepare; 
@property (nonatomic,retain) OTApplicantToSponsorRound2M1 * prepare;                 //@synthesize prepare=_prepare - In the implementation block
@property (nonatomic,readonly) BOOL hasVoucher; 
@property (nonatomic,retain) OTSponsorToApplicantRound2M2 * voucher;                 //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportsOctagon; 
@property (nonatomic,retain) OTSupportOctagonMessage * supportsOctagon;              //@synthesize supportsOctagon=_supportsOctagon - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportsSOS; 
@property (nonatomic,retain) OTSupportSOSMessage * supportsSOS;                      //@synthesize supportsSOS=_supportsSOS - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(OTSponsorToApplicantRound1M2 *)epoch;
-(void)setEpoch:(OTSponsorToApplicantRound1M2 *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(OTApplicantToSponsorRound2M1 *)prepare;
-(OTSponsorToApplicantRound2M2 *)voucher;
-(void)setVoucher:(OTSponsorToApplicantRound2M2 *)arg1 ;
-(BOOL)hasEpoch;
-(BOOL)hasPrepare;
-(BOOL)hasVoucher;
-(BOOL)hasSupportsOctagon;
-(BOOL)hasSupportsSOS;
-(void)setPrepare:(OTApplicantToSponsorRound2M1 *)arg1 ;
-(OTSupportOctagonMessage *)supportsOctagon;
-(void)setSupportsOctagon:(OTSupportOctagonMessage *)arg1 ;
-(OTSupportSOSMessage *)supportsSOS;
-(void)setSupportsSOS:(OTSupportSOSMessage *)arg1 ;
@end

