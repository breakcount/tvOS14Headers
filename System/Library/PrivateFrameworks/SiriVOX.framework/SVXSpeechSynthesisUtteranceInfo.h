/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SVXSpeechSynthesisUtteranceInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _utterance;
	NSArray* _wordTimings;

}

@property (nonatomic,copy,readonly) NSString * utterance;               //@synthesize utterance=_utterance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * wordTimings;              //@synthesize wordTimings=_wordTimings - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)utterance;
-(NSArray *)wordTimings;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithUtterance:(id)arg1 wordTimings:(id)arg2 ;
@end

