/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface DRSProtoDiagnosticUploadRequestResponseBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	NSMutableArray* _decisionResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * decisionResults;              //@synthesize decisionResults=_decisionResults - In the implementation block
+(Class)decisionResultsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)decisionResults;
-(void)addDecisionResults:(id)arg1 ;
-(unsigned long long)decisionResultsCount;
-(void)clearDecisionResults;
-(id)decisionResultsAtIndex:(unsigned long long)arg1 ;
-(void)setDecisionResults:(NSMutableArray *)arg1 ;
@end

