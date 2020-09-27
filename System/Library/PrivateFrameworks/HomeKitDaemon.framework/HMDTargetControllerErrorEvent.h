/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerErrorEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _errorType;
	HMDHAPAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long errorType;                    //@synthesize errorType=_errorType - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
+(id)uuid;
+(id)errorEventWithErrorType:(unsigned long long)arg1 accessory:(id)arg2 ;
-(unsigned long long)errorType;
-(HMDHAPAccessory *)accessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithErrorType:(unsigned long long)arg1 accessory:(id)arg2 ;
@end

