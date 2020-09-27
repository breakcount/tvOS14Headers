/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2VendorIDPayload : NEIKEv2Payload {

	NSData* _vendorData;

}

@property (retain) NSData * vendorData;              //@synthesize vendorData=_vendorData - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSData *)vendorData;
-(void)setVendorData:(NSData *)arg1 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

