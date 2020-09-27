/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaViewContainer : PBCodable {

	NSString* _viewID;
	NSString* _snippetClass;
	NSString* _dialogIdentifier;
	NSString* _dialogPhase;
	BOOL _hasViewID;
	BOOL _hasSnippetClass;
	BOOL _hasDialogIdentifier;
	BOOL _hasDialogPhase;

}

@property (nonatomic,copy) NSString * viewID;                        //@synthesize viewID=_viewID - In the implementation block
@property (assign,nonatomic) BOOL hasViewID;                         //@synthesize hasViewID=_hasViewID - In the implementation block
@property (nonatomic,copy) NSString * snippetClass;                  //@synthesize snippetClass=_snippetClass - In the implementation block
@property (assign,nonatomic) BOOL hasSnippetClass;                   //@synthesize hasSnippetClass=_hasSnippetClass - In the implementation block
@property (nonatomic,copy) NSString * dialogIdentifier;              //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDialogIdentifier;               //@synthesize hasDialogIdentifier=_hasDialogIdentifier - In the implementation block
@property (nonatomic,copy) NSString * dialogPhase;                   //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (assign,nonatomic) BOOL hasDialogPhase;                    //@synthesize hasDialogPhase=_hasDialogPhase - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogPhase;
-(void)setDialogPhase:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setViewID:(NSString *)arg1 ;
-(void)setSnippetClass:(NSString *)arg1 ;
-(NSString *)viewID;
-(BOOL)hasViewID;
-(void)setHasViewID:(BOOL)arg1 ;
-(BOOL)hasDialogPhase;
-(void)setHasDialogPhase:(BOOL)arg1 ;
-(BOOL)hasDialogIdentifier;
-(void)setHasDialogIdentifier:(BOOL)arg1 ;
-(NSString *)snippetClass;
-(BOOL)hasSnippetClass;
-(void)setHasSnippetClass:(BOOL)arg1 ;
@end
