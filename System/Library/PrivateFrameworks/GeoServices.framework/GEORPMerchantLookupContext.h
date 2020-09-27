/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOPDMapsIdentifier, GEOLocation;

@interface GEORPMerchantLookupContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _correlationId;
	NSString* _merchantAdamId;
	NSString* _merchantFormattedAddress;
	GEOPDMapsIdentifier* _merchantId;
	NSString* _merchantIndustryCategory;
	long long _merchantIndustryCode;
	NSString* _merchantName;
	NSString* _merchantRawName;
	NSString* _merchantUrl;
	GEOLocation* _transactionLocation;
	double _transactionTime;
	NSString* _transactionType;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestTransactionType;
	BOOL _isAppleCard;
	struct {
		unsigned has_merchantIndustryCode : 1;
		unsigned has_transactionTime : 1;
		unsigned has_requestTransactionType : 1;
		unsigned has_isAppleCard : 1;
		unsigned read_correlationId : 1;
		unsigned read_merchantAdamId : 1;
		unsigned read_merchantFormattedAddress : 1;
		unsigned read_merchantId : 1;
		unsigned read_merchantIndustryCategory : 1;
		unsigned read_merchantName : 1;
		unsigned read_merchantRawName : 1;
		unsigned read_merchantUrl : 1;
		unsigned read_transactionLocation : 1;
		unsigned read_transactionType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMerchantIndustryCode; 
@property (assign,nonatomic) long long merchantIndustryCode; 
@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * merchantId; 
@property (nonatomic,readonly) BOOL hasMerchantName; 
@property (nonatomic,retain) NSString * merchantName; 
@property (nonatomic,readonly) BOOL hasMerchantRawName; 
@property (nonatomic,retain) NSString * merchantRawName; 
@property (nonatomic,readonly) BOOL hasMerchantIndustryCategory; 
@property (nonatomic,retain) NSString * merchantIndustryCategory; 
@property (nonatomic,readonly) BOOL hasMerchantUrl; 
@property (nonatomic,retain) NSString * merchantUrl; 
@property (nonatomic,readonly) BOOL hasMerchantFormattedAddress; 
@property (nonatomic,retain) NSString * merchantFormattedAddress; 
@property (nonatomic,readonly) BOOL hasMerchantAdamId; 
@property (nonatomic,retain) NSString * merchantAdamId; 
@property (assign,nonatomic) BOOL hasTransactionTime; 
@property (assign,nonatomic) double transactionTime; 
@property (nonatomic,readonly) BOOL hasTransactionType; 
@property (nonatomic,retain) NSString * transactionType; 
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation; 
@property (nonatomic,readonly) BOOL hasCorrelationId; 
@property (nonatomic,retain) NSString * correlationId; 
@property (assign,nonatomic) BOOL hasIsAppleCard; 
@property (assign,nonatomic) BOOL isAppleCard; 
@property (assign,nonatomic) BOOL hasRequestTransactionType; 
@property (assign,nonatomic) int requestTransactionType; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOLocation *)transactionLocation;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(BOOL)hasTransactionLocation;
-(GEOPDMapsIdentifier *)merchantId;
-(void)setMerchantId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMerchantId;
-(void)setTransactionType:(NSString *)arg1 ;
-(NSString *)transactionType;
-(BOOL)hasTransactionType;
-(NSString *)merchantName;
-(void)setMerchantName:(NSString *)arg1 ;
-(BOOL)hasMerchantName;
-(NSString *)merchantRawName;
-(NSString *)merchantIndustryCategory;
-(NSString *)merchantUrl;
-(NSString *)merchantFormattedAddress;
-(NSString *)merchantAdamId;
-(NSString *)correlationId;
-(void)setMerchantIndustryCode:(long long)arg1 ;
-(void)setMerchantRawName:(NSString *)arg1 ;
-(void)setMerchantIndustryCategory:(NSString *)arg1 ;
-(void)setMerchantUrl:(NSString *)arg1 ;
-(void)setMerchantFormattedAddress:(NSString *)arg1 ;
-(void)setMerchantAdamId:(NSString *)arg1 ;
-(void)setTransactionTime:(double)arg1 ;
-(void)setCorrelationId:(NSString *)arg1 ;
-(void)setIsAppleCard:(BOOL)arg1 ;
-(void)setRequestTransactionType:(int)arg1 ;
-(long long)merchantIndustryCode;
-(void)setHasMerchantIndustryCode:(BOOL)arg1 ;
-(BOOL)hasMerchantIndustryCode;
-(BOOL)hasMerchantRawName;
-(BOOL)hasMerchantIndustryCategory;
-(BOOL)hasMerchantUrl;
-(BOOL)hasMerchantFormattedAddress;
-(BOOL)hasMerchantAdamId;
-(double)transactionTime;
-(void)setHasTransactionTime:(BOOL)arg1 ;
-(BOOL)hasTransactionTime;
-(BOOL)hasCorrelationId;
-(BOOL)isAppleCard;
-(void)setHasIsAppleCard:(BOOL)arg1 ;
-(BOOL)hasIsAppleCard;
-(int)requestTransactionType;
-(void)setHasRequestTransactionType:(BOOL)arg1 ;
-(BOOL)hasRequestTransactionType;
-(id)requestTransactionTypeAsString:(int)arg1 ;
-(int)StringAsRequestTransactionType:(id)arg1 ;
@end
