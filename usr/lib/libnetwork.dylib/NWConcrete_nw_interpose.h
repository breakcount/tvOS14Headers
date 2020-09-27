/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_interpose.h>

@protocol OS_nw_path_evaluator, OS_nw_dictionary, OS_nw_context, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_interpose : NSObject <OS_nw_interpose> {

	os_unfair_lock_s lock;
	unsigned char client_uuid[16];
	int delegated_pid;
	int delegated_upid;
	NSObject*<OS_nw_path_evaluator> evaluator;
	NSObject*<OS_nw_dictionary> flows;
	/*^block*/id flow_event_handler;
	NSObject*<OS_nw_context> context;
	NSObject*<OS_dispatch_queue> client_queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

