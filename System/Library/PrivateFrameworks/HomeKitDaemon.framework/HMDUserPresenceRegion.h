/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HMDUserPresenceRegion : NSObject {

	unsigned long long _value;

}

@property (nonatomic,readonly) NSNumber * number; 
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)regionWithDict:(id)arg1 ;
+(id)regionWithNumber:(id)arg1 ;
+(id)regionWithValue:(unsigned long long)arg1 ;
+(id)regionWithMessage:(id)arg1 ;
+(id)regionWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)value;
-(NSNumber *)number;
-(id)initWithNumber:(id)arg1 ;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
@end

