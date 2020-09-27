/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderBrailleDriver/ScreenReaderBrailleDriver-Structs.h>
@class NSString;

@interface SCRDUSBDevice : NSObject {

	IOUSBDeviceStruct300* _device;
	IOUSBInterfaceStruct220* _interface;
	BOOL _isOpen;
	BOOL _isConfigured;
	NSString* _privateRunLoopMode;
	IONotificationPortRef _notificationPort;
	unsigned _notification;

}
-(void)dealloc;
-(BOOL)open;
-(BOOL)close;
-(BOOL)setInterface:(unsigned char)arg1 ;
-(BOOL)setConfiguration:(unsigned char)arg1 ;
-(BOOL)reset;
-(BOOL)isOpen;
-(BOOL)isConfigured;
-(int)vendor;
-(int)product;
-(unsigned char)numberOfConfigurations;
-(id)initWithIOObject:(unsigned)arg1 ;
-(unsigned long long)writeData:(void*)arg1 withSize:(unsigned long long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4 ;
-(BOOL)sendControlRequest:(unsigned char)arg1 type:(unsigned char)arg2 value:(unsigned short)arg3 index:(unsigned short)arg4 data:(void*)arg5 size:(unsigned short)arg6 sizeTransferred:(unsigned long long*)arg7 pipe:(unsigned char)arg8 timeout:(double)arg9 ;
-(unsigned long long)readData:(void*)arg1 withSize:(unsigned long long)arg2 fromPipe:(unsigned char)arg3 withTimeout:(double)arg4 ;
-(void)registerForDisconnectNotifications:(BOOL)arg1 ;
-(BOOL)openWithSeize:(BOOL)arg1 ;
-(unsigned long long)_transferData:(void*)arg1 withSize:(unsigned long long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4 withFunction:(/*function pointer*/void*)arg5 ;
-(BOOL)setAlternateInterface:(unsigned char)arg1 ;
-(BOOL)writeData:(void*)arg1 withSize:(unsigned long long)arg2 toBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned)arg4 andCompletionTimeOut:(unsigned)arg5 ;
-(BOOL)readData:(void*)arg1 withSize:(unsigned long long*)arg2 fromPipe:(unsigned char)arg3 ;
-(unsigned long long)readData:(void*)arg1 withSize:(unsigned long long)arg2 fromBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned)arg4 andCompletionTimeOut:(unsigned)arg5 ;
-(BOOL)getInformationForPipe:(unsigned char)arg1 direction:(char*)arg2 number:(char*)arg3 transferType:(char*)arg4 maxPacketSize:(unsigned short*)arg5 interval:(char*)arg6 ;
-(void)abortPipe:(unsigned char)arg1 ;
-(BOOL)clearPipe:(unsigned char)arg1 bothEnds:(BOOL)arg2 ;
@end

