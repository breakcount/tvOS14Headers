/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFCharacteristicReadPolicy.h>

@class NSString;

@interface HFStaticReadPolicy : NSObject <HFCharacteristicReadPolicy> {

	unsigned long long _decision;

}

@property (nonatomic,readonly) unsigned long long decision;              //@synthesize decision=_decision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyWithDecision:(unsigned long long)arg1 ;
-(NSString *)description;
-(id)init;
-(unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2 ;
-(id)initWithDecision:(unsigned long long)arg1 ;
-(unsigned long long)decision;
@end
