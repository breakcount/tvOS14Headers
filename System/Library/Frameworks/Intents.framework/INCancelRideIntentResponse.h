/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>

@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse {

	INCurrencyAmount* _cancellationFee;
	NSDateComponents* _cancellationFeeThreshold;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INCurrencyAmount * cancellationFee;                       //@synthesize cancellationFee=_cancellationFee - In the implementation block
@property (nonatomic,copy) NSDateComponents * cancellationFeeThreshold;              //@synthesize cancellationFeeThreshold=_cancellationFeeThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(INCurrencyAmount *)cancellationFee;
-(void)setCancellationFee:(INCurrencyAmount *)arg1 ;
-(NSDateComponents *)cancellationFeeThreshold;
-(void)setCancellationFeeThreshold:(NSDateComponents *)arg1 ;
@end
