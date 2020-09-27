/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventAppAssociating.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString, NSData;

@interface BMIntentEvent : BMEventBase <BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper> {

	double _absoluteTimestamp;
	NSString* _bundleID;
	NSString* _sourceId;
	NSString* _intentClass;
	NSString* _intentVerb;
	long long _intentType;
	long long _intentHandlingStatus;
	NSData* _interaction;

}

@property (assign,nonatomic) double absoluteTimestamp;                    //@synthesize absoluteTimestamp=_absoluteTimestamp - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * sourceId;                           //@synthesize sourceId=_sourceId - In the implementation block
@property (nonatomic,copy) NSString * intentClass;                        //@synthesize intentClass=_intentClass - In the implementation block
@property (nonatomic,copy) NSString * intentVerb;                         //@synthesize intentVerb=_intentVerb - In the implementation block
@property (assign,nonatomic) long long intentType;                        //@synthesize intentType=_intentType - In the implementation block
@property (assign,nonatomic) long long intentHandlingStatus;              //@synthesize intentHandlingStatus=_intentHandlingStatus - In the implementation block
@property (nonatomic,copy) NSData * interaction;                          //@synthesize interaction=_interaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned dataVersion; 
+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
+(id)eventWithDKEvent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setInteraction:(NSData *)arg1 ;
-(NSData *)interaction;
-(NSString *)sourceId;
-(double)absoluteTimestamp;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(void)setSourceId:(NSString *)arg1 ;
-(void)setIntentType:(long long)arg1 ;
-(long long)intentType;
-(unsigned)dataVersion;
-(id)jsonDict;
-(long long)intentHandlingStatus;
-(void)setIntentHandlingStatus:(long long)arg1 ;
-(NSString *)intentClass;
-(NSString *)intentVerb;
-(id)serialize;
-(id)json;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(id)initWithProto:(id)arg1 ;
-(id)encodeAsProto;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithAbsoluteTime:(double)arg1 bundleId:(id)arg2 sourceId:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(long long)arg6 intentHandlingStatus:(long long)arg7 interaction:(id)arg8 ;
-(void)setIntentClass:(NSString *)arg1 ;
-(void)setIntentVerb:(NSString *)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForCFAbsoluteTime:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
@end
