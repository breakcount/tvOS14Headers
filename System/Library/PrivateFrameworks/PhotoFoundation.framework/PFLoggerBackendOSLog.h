/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSMutableDictionary, NSString;

@interface PFLoggerBackendOSLog : PFLoggerBackendAdapter {

	NSMutableDictionary* _osLogs;
	NSString* _sender;
	os_unfair_lock_s _lock;

}
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
-(BOOL)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(id)initWithSender:(id)arg1 ;
-(BOOL)formatsMessage;
-(BOOL)outputsToDebuggerConsole;
-(void)_logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 type:(unsigned)arg3 ;
@end

