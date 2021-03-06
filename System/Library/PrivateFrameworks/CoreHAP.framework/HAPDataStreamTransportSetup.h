/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPDataStreamTransportCommandWrapper, HAPDataStreamTransportProtocolWrapper, NSData, NSString;

@interface HAPDataStreamTransportSetup : NSObject <NSCopying, HAPTLVProtocol> {

	HAPDataStreamTransportCommandWrapper* _command;
	HAPDataStreamTransportProtocolWrapper* _transportType;
	NSData* _controllerKeySalt;

}

@property (nonatomic,retain) HAPDataStreamTransportCommandWrapper * command;                     //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) HAPDataStreamTransportProtocolWrapper * transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSData * controllerKeySalt;                                         //@synthesize controllerKeySalt=_controllerKeySalt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPDataStreamTransportProtocolWrapper *)transportType;
-(void)setTransportType:(HAPDataStreamTransportProtocolWrapper *)arg1 ;
-(void)setCommand:(HAPDataStreamTransportCommandWrapper *)arg1 ;
-(HAPDataStreamTransportCommandWrapper *)command;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setControllerKeySalt:(NSData *)arg1 ;
-(NSData *)controllerKeySalt;
-(id)initWithCommand:(id)arg1 transportType:(id)arg2 controllerKeySalt:(id)arg3 ;
@end

