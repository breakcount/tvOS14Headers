/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class NSXPCConnection;

@interface CarbonComponentScannerXPCClient : NSObject {

	NSXPCConnection* _connection;

}
-(id)init;
-(id)xpcConnection;
-(void)handleConnectionError:(BOOL)arg1 ;
-(AudioComponentVector*)initialScan:(id)arg1 ;
-(void)rescan:(id)arg1 added:(AudioComponentVector*)arg2 removed:(AudioComponentVector*)arg3 ;
@end

