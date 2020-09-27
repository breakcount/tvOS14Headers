/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, CKDPRecordFieldIdentifier, CKDPRecordType;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {

	NSMutableArray* _assets;
	NSData* _authPutRequest;
	int _authPutType;
	NSMutableArray* _contentRequestHeaders;
	CKDPRecordFieldIdentifier* _field;
	CKDPRecordType* _type;
	NSMutableArray* _uploads;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * field;                   //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                             //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploads;                            //@synthesize uploads=_uploads - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentRequestHeaders;              //@synthesize contentRequestHeaders=_contentRequestHeaders - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthPutRequest; 
@property (nonatomic,retain) NSData * authPutRequest;                             //@synthesize authPutRequest=_authPutRequest - In the implementation block
@property (assign,nonatomic) BOOL hasAuthPutType; 
@property (assign,nonatomic) int authPutType;                                     //@synthesize authPutType=_authPutType - In the implementation block
+(id)options;
+(Class)contentRequestHeadersType;
+(Class)assetsType;
+(Class)uploadsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(CKDPRecordType *)arg1 ;
-(CKDPRecordType *)type;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(CKDPRecordFieldIdentifier *)field;
-(void)setField:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasField;
-(NSMutableArray *)assets;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(void)clearAssets;
-(unsigned long long)assetsCount;
-(void)addAssets:(id)arg1 ;
-(void)setContentRequestHeaders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentRequestHeaders;
-(void)setUploads:(NSMutableArray *)arg1 ;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(void)setAuthPutType:(int)arg1 ;
-(void)addContentRequestHeaders:(id)arg1 ;
-(unsigned long long)contentRequestHeadersCount;
-(void)clearContentRequestHeaders;
-(id)contentRequestHeadersAtIndex:(unsigned long long)arg1 ;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
-(void)addUploads:(id)arg1 ;
-(unsigned long long)uploadsCount;
-(void)clearUploads;
-(id)uploadsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAuthPutRequest;
-(int)authPutType;
-(void)setHasAuthPutType:(BOOL)arg1 ;
-(BOOL)hasAuthPutType;
-(id)authPutTypeAsString:(int)arg1 ;
-(int)StringAsAuthPutType:(id)arg1 ;
-(NSMutableArray *)uploads;
@end

