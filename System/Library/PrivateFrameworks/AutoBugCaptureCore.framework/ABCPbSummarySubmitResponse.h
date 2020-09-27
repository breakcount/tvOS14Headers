/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSummarySubmitResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	NSString* _message;
	NSString* _status;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasStatus; 
@property (nonatomic,retain) NSString * status;                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                    //@synthesize message=_message - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(NSString *)status;
-(NSString *)message;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasMessage;
@end
