/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ContactEmbeddingAnalysisPETNeuralNetEmbedding : PBCodable <NSCopying> {

	SCD_Struct_Co3* _embeddings;

}

@property (nonatomic,readonly) unsigned long long embeddingsCount; 
@property (nonatomic,readonly) float* embeddings; 
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
-(void)setEmbeddings:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)embeddingsCount;
-(void)clearEmbeddings;
-(float)embeddingsAtIndex:(unsigned long long)arg1 ;
-(void)addEmbeddings:(float)arg1 ;
-(float*)embeddings;
@end

