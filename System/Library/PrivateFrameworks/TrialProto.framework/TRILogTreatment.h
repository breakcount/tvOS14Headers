/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface TRILogTreatment : PBCodable <NSCopying> {

	SCD_Struct_TR2* _namespaceIds;
	unsigned _deploymentId;
	NSString* _experimentId;
	NSMutableArray* _namespaceNames;
	NSMutableArray* _namespaces;
	NSString* _treatmentId;
	SCD_Struct_TR3 _has;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                             //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentId; 
@property (nonatomic,retain) NSString * treatmentId;                              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) unsigned long long namespaceIdsCount; 
@property (nonatomic,readonly) unsigned* namespaceIds; 
@property (assign,nonatomic) BOOL hasDeploymentId; 
@property (assign,nonatomic) unsigned deploymentId;                               //@synthesize deploymentId=_deploymentId - In the implementation block
@property (nonatomic,retain) NSMutableArray * namespaces;                         //@synthesize namespaces=_namespaces - In the implementation block
@property (nonatomic,retain) NSMutableArray * namespaceNames;                     //@synthesize namespaceNames=_namespaceNames - In the implementation block
+(Class)namespaceType;
+(Class)namespaceNameType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasExperimentId;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(void)addNamespace:(id)arg1 ;
-(NSMutableArray *)namespaces;
-(void)setNamespaces:(NSMutableArray *)arg1 ;
-(unsigned long long)namespacesCount;
-(BOOL)hasTreatmentId;
-(void)setDeploymentId:(unsigned)arg1 ;
-(unsigned)deploymentId;
-(void)addNamespaceName:(id)arg1 ;
-(unsigned long long)namespaceIdsCount;
-(void)clearNamespaceIds;
-(unsigned)namespaceIdAtIndex:(unsigned long long)arg1 ;
-(void)addNamespaceId:(unsigned)arg1 ;
-(unsigned long long)namespaceNamesCount;
-(void)clearNamespaceNames;
-(id)namespaceNameAtIndex:(unsigned long long)arg1 ;
-(void)clearNamespaces;
-(id)namespaceAtIndex:(unsigned long long)arg1 ;
-(unsigned*)namespaceIds;
-(void)setNamespaceIds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasDeploymentId:(BOOL)arg1 ;
-(BOOL)hasDeploymentId;
-(NSMutableArray *)namespaceNames;
-(void)setNamespaceNames:(NSMutableArray *)arg1 ;
@end

