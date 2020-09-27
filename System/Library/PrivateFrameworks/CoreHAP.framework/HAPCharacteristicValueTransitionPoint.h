/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, HAPTLVUnsignedNumberValue, NSString;

@interface HAPCharacteristicValueTransitionPoint : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _targetValue;
	HAPTLVUnsignedNumberValue* _targetCompletionDuration;
	HAPTLVUnsignedNumberValue* _startDelayDuration;

}

@property (nonatomic,retain) NSData * targetValue;                                              //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * targetCompletionDuration;              //@synthesize targetCompletionDuration=_targetCompletionDuration - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * startDelayDuration;                    //@synthesize startDelayDuration=_startDelayDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSData *)targetValue;
-(void)setTargetValue:(NSData *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setTargetCompletionDuration:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setStartDelayDuration:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)targetCompletionDuration;
-(HAPTLVUnsignedNumberValue *)startDelayDuration;
-(id)initWithTargetValue:(id)arg1 targetCompletionDuration:(id)arg2 startDelayDuration:(id)arg3 ;
@end

