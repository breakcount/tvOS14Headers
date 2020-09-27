/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPTLVParser : HMFObject {

	NSData* _tlvData;

}
+(id)parserWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)parseResponseForNumber:(unsigned long long)arg1 ;
-(id)parseResponseForUInt8:(unsigned long long)arg1 ;
-(id)parseResponseForUInt16:(unsigned long long)arg1 ;
-(id)parseResponseForString:(unsigned long long)arg1 ;
-(id)parseResponseForData:(unsigned long long)arg1 ;
-(id)parseResponseForArray:(unsigned long long)arg1 ;
-(id)parseResponseForUUID:(unsigned long long)arg1 ;
@end
