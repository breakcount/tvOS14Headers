/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaHomeKitAccessoryResponse : PBCodable {

	int _homeKitAccessoryType;
	int _numAccessoriesCompleted;
	int _numAccessoriesNotCompleted;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) int homeKitAccessoryType;                        //@synthesize homeKitAccessoryType=_homeKitAccessoryType - In the implementation block
@property (assign,nonatomic) BOOL hasHomeKitAccessoryType; 
@property (assign,nonatomic) int numAccessoriesCompleted;                     //@synthesize numAccessoriesCompleted=_numAccessoriesCompleted - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesCompleted; 
@property (assign,nonatomic) int numAccessoriesNotCompleted;                  //@synthesize numAccessoriesNotCompleted=_numAccessoriesNotCompleted - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNotCompleted; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setHomeKitAccessoryType:(int)arg1 ;
-(void)setNumAccessoriesCompleted:(int)arg1 ;
-(void)setNumAccessoriesNotCompleted:(int)arg1 ;
-(int)homeKitAccessoryType;
-(int)numAccessoriesCompleted;
-(int)numAccessoriesNotCompleted;
-(BOOL)hasHomeKitAccessoryType;
-(void)setHasHomeKitAccessoryType:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesCompleted;
-(void)setHasNumAccessoriesCompleted:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNotCompleted;
-(void)setHasNumAccessoriesNotCompleted:(BOOL)arg1 ;
@end

