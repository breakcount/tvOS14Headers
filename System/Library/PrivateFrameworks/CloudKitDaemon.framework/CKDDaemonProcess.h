/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKDDaemonProcess : NSObject {

	BOOL _isSystemInstalledBinary;
	long long _processType;

}

@property (nonatomic,readonly) long long processType;                     //@synthesize processType=_processType - In the implementation block
@property (nonatomic,readonly) BOOL isSystemInstalledBinary;              //@synthesize isSystemInstalledBinary=_isSystemInstalledBinary - In the implementation block
+(id)currentProcess;
+(void)deriveCurrentProcessWithArgC:(int)arg1 argv:(const char**)arg2 ;
-(BOOL)isSystemInstalledBinary;
-(long long)processType;
-(id)_initWithProcessType:(long long)arg1 ;
-(id)_initWithArgC:(int)arg1 argv:(const char**)arg2 ;
@end

