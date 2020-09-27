/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_ws_ping_request.h>

@protocol OS_dispatch_data, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_ws_ping_request : NSObject <OS_nw_ws_ping_request> {

	NSObject*<OS_dispatch_data> contents;
	NSObject*<OS_dispatch_queue> client_queue;
	/*^block*/id pong_handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end
