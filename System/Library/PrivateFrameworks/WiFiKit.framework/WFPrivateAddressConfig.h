/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPrivateAddressConfig : NSObject <NSCopying> {

	BOOL _carrierBundleBased;
	unsigned long long _disabledReason;
	NSString* _ssid;

}

@property (assign,nonatomic) unsigned long long disabledReason;                                //@synthesize disabledReason=_disabledReason - In the implementation block
@property (assign,getter=isCarrierBundleBased,nonatomic) BOOL carrierBundleBased;              //@synthesize carrierBundleBased=_carrierBundleBased - In the implementation block
@property (nonatomic,copy) NSString * ssid;                                                    //@synthesize ssid=_ssid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(unsigned long long)disabledReason;
-(void)setDisabledReason:(unsigned long long)arg1 ;
-(id)initWithPrivateAddressConfigDictionary:(id)arg1 ssid:(id)arg2 ;
-(BOOL)isCarrierBundleBased;
-(void)setCarrierBundleBased:(BOOL)arg1 ;
@end
