/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECBus.h>

@interface CoreCECBusClient : CoreCECBus
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)addDeviceWithAttributes:(id)arg1 error:(id*)arg2 ;
-(BOOL)setOSDName:(id)arg1 error:(id*)arg2 ;
-(BOOL)setTvLanguageCode:(id)arg1 error:(id*)arg2 ;
@end

