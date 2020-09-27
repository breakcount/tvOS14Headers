/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSStateResponse : PBCodable <NSCopying> {

	long long _retryAfterSeconds;
	long long _version;
	int _icplAction;
	int _mpsAction;
	SCD_Struct_MP6 _has;

}

@property (assign,nonatomic) BOOL hasRetryAfterSeconds; 
@property (assign,nonatomic) long long retryAfterSeconds;              //@synthesize retryAfterSeconds=_retryAfterSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasMpsAction; 
@property (assign,nonatomic) int mpsAction;                            //@synthesize mpsAction=_mpsAction - In the implementation block
@property (assign,nonatomic) BOOL hasIcplAction; 
@property (assign,nonatomic) int icplAction;                           //@synthesize icplAction=_icplAction - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                        //@synthesize version=_version - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setRetryAfterSeconds:(long long)arg1 ;
-(void)setHasRetryAfterSeconds:(BOOL)arg1 ;
-(BOOL)hasRetryAfterSeconds;
-(int)mpsAction;
-(void)setMpsAction:(int)arg1 ;
-(void)setHasMpsAction:(BOOL)arg1 ;
-(BOOL)hasMpsAction;
-(id)mpsActionAsString:(int)arg1 ;
-(int)StringAsMpsAction:(id)arg1 ;
-(int)icplAction;
-(void)setIcplAction:(int)arg1 ;
-(void)setHasIcplAction:(BOOL)arg1 ;
-(BOOL)hasIcplAction;
-(id)icplActionAsString:(int)arg1 ;
-(int)StringAsIcplAction:(id)arg1 ;
-(long long)retryAfterSeconds;
@end

