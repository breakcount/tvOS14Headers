/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceCountryCode;
	NSString* _deviceSku;
	NSMutableArray* _requests;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_deviceCountryCode : 1;
		unsigned read_deviceSku : 1;
		unsigned read_requests : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * requests; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceSku; 
@property (nonatomic,retain) NSString * deviceSku; 
+(Class)requestType;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSMutableArray *)requests;
-(void)clearRequests;
-(void)addRequest:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(void)setDeviceSku:(NSString *)arg1 ;
-(NSString *)deviceCountryCode;
-(NSString *)deviceSku;
-(unsigned long long)requestsCount;
-(id)requestAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(BOOL)hasDeviceSku;
@end

