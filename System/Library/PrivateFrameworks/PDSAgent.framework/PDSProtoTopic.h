/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PDSProtoTopic : PBCodable <NSCopying> {

	NSMutableArray* _appInfos;
	NSString* _name;
	NSString* _qualifier;

}

@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * qualifier;                   //@synthesize qualifier=_qualifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * appInfos;              //@synthesize appInfos=_appInfos - In the implementation block
+(Class)appInfoType;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)qualifier;
-(void)setQualifier:(NSString *)arg1 ;
-(void)addAppInfo:(id)arg1 ;
-(unsigned long long)appInfosCount;
-(void)clearAppInfos;
-(id)appInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)appInfos;
-(void)setAppInfos:(NSMutableArray *)arg1 ;
@end
