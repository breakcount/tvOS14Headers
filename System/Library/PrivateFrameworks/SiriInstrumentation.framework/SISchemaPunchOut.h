/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaViewContainer, NSData;

@interface SISchemaPunchOut : PBCodable {

	NSString* _appID;
	NSString* _urlScheme;
	SISchemaViewContainer* _viewContainer;
	NSData* _viewElementID;
	BOOL _hasAppID;
	BOOL _hasUrlScheme;
	BOOL _hasViewContainer;
	BOOL _hasViewElementID;

}

@property (nonatomic,copy) NSString * appID;                                     //@synthesize appID=_appID - In the implementation block
@property (assign,nonatomic) BOOL hasAppID;                                      //@synthesize hasAppID=_hasAppID - In the implementation block
@property (nonatomic,copy) NSString * urlScheme;                                 //@synthesize urlScheme=_urlScheme - In the implementation block
@property (assign,nonatomic) BOOL hasUrlScheme;                                  //@synthesize hasUrlScheme=_hasUrlScheme - In the implementation block
@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (assign,nonatomic) BOOL hasViewContainer;                              //@synthesize hasViewContainer=_hasViewContainer - In the implementation block
@property (nonatomic,copy) NSData * viewElementID;                               //@synthesize viewElementID=_viewElementID - In the implementation block
@property (assign,nonatomic) BOOL hasViewElementID;                              //@synthesize hasViewElementID=_hasViewElementID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)appID;
-(void)setAppID:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(void)setUrlScheme:(NSString *)arg1 ;
-(BOOL)hasAppID;
-(SISchemaViewContainer *)viewContainer;
-(BOOL)hasViewContainer;
-(void)setHasViewContainer:(BOOL)arg1 ;
-(void)setViewElementID:(NSData *)arg1 ;
-(NSString *)urlScheme;
-(NSData *)viewElementID;
-(BOOL)hasUrlScheme;
-(BOOL)hasViewElementID;
-(void)setHasAppID:(BOOL)arg1 ;
-(void)setHasUrlScheme:(BOOL)arg1 ;
-(void)setHasViewElementID:(BOOL)arg1 ;
@end

