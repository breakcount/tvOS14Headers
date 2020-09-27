/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__CFNCoreLoggable.h>

@protocol OS_nw_connection, OS_dispatch_queue;
@class NSObject;

@interface NWStreamPair : __CFNCoreLoggable {

	NSObject*<OS_nw_connection> _connection;
	PerSide_CFReadStream* _rs;
	PerSide_CFWriteStream* _ws;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _doneInitialRead;
	CFErrorRef _readError;
	CFErrorRef _writeError;
	ReadBuffer* _readData;
	unsigned char _atEOF;
	unsigned char _wsClosing;
	unsigned char _rsClosing;
	CFDataRef _cachedPeerName;
	SecTrustRef _cachedTrust;
	CFArrayRef _cachedPeerCerts;
	long long _outstandingWrites;

}
-(void)dealloc;
@end

