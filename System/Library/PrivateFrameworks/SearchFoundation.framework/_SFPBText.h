/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBText.h>
@class NSString, NSData;


@protocol _SFPBText <NSObject>
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned maxLines; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(unsigned)maxLines;
-(void)setMaxLines:(unsigned)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBText : PBCodable <_SFPBText, NSSecureCoding> {

	unsigned _maxLines;
	NSString* _text;

}

@property (copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned maxLines;                     //@synthesize maxLines=_maxLines - In the implementation block
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
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(unsigned)maxLines;
-(void)setMaxLines:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
@end
