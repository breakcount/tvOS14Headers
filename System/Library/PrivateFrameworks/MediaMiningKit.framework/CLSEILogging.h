/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface CLSEILogging : NSObject {

	NSObject*<OS_os_log> _loggingConnection;

}

@property (readonly) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
+(id)sharedLogging;
-(NSObject*<OS_os_log>)loggingConnection;
@end
