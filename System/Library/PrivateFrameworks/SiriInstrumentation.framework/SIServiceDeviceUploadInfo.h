/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SIServiceDeviceUploadInfo : PBCodable {

	BOOL _hasRef_id;
	BOOL _hasNs_relative_to_boot;
	NSString* _ref_id;
	unsigned long long _ns_relative_to_boot;

}

@property (nonatomic,copy) NSString * ref_id;                                     //@synthesize ref_id=_ref_id - In the implementation block
@property (assign,nonatomic) BOOL hasRef_id;                                      //@synthesize hasRef_id=_hasRef_id - In the implementation block
@property (assign,nonatomic) unsigned long long ns_relative_to_boot;              //@synthesize ns_relative_to_boot=_ns_relative_to_boot - In the implementation block
@property (assign,nonatomic) BOOL hasNs_relative_to_boot;                         //@synthesize hasNs_relative_to_boot=_hasNs_relative_to_boot - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setRef_id:(NSString *)arg1 ;
-(void)setNs_relative_to_boot:(unsigned long long)arg1 ;
-(NSString *)ref_id;
-(unsigned long long)ns_relative_to_boot;
-(BOOL)hasRef_id;
-(void)setHasRef_id:(BOOL)arg1 ;
-(BOOL)hasNs_relative_to_boot;
-(void)setHasNs_relative_to_boot:(BOOL)arg1 ;
@end

