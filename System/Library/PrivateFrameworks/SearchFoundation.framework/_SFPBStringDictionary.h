/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBStringDictionary.h>
@class NSArray, NSData;


@protocol _SFPBStringDictionary <NSObject>
@property (nonatomic,copy) NSArray * keyValues; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSArray *)keyValues;
-(NSData *)jsonData;
-(void)addKeyValues:(id)arg1;
-(void)clearKeyValues;
-(unsigned long long)keyValuesCount;
-(id)keyValuesAtIndex:(unsigned long long)arg1;
-(void)setKeyValues:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBStringDictionary : PBCodable <_SFPBStringDictionary, NSSecureCoding> {

	NSArray* _keyValues;

}

@property (nonatomic,copy) NSArray * keyValues;                     //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSArray *)keyValues;
-(NSData *)jsonData;
-(id)initWithNSDictionary:(id)arg1 ;
-(void)addKeyValues:(id)arg1 ;
-(void)clearKeyValues;
-(unsigned long long)keyValuesCount;
-(id)keyValuesAtIndex:(unsigned long long)arg1 ;
-(void)setKeyValues:(NSArray *)arg1 ;
@end

