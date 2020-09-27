/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProductAvailability.h>
@class NSArray, NSData;


@protocol _SFPBProductAvailability <NSObject>
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSArray *)results;
-(void)setResults:(id)arg1;
-(unsigned long long)resultsCount;
-(void)clearResults;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)addResults:(id)arg1;
-(id)resultsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBProductAvailability : PBCodable <_SFPBProductAvailability, NSSecureCoding> {

	NSArray* _results;

}

@property (nonatomic,copy) NSArray * results;                       //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)results;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(unsigned long long)resultsCount;
-(void)clearResults;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)addResults:(id)arg1 ;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
@end

