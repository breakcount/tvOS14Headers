/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WiFiMACAddress;

@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding> {

	unsigned char _datapathID;
	WiFiMACAddress* _initiatorDataAddress;

}

@property (nonatomic,readonly) unsigned char datapathID;                           //@synthesize datapathID=_datapathID - In the implementation block
@property (nonatomic,readonly) WiFiMACAddress * initiatorDataAddress;              //@synthesize initiatorDataAddress=_initiatorDataAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)datapathID;
-(WiFiMACAddress *)initiatorDataAddress;
-(id)initWithDatapathID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 ;
@end

