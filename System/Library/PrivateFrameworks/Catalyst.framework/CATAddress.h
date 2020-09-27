/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface CATAddress : NSObject {

	NSString* _address;
	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * address;                             //@synthesize address=_address - In the implementation block
@property (getter=isAny,nonatomic,readonly) BOOL any; 
@property (getter=isLocalWiFi,nonatomic,readonly) BOOL localWiFi; 
+(id)any;
+(id)localWiFi;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)address;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(BOOL)isAny;
-(BOOL)isLocalWiFi;
@end
