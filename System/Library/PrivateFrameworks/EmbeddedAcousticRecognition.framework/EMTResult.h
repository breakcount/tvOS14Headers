/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLocale, NSArray, NSString;

@interface EMTResult : NSObject <NSCopying> {

	BOOL _lowConfidence;
	float _confidence;
	NSLocale* _locale;
	NSArray* _tokens;
	NSString* _metaInfo;

}

@property (nonatomic,readonly) NSLocale * locale;                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                 //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) float confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL lowConfidence;               //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (nonatomic,readonly) NSString * metaInfo;              //@synthesize metaInfo=_metaInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSLocale *)locale;
-(float)confidence;
-(NSArray *)tokens;
-(BOOL)lowConfidence;
-(id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(BOOL)arg4 metaInfo:(id)arg5 ;
-(NSString *)metaInfo;
@end

