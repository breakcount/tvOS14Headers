/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPIonosphereData : PBCodable <NSCopying> {

	double _applicableTimeSec;
	double _d2vtecDphi2;
	double _d2vtecDtheta2;
	double _d2vtecDthetaphi;
	double _dvtecDphi;
	double _dvtecDtheta;
	double _estimatorAgeSec;
	double _geodeticAltitudeM;
	double _hmaxKm;
	double _latitudeDeg;
	double _longitudeDeg;
	double _pd2vtecDphi2D2vtecDphi2;
	double _pd2vtecDtheta2D2vtecDtheta2;
	double _pd2vtecDthetadphiD2vtecDthetadphi;
	double _pdvtecDphiDvtecDphi;
	double _pdvtecDthetaDvtecDtheta;
	double _phmaxHmaxKm2;
	double _pvtec0Vtec0;
	double _vtec0;
	SCD_Struct_CL10 _has;

}

@property (assign,nonatomic) BOOL hasLatitudeDeg; 
@property (assign,nonatomic) double latitudeDeg;                                     //@synthesize latitudeDeg=_latitudeDeg - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeDeg; 
@property (assign,nonatomic) double longitudeDeg;                                    //@synthesize longitudeDeg=_longitudeDeg - In the implementation block
@property (assign,nonatomic) BOOL hasGeodeticAltitudeM; 
@property (assign,nonatomic) double geodeticAltitudeM;                               //@synthesize geodeticAltitudeM=_geodeticAltitudeM - In the implementation block
@property (assign,nonatomic) BOOL hasApplicableTimeSec; 
@property (assign,nonatomic) double applicableTimeSec;                               //@synthesize applicableTimeSec=_applicableTimeSec - In the implementation block
@property (assign,nonatomic) BOOL hasHmaxKm; 
@property (assign,nonatomic) double hmaxKm;                                          //@synthesize hmaxKm=_hmaxKm - In the implementation block
@property (assign,nonatomic) BOOL hasVtec0; 
@property (assign,nonatomic) double vtec0;                                           //@synthesize vtec0=_vtec0 - In the implementation block
@property (assign,nonatomic) BOOL hasDvtecDtheta; 
@property (assign,nonatomic) double dvtecDtheta;                                     //@synthesize dvtecDtheta=_dvtecDtheta - In the implementation block
@property (assign,nonatomic) BOOL hasDvtecDphi; 
@property (assign,nonatomic) double dvtecDphi;                                       //@synthesize dvtecDphi=_dvtecDphi - In the implementation block
@property (assign,nonatomic) BOOL hasD2vtecDtheta2; 
@property (assign,nonatomic) double d2vtecDtheta2;                                   //@synthesize d2vtecDtheta2=_d2vtecDtheta2 - In the implementation block
@property (assign,nonatomic) BOOL hasD2vtecDthetaphi; 
@property (assign,nonatomic) double d2vtecDthetaphi;                                 //@synthesize d2vtecDthetaphi=_d2vtecDthetaphi - In the implementation block
@property (assign,nonatomic) BOOL hasD2vtecDphi2; 
@property (assign,nonatomic) double d2vtecDphi2;                                     //@synthesize d2vtecDphi2=_d2vtecDphi2 - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatorAgeSec; 
@property (assign,nonatomic) double estimatorAgeSec;                                 //@synthesize estimatorAgeSec=_estimatorAgeSec - In the implementation block
@property (assign,nonatomic) BOOL hasPhmaxHmaxKm2; 
@property (assign,nonatomic) double phmaxHmaxKm2;                                    //@synthesize phmaxHmaxKm2=_phmaxHmaxKm2 - In the implementation block
@property (assign,nonatomic) BOOL hasPvtec0Vtec0; 
@property (assign,nonatomic) double pvtec0Vtec0;                                     //@synthesize pvtec0Vtec0=_pvtec0Vtec0 - In the implementation block
@property (assign,nonatomic) BOOL hasPdvtecDthetaDvtecDtheta; 
@property (assign,nonatomic) double pdvtecDthetaDvtecDtheta;                         //@synthesize pdvtecDthetaDvtecDtheta=_pdvtecDthetaDvtecDtheta - In the implementation block
@property (assign,nonatomic) BOOL hasPdvtecDphiDvtecDphi; 
@property (assign,nonatomic) double pdvtecDphiDvtecDphi;                             //@synthesize pdvtecDphiDvtecDphi=_pdvtecDphiDvtecDphi - In the implementation block
@property (assign,nonatomic) BOOL hasPd2vtecDtheta2D2vtecDtheta2; 
@property (assign,nonatomic) double pd2vtecDtheta2D2vtecDtheta2;                     //@synthesize pd2vtecDtheta2D2vtecDtheta2=_pd2vtecDtheta2D2vtecDtheta2 - In the implementation block
@property (assign,nonatomic) BOOL hasPd2vtecDthetadphiD2vtecDthetadphi; 
@property (assign,nonatomic) double pd2vtecDthetadphiD2vtecDthetadphi;               //@synthesize pd2vtecDthetadphiD2vtecDthetadphi=_pd2vtecDthetadphiD2vtecDthetadphi - In the implementation block
@property (assign,nonatomic) BOOL hasPd2vtecDphi2D2vtecDphi2; 
@property (assign,nonatomic) double pd2vtecDphi2D2vtecDphi2;                         //@synthesize pd2vtecDphi2D2vtecDphi2=_pd2vtecDphi2D2vtecDphi2 - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLatitudeDeg:(double)arg1 ;
-(void)setHasLatitudeDeg:(BOOL)arg1 ;
-(BOOL)hasLatitudeDeg;
-(void)setLongitudeDeg:(double)arg1 ;
-(void)setHasLongitudeDeg:(BOOL)arg1 ;
-(BOOL)hasLongitudeDeg;
-(void)setGeodeticAltitudeM:(double)arg1 ;
-(void)setHasGeodeticAltitudeM:(BOOL)arg1 ;
-(BOOL)hasGeodeticAltitudeM;
-(void)setApplicableTimeSec:(double)arg1 ;
-(void)setHasApplicableTimeSec:(BOOL)arg1 ;
-(BOOL)hasApplicableTimeSec;
-(void)setHmaxKm:(double)arg1 ;
-(void)setHasHmaxKm:(BOOL)arg1 ;
-(BOOL)hasHmaxKm;
-(void)setVtec0:(double)arg1 ;
-(void)setHasVtec0:(BOOL)arg1 ;
-(BOOL)hasVtec0;
-(void)setDvtecDtheta:(double)arg1 ;
-(void)setHasDvtecDtheta:(BOOL)arg1 ;
-(BOOL)hasDvtecDtheta;
-(void)setDvtecDphi:(double)arg1 ;
-(void)setHasDvtecDphi:(BOOL)arg1 ;
-(BOOL)hasDvtecDphi;
-(void)setD2vtecDtheta2:(double)arg1 ;
-(void)setHasD2vtecDtheta2:(BOOL)arg1 ;
-(BOOL)hasD2vtecDtheta2;
-(void)setD2vtecDthetaphi:(double)arg1 ;
-(void)setHasD2vtecDthetaphi:(BOOL)arg1 ;
-(BOOL)hasD2vtecDthetaphi;
-(void)setD2vtecDphi2:(double)arg1 ;
-(void)setHasD2vtecDphi2:(BOOL)arg1 ;
-(BOOL)hasD2vtecDphi2;
-(void)setEstimatorAgeSec:(double)arg1 ;
-(void)setHasEstimatorAgeSec:(BOOL)arg1 ;
-(BOOL)hasEstimatorAgeSec;
-(void)setPhmaxHmaxKm2:(double)arg1 ;
-(void)setHasPhmaxHmaxKm2:(BOOL)arg1 ;
-(BOOL)hasPhmaxHmaxKm2;
-(void)setPvtec0Vtec0:(double)arg1 ;
-(void)setHasPvtec0Vtec0:(BOOL)arg1 ;
-(BOOL)hasPvtec0Vtec0;
-(void)setPdvtecDthetaDvtecDtheta:(double)arg1 ;
-(void)setHasPdvtecDthetaDvtecDtheta:(BOOL)arg1 ;
-(BOOL)hasPdvtecDthetaDvtecDtheta;
-(void)setPdvtecDphiDvtecDphi:(double)arg1 ;
-(void)setHasPdvtecDphiDvtecDphi:(BOOL)arg1 ;
-(BOOL)hasPdvtecDphiDvtecDphi;
-(void)setPd2vtecDtheta2D2vtecDtheta2:(double)arg1 ;
-(void)setHasPd2vtecDtheta2D2vtecDtheta2:(BOOL)arg1 ;
-(BOOL)hasPd2vtecDtheta2D2vtecDtheta2;
-(void)setPd2vtecDthetadphiD2vtecDthetadphi:(double)arg1 ;
-(void)setHasPd2vtecDthetadphiD2vtecDthetadphi:(BOOL)arg1 ;
-(BOOL)hasPd2vtecDthetadphiD2vtecDthetadphi;
-(void)setPd2vtecDphi2D2vtecDphi2:(double)arg1 ;
-(void)setHasPd2vtecDphi2D2vtecDphi2:(BOOL)arg1 ;
-(BOOL)hasPd2vtecDphi2D2vtecDphi2;
-(double)latitudeDeg;
-(double)longitudeDeg;
-(double)geodeticAltitudeM;
-(double)applicableTimeSec;
-(double)hmaxKm;
-(double)vtec0;
-(double)dvtecDtheta;
-(double)dvtecDphi;
-(double)d2vtecDtheta2;
-(double)d2vtecDthetaphi;
-(double)d2vtecDphi2;
-(double)estimatorAgeSec;
-(double)phmaxHmaxKm2;
-(double)pvtec0Vtec0;
-(double)pdvtecDthetaDvtecDtheta;
-(double)pdvtecDphiDvtecDphi;
-(double)pd2vtecDtheta2D2vtecDtheta2;
-(double)pd2vtecDthetadphiD2vtecDthetadphi;
-(double)pd2vtecDphi2D2vtecDphi2;
@end

