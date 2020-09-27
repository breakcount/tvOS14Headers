/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ENAdvertisementMetadata : NSObject {

	char _txPower;
	unsigned char _calibrationConfidence;
	long long _version;

}

@property (nonatomic,readonly) long long version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionString; 
@property (nonatomic,readonly) char txPower;                                     //@synthesize txPower=_txPower - In the implementation block
@property (nonatomic,readonly) unsigned char calibrationConfidence;              //@synthesize calibrationConfidence=_calibrationConfidence - In the implementation block
-(long long)version;
-(NSString *)versionString;
-(unsigned char)calibrationConfidence;
-(char)txPower;
-(id)initWithVersion:(long long)arg1 txPower:(char)arg2 calibrationConfidence:(unsigned char)arg3 ;
-(unsigned char)attenuationForRSSI:(char)arg1 saturated:(BOOL)arg2 ;
@end

